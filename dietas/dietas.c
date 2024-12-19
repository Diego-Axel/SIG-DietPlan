// Bibliotecas

#include <stdio.h> 
#include <stdlib.h>
#include "dietas.h"
#include "../utilitarios/utis.h" // Assinatura das utilidades


void modulo_dieta(void) {
  
  char opcao;

  do {
        opcao = menu_dieta();
        
        switch(opcao) {
            case '1': cadastrar_dieta();
                      break;
            case '2': pesquisar_dieta();
                      break;
            case '3': atualizar_dieta();
                      break;
            case '4': excluir_dieta();
                      break;
        }
  } while(opcao != '0');
}

// Funções 

// Função para cadastrar dieta
void cadastrar_dieta(void){
    Dietas* dts;

    dts = tela_cadastrar_dieta();
    gravar_dieta(dts);
    free(dts);
}

// Função para exibir dieta
void pesquisar_dieta(void){
  Dietas* dts;
  char* id;

  id = tela_pesquisar_dieta();
  dts = buscar_dieta(id);
  exibir_dieta(dts);
  free(dts);
  free(id);
}

// Função para alterar dieta
void atualizar_dieta(void) {
  Dietas* dts;
  char* id;

  id = tela_recadastrar_dieta();
  dts = buscar_dieta(id);

  if (dts == NULL) {
    printf("\n\t//// Dieta Inexistente !\n");
  } else {
    dts = recadastrar_dieta();
    strcpy(dts->id, id);
    regravar_dieta(dts);
    free(dts);
  }
  free(id);
}

// Função para excluir dieta
void excluir_dieta(void) {
  Dietas* dts;
  char* id;
  char confirma;
  id = tela_excluir_dieta();
  dts = (Dietas*) malloc(sizeof(Dietas));
  dts = buscar_dieta(id);
  if (dts == NULL) {
    printf("\n\t//// Dieta Inexistente !\n");
  } else {
    printf("\n\t//// Dieta Encontrada!\n");
    printf("\t//// Tipo: %s\n", dts->tipo);
    printf("\t//// Cliente: %s\n", dts->cpf_cliente);
    printf("\n\t//// Deseja excluir essa dieta? [S/N]: ");

    do {
        scanf("%c", &confirma);
        limparBuffer();
        confirma = toupper(confirma);
        if (confirma == 'S') {
          dts->status = 'I';
          regravar_dieta(dts);
          printf("\n\t//// Dieta Excluída com Sucesso!\n");
        } else if (confirma == 'N') {
          printf("\n\t//// Operação Cancelada!\n");
        } else {
          printf("\n\t //// Operação Inválida! Tente [S/N]: ");
        }
    } while(confirma != 'S' && confirma != 'N');
    
    free(dts);
  }
  free(id);
}

char menu_dietas(void) {  
  char op_dieta;

  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                               Módulo Dietas                            ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                         [1] Cadastrar Dieta                            ///\n");
  printf("\t///                         [2] Exibir Dieta                               ///\n"); 
  printf("\t///                         [3] Alterar dados da Dieta                     ///\n"); 
  printf("\t///                         [4] Excluir Dieta                              ///\n");
  printf("\t///                         [0] Retornar ao Menu Principal                 ///\n");  
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\n"); 
  printf("\tEscolha uma opção: ");
  scanf(" %c", &op_dieta);
  limparBuffer();
  
  return op_dieta;
}

// Função para gravar dietas
void gravar_dieta(Dietas* dts) {
  FILE* fp;
  fp = fopen("dietas.dat", "ab");
  if (fp == NULL) {
    printf("Erro na abertura do arquivo!\n");
    printf("Não é possível continuar...\n");
    exit(1);
  }
  fwrite(dts, sizeof(Dietas), 1, fp);
  fclose(fp);
}

// Função para regravar dietas
void regravar_dieta(Dietas* dts) {
  int find;
  FILE* fp;
  Dietas* dieta_lida;

  dieta_lida = (Dietas*) malloc(sizeof(Dietas));
  fp = fopen("dietas.dat", "r+b");
  if (fp == NULL) {
    printf("Erro na abertura do arquivo!\n");
    printf("Não é possível continuar...\n");
    exit(1);
  }

  while (!feof(fp)) {
    find = 0;
    fread(dieta_lida, sizeof(Dietas), 1, fp) && !find;
    if (strcmp(dieta_lida->id, dts->id) == 0) {
        find == 1;
        fseek(fp, -1*sizeof(Dietas), SEEK_CUR);
    fwrite(dts, sizeof(Dietas), 1, fp);
    break;
    }
  }
    fclose(fp);
    free(dieta_lida);
}

Dietas* tela_cadastrar_dieta(void) {
  Dietas* dts;
  dts = (Dietas*) malloc(sizeof(Dietas));
  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                            Cadastrar Dieta                             ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");

// Loop para validar o id da dieta
  do {
    printf("\t//// ID da dieta(apenas números): ");
    scanf("%7s", dts->id);
    limpabuffer();

    // Verifica se o id é válido
    if (!validaID(dts->id)) {
        printf("\t//// ID Inválido. Tente Novamente.\n");
    }
  } (!validaID(dts->id));

  // Loop para validar o tipo da dieta
    do {
        printf("\t//// Tipo da Dieta: ");
        fgets(dts->tipo, 25, stdin); // Limita a entrada a 25 caracteres
        dts->tipo[strcspn(dts->tipo, "\n")] = '\0';
        limparBuffer();

        // Verifica se o tipo é válido
        if (!validaNome(dts->tipo)) {
            printf("\t//// Informação inválida. Tente novamente.\n");
        }
    } while (!validaNome(dts->tipo)); // Continua pedindo até que uma informação válido seja inserido

  printf("\n");

  // Loop para validar o CPF
    do {
        printf("\t//// Digite o CPF do Cliente (apenas números): ");
        scanf("%11s", dts->cpf_cliente); // Lê até 11 dígitos, sem considerar o caractere nulo
        limparBuffer();

        // Verifica se o CPF é válido
        if (!valida_CPF(dts->cpf_cliente)) {
            printf("\t//// CPF inválido. Tente novamente.\n");
        }
    } while (!valida_CPF(dts->cpf_cliente)); // Continua pedindo até que um CPF válido seja inserido

  printf("\n");

// Loop para validar o CRN
    do {
        printf("\t//// Digite o CRN do Profissional(XXXXX/CRN-X): ");
        fgets(dts->crn_profissional, 12, stdin); // Lê até 11 dígitos, sem considerar o caractere nulo
        dts->crn_profissional[strcspn(dts->crn_profissional, "\n")] = '\0';
        limparBuffer();

        // Verifica se o CRN é válido
        if (!validaCRN(dts->crn_profissional)) {
            printf("\t//// CRN inválido. Tente novamente.\n");
        }
    } while (!validaCRN(dts->crn_profissional)); // Continua pedindo até que um CRN válido seja inserido

// Indica status como ativo
  dts->status = 'A';

  printf("\n");
  printf("\t//// Dieta Cadastrada com Sucesso!");
  printf("\n");
  printf("\tTecle <ENTER> para Prosseguir... ");
  getchar();
  return dts;
}


// Função para mostrar a tela de inserir o ID
char* tela_pesquisar_dieta(void) {
    char* dts;
    dts = (char*) malloc(12*sizeof(char*));

    printf("\n");
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    printf("\t//////////////////////////////////////////////////////////////////////////////\n");
    printf("\t///                                                                        ///\n");
    printf("\t///                             Exibir Dieta                               ///\n");
    printf("\t///                                                                        ///\n");
    printf("\t//////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t//// Digite o ID da dieta a ser exibida: ");
    scanf("%s", dts);
    limparBuffer();
    return dts;
} 

char* tela_recadastrar_dieta(void) {
  char* dts;
  dts = (char*) malloc(12*sizeof(char*));

  printf("\n");
  system("clear || cls"); // se for Linux use 'clear', se for Windows use 'cls'
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                        Recadastrar Dieta                               ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t//// Digite o ID da dieta a ser recadastrada: ");
  scanf("%s", dts);
  limparBuffer();
  return dts;
}


char* tela_excluir_dieta(void) {

  char* dts;
  dts = (char*) malloc(12*sizeof(char*));

  printf("\n");
  system("clear || cls"); // se for Linux use 'clear', se for Windows use 'cls'
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                          Excluir Dieta                                 ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t//// Digite o ID da dieta a ser excluída: ");
  scanf("%s", dts);
  limparBuffer();
  return dts;
} 

// Função para buscar dieta
Dietas* buscar_dieta(char* id) {
    FILE* fp;
    Dietas* dts;

    dts = (Dietas*) malloc(sizeof(Dietas));
    fp = fopen("dietas.dat", "rb");
    if (fp == NULL) {
        printf("Erro na abertura do arquivo!\n");
        printf("Não é possível continuar...\n");
        exit(1);
    }

    while(!feof(fp)) {
      fread(dts, sizeof(Dietas), 1, fp);
      if ((strcmp(dts->id, id) == 0) && (dts->status == 'A')) {
          fclose(fp);
          return dts;
      } 
    }
    fclose(fp);
    return NULL;
}

void exibir_dieta(Dietas* dts) {

  if (dts == NULL) {
      printf("\n\t//// Dieta Inexistente !\n");
  } else {
      printf("\n");
      printf("\t//// Dieta Encontrada !\n");
      printf("\n");
      printf("\t//// Tipo: %s\n", dts->tipo);
      printf("\n");
      printf("\t//// Cliente: %s\n", dts->cpf_cliente);
      printf("\n");
      printf("\t//// Profissional: %s\n", dts->crn_profissional);
      printf("\n");
      printf("\t//// Status: %c\n", dts->status);
    }
    printf("\ttecle <ENTER> para continuar: ");
    getchar();
}


// funçao para alterar dados da dieta
Dietas* recadastrar_dieta(void) {
  Dietas* dts;
  dts = (Dietas*) malloc(sizeof(Dietas));
  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                         Recadastrar Dieta                              ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");

// Loop para validar o tipo da dieta
    do {
        printf("\t//// Tipo da Dieta: ");
        fgets(dts->tipo, 25, stdin); // Limita a entrada a 25 caracteres
        dts->tipo[strcspn(dts->tipo, "\n")] = '\0';
        limparBuffer();

        // Verifica se o tipo é válido
        if (!validaNome(dts->tipo)) {
            printf("\t//// Informação inválida. Tente novamente.\n");
        }
    } while (!validaNome(dts->tipo)); // Continua pedindo até que uma informação válido seja inserido

  printf("\n");

  // Loop para validar o CPF
    do {
        printf("\t//// Digite o CPF do Cliente (apenas números): ");
        scanf("%11s", dts->cpf_cliente); // Lê até 11 dígitos, sem considerar o caractere nulo
        limparBuffer();

        // Verifica se o CPF é válido
        if (!valida_CPF(dts->cpf_cliente)) {
            printf("\t//// CPF inválido. Tente novamente.\n");
        }
    } while (!valida_CPF(dts->cpf_cliente)); // Continua pedindo até que um CPF válido seja inserido

  printf("\n");

// Loop para validar o CRN
    do {
        printf("\t//// Digite o CRN do Profissional(XXXXX/CRN-X): ");
        fgets(dts->crn_profissional, 12, stdin); // Lê até 11 dígitos, sem considerar o caractere nulo
        dts->crn_profissional[strcspn(dts->crn_profissional, "\n")] = '\0';
        limparBuffer();

        // Verifica se o CRN é válido
        if (!validaCRN(dts->crn_profissional)) {
            printf("\t//// CRN inválido. Tente novamente.\n");
        }
    } while (!validaCRN(dts->crn_profissional)); // Continua pedindo até que um CRN válido seja inserido
  
  printf("\n");
  printf("\t//// Dieta recadastrada com sucesso!");
  printf("\n");
  printf("\tTecle <ENTER> para prosseguir... ");
  getchar();
  return dts;
}