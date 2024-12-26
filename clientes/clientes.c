// Bibliotecas

#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "clientes.h"
#include "../utilitarios/utis.h" // Assinatura das utilidades
#include "../validadores/validadores.h" // Assinatura dos validadores

void modulo_cliente(void) {
  
  char opcao;

  do {
        opcao = menu_cliente();
        
        switch(opcao) {
            case '1': cadastrar_cliente();
                      break;
            case '2': pesquisar_cliente();
                      break;
            case '3': atualizar_cliente();
                      break;
            case '4': excluir_cliente();
                      break;
        }
  } while(opcao != '0');
}

// Funções 

// Função para cadastrar cliente
void cadastrar_cliente(void){
    Cliente* clt;

    clt = tela_cadastrar_cliente();
    gravar_cliente(clt);
    free(clt);
}

// Função para exibir cliente
void pesquisar_cliente(void){
  Cliente* clt;
  char* cpf;

  cpf = tela_pesquisar_cliente();
  clt = buscar_cliente(cpf);
  exibir_cliente(clt);
  free(clt);
  free(cpf);
}

// Função para alterar cliente
void atualizar_cliente(void) {
  Cliente* clt;
  char* cpf;

  cpf = tela_recadastrar_cliente();
  clt = buscar_cliente(cpf);

  if (clt == NULL) {
    printf("\n\t//// Cliente Inexistente !\n");
  } else {
    clt = recadastrar_cliente();
    strcpy(clt->cpf, cpf);
    regravar_cliente(clt);
    free(clt);
  }
  free(cpf);
}

// Função para excluir cliente
void excluir_cliente(void) {
  Cliente* clt;
  char* cpf;
  char confirma;
  cpf = tela_excluir_cliente();
  clt = (Cliente*) malloc(sizeof(Cliente));
  clt = buscar_cliente(cpf);
  if (clt == NULL) {
    printf("\n\t//// Cliente Inexistente !\n");
  } else {
    printf("\n\t//// Cliente Encontrado!\n");
    printf("\t//// Nome: %s\n", clt->nome);
    printf("\n\t//// Deseja excluir esse cliente? [S/N]: ");

    do {
        scanf("%c", &confirma);
        limparBuffer();
        confirma = toupper(confirma);
        if (confirma == 'S') {
          clt->status = 'I';
          regravar_cliente(clt);
          printf("\n\t//// Cliente Excluído com Sucesso!\n");
          printf("\tTecle <ENTER> para prosseguir... ");
          getchar();

        } else if (confirma == 'N') {
          printf("\n\t//// Operação Cancelada!\n");
          printf("\tTecle <ENTER> para prosseguir... ");
          getchar();
        } else {
          printf("\n\t //// Operação Inválida! Tente [S/N]: ");
        }
    } while(confirma != 'S' && confirma != 'N');
    
    free(clt);
  }
  free(cpf);
}


char menu_cliente(void) {

  char op_cliente;

  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                              Módulo cliente                            ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                         [1] Cadastrar cliente                          ///\n");
  printf("\t///                         [2] Exibir cliente                             ///\n"); 
  printf("\t///                         [3] Alterar dados do cliente                   ///\n"); 
  printf("\t///                         [4] Excluir cliente                            ///\n");
  printf("\t///                         [0] Retornar ao Menu Principal                 ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\n"); 
  printf("\t//// Escolha uma opção: "); 
  scanf("%c", &op_cliente);
  limparBuffer();

  return op_cliente;
}

// Função para gravar cliente
void gravar_cliente(Cliente* clt) {
  FILE* fp;
  fp = fopen("cliente.dat", "ab");
  if (fp == NULL) {
    printf("Erro na abertura do arquivo!\n");
    printf("Não é possível continuar...\n");
    exit(1);
  }
  fwrite(clt, sizeof(Cliente), 1, fp);
  fclose(fp);
}
  
// Função para regravar cliente
void regravar_cliente(Cliente* clt) {
  int find;
  FILE* fp;
  Cliente* cliente_lido;

  cliente_lido = (Cliente*) malloc(sizeof(Cliente));
  fp = fopen("cliente.dat", "r+b");
  if (fp == NULL) {
    printf("Erro na abertura do arquivo!\n");
    printf("Não é possível continuar...\n");
    exit(1);
  }
  
    find = 0;
    while(fread(cliente_lido, sizeof(Cliente), 1, fp) && !find) {
      if (strcmp(cliente_lido->cpf, clt->cpf) == 0) {
          find == 1;
          fseek(fp, -1*sizeof(Cliente), SEEK_CUR);
      fwrite(clt, sizeof(Cliente), 1, fp);
      }
    }
    fclose(fp);
    free(cliente_lido);
}

Cliente* tela_cadastrar_cliente(void) {
  Cliente* clt;
  clt = (Cliente*) malloc(sizeof(Cliente));


  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                            Cadastrar cliente                           ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  // Loop para validar o nome
  do {
        printf("\t//// Digite o nome: ");
        fgets(clt->nome, 40, stdin); // Limita a entrada a 39 caracteres
        clt->nome[strcspn(clt->nome, "\n")] = '\0';

        // Verifica se o nome é válido
        if (!validaNome(clt->nome)) {
            printf("\t//// Nome inválido. Tente novamente.\n");
        }
    } while (!validaNome(clt->nome)); // Continua pedindo até que um nome válido seja inserido
  
  printf("\n");

 // Loop para validar o e-mail
    do {
        printf("\t//// Digite o e-mail: ");
        scanf("%29s", clt->email); // Limita a entrada a 29 caracteres
        limparBuffer();

        // Verifica se o e-mail é válido
        if (!validaEmail(clt->email)) {
            printf("\t//// E-mail inválido. Tente novamente.\n");
        }
    } while (!validaEmail(clt->email)); // Continua pedindo até que um e-mail válido seja inserido

  printf("\n");

// Loop para validar o telefone
    do {
        printf("\t//// Digite o telefone no formato (XX) XXXXX-XXXX: ");
        fgets(clt->telefone, 16, stdin); // Limita a entrada a 15 caracteres
        clt->telefone[strcspn(clt->telefone, "\n")] = '\0';
        limparBuffer();

        if (!validaFone(clt->telefone)) {
            printf("\t//// Telefone inválido. Tente novamente.\n");
        }
    } while (!validaFone(clt->telefone)); // Continua pedindo até que um telefone válido seja inserido

  printf("\n");

// Loop para validar o CPF
    do {
        printf("\t//// Digite o CPF (apenas números): ");
        scanf("%11s", clt->cpf); // Lê até 11 dígitos, sem considerar o caractere nulo
        limparBuffer();

        // Verifica se o CPF é válido
        if (!valida_CPF(clt->cpf)) {
            printf("\t//// CPF inválido. Tente novamente.\n");
        }
    } while (!valida_CPF(clt->cpf)); // Continua pedindo até que um CPF válido seja inserido

    // Indica status como ativo
  clt->status = 'A';

  printf("\n");
  printf("\t//// Cliente cadastrado com sucesso!");
  printf("\n");
  printf("\tTecle <ENTER> para prosseguir... ");
  getchar();
  return clt;
}

// Função para mostrar a tela de inserir o CPF
char* tela_pesquisar_cliente(void) {
    char* cpf;
    cpf = (char*) malloc(12*sizeof(char*));
    
      printf("\n");
      system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
      printf("\t//////////////////////////////////////////////////////////////////////////////\n");
      printf("\t///                                                                        ///\n");
      printf("\t///                               Exibir cliente                           ///\n");
      printf("\t///                                                                        ///\n");
      printf("\t//////////////////////////////////////////////////////////////////////////////\n");
      printf("\n");
      printf("\t//// Digite o CPF do cliente a ser exibido: ");
      scanf("%s", cpf);
      limparBuffer();
      return cpf;
} 

char* tela_recadastrar_cliente(void) {
  char* cpf;
  cpf = (char*) malloc(12*sizeof(char*));

  printf("\n");
  system("clear || cls"); // se for Linux use 'clear', se for Windows use 'cls'
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                             Recadastrar Cliente                        ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t//// Digite o CPF do profissional a ser recadastrado: ");
  scanf("%s", cpf);
  limparBuffer();
  return cpf;
}

char* tela_excluir_cliente(void) {
  
    char* cpf;
    cpf = (char*) malloc(12*sizeof(char*));
  
  printf("\n");
  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                             Excluir Cliente                            ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t//// Digite o CPF do cliente a ser excluído: ");
  scanf("%s", cpf);
  limparBuffer();
  return cpf;
}

// Função para buscar cliente
Cliente* buscar_cliente(char* cpf) {
    FILE* fp;
    Cliente* clt;
    clt = (Cliente*) malloc(sizeof(Cliente));
    fp = fopen("cliente.dat", "rb");
    if (fp == NULL) {
        printf("Erro na abertura do arquivo!\n");
        printf("Não é possível continuar...\n");
        exit(1);
    }
    while(!feof(fp)) {
      fread(clt, sizeof(Cliente), 1, fp);
      if ((strcmp(clt->cpf, cpf) == 0) && (clt->status == 'A')) {
          fclose(fp);
          return clt;
      }
    }
    fclose(fp);
    return NULL;
}

void exibir_cliente(Cliente* clt) {
  if (clt == NULL) {
      printf("\n\t//// Cliente inexistente !\n");
  } else {
      printf("\n");
      printf("\t//// Cliente encontrado !\n");
      printf("\n");
      printf("\t//// Nome: %s\n", clt->nome);
      printf("\n");
      printf("\t//// E-mail: %s\n", clt->email);
      printf("\n");
      printf("\t//// Telefone: %s\n", clt->telefone);
      printf("\n");
      printf("\t//// CPF: %s\n", clt->cpf);
      printf("\n");
      printf("\t//// Status: %c\n", clt->status);
   }
    printf("\ttecle <ENTER> para continuar: ");
    getchar();
  }



// funçao para alterar dados 
Cliente* recadastrar_cliente(void) {
  Cliente* clt;
  clt = (Cliente*) malloc(sizeof(Cliente));
  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                            Recadastrar cliente                         ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");

// Loop para validar o nome
    do {
        printf("\t//// Digite o nome: ");
        fgets(clt->nome, 40, stdin); // Limita a entrada a 39 caracteres
        clt->nome[strcspn(clt->nome, "\n")] = '\0';

        // Verifica se o nome é válido
        if (!validaNome(clt->nome)) {
            printf("\t//// Nome inválido. Tente novamente.\n");
        }
    } while (!validaNome(clt->nome)); // Continua pedindo até que um nome válido seja inserido

  printf("\n");

  // Loop para validar o e-mail
    do {
        printf("\t//// Digite o e-mail: ");
        scanf("%29s", clt->email); // Limita a entrada a 29 caracteres
        limparBuffer();
        // Verifica se o e-mail é válido
        if (!validaEmail(clt->email)) {
            printf("\t//// E-mail inválido. Tente novamente.\n");
        }
    } while (!validaEmail(clt->email)); // Continua pedindo até que um e-mail válido seja inserido

  printf("\n");

   // Loop para validar o telefone
    do {
        printf("\t//// Digite o telefone no formato (XX) XXXXX-XXXX: ");
        fgets(clt->telefone, 16, stdin); // Limita a entrada a 15 caracteres
        clt->telefone[strcspn(clt->telefone, "\n")] = '\0';
        limparBuffer();
        if (!validaFone(clt->telefone)) {
            printf("\t//// Telefone inválido. Tente novamente.\n");
        }
    } while (!validaFone(clt->telefone)); // Continua pedindo até que um telefone válido seja inserido

  printf("\n");

    // Loop para validar o CPF
    do {
        printf("\t//// Digite o CPF (apenas números): ");
        scanf("%11s", clt->cpf); // Lê até 11 dígitos, sem considerar o caractere nulo
        limparBuffer();

    // Verifica se o CPF é válido
        if (!valida_CPF(clt->cpf)) {
            printf("\t//// CPF inválido. Tente novamente.\n");
        }
    } while (!valida_CPF(clt->cpf)); // Continua pedindo até que um CPF válido seja inserido

    printf("\n");
  printf("\t//// Profissional recadastrado com sucesso!");
  printf("\n");
  printf("\tTecle <ENTER> para prosseguir... ");
  getchar();
  return clt;
  }


  
