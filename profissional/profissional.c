// Bibliotecas

#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "profissional.h"
#include "../utilitarios/utis.h" // Assinatura das utilidades
#include "../validadores/validadores.h" // Assinatura dos validadores

void modulo_profissional(void) {
  
  char opcao;

  do {
        opcao = menu_profissional();
        
        switch(opcao) {
            case '1': cadastrar_profissional();
                      break;
            case '2': exibir_profissional();
                      break;
            case '3': alterar_profissional();
                      break;
            case '4': excluir_profissional();
                      break;
        }
  } while(opcao != '0');
}

// Funções

char menu_profissional(void) {  
  char op_profissional;

  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                             Módulo Profissional                        ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                         [1] Cadastrar profissional                     ///\n");
  printf("\t///                         [2] Exibir profissional                        ///\n"); 
  printf("\t///                         [3] Alterar dados do profissional              ///\n"); 
  printf("\t///                         [4] Excluir profissional                       ///\n");
  printf("\t///                         [0] Retornar ao Menu Principal                 ///\n");  
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\n"); 
  printf("\tEscolha uma opção: ");
  scanf(" %c", &op_profissional);
  limparBuffer();
  
  return op_profissional;
}

// Função para gravar profissional
void gravar_prof(Profissional* prf) {
  FILE* fp;
  fp = fopen("profissional.dat", "ab");
  if (fp == NULL) {
    printf("Erro na abertura do arquivo!\n");
    printf("Não é possível continuar...\n");
    exit(1);
  }
  fwrite(prf, sizeof(Profissional), 1, fp);
  fclose(fp);
}

// Função para cadastrar profissional
void cadastrar_prof(void){
    Profissional* prf;

    prf = tela_cadastrar_prof();
    gravar_prof(prf);
    free(prf);
}

Profissional* tela_cadastrar_prof(void) {
  Profissional* prf;
  prf = (Profissional*) malloc(sizeof(Profissional));
  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                            Cadastrar profissional                      ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");

// Loop para validar o nome
    do {
        printf("\t//// Digite o nome: ");
        fgets(prf->nome, 40, stdin); // Limita a entrada a 39 caracteres
        prf->nome[strcspn(prf->nome, "\n")] = '\0';
        limparBuffer();

        // Verifica se o nome é válido
        if (!validaNome(prf->nome)) {
            printf("\t//// Nome inválido. Tente novamente.\n");
        }
    } while (!validaNome(prf->nome)); // Continua pedindo até que um nome válido seja inserido

  printf("\n");
  
  // Loop para validar o e-mail
    do {
        printf("\t//// Digite o e-mail: ");
        scanf("%29s", prf->email); // Limita a entrada a 29 caracteres
        limparBuffer();

        // Verifica se o e-mail é válido
        if (!validaEmail(prf->email)) {
            printf("\t//// E-mail inválido. Tente novamente.\n");
        }
    } while (!validaEmail(prf->email)); // Continua pedindo até que um e-mail válido seja inserido

  printf("\n");

 // Loop para validar o telefone
    do {
        printf("\t//// Digite o telefone no formato (XX) XXXXX-XXXX: ");
        fgets(prf->telefone, 16, stdin); // Limita a entrada a 15 caracteres
        prf->telefone[strcspn(prf->telefone, "\n")] = '\0';
        limparBuffer();

        if (!validaFone(prf->telefone)) {
            printf("\t//// Telefone inválido. Tente novamente.\n");
        }
    } while (!validaFone(prf->telefone)); // Continua pedindo até que um telefone válido seja inserido

  printf("\n");

  // Loop para validar o CPF
    do {
        printf("\t//// Digite o CPF (apenas números): ");
        scanf("%11s", prf->cpf); // Lê até 11 dígitos, sem considerar o caractere nulo
        limparBuffer();

        // Verifica se o CPF é válido
        if (!valida_CPF(prf->cpf)) {
            printf("\t//// CPF inválido. Tente novamente.\n");
        }
    } while (!valida_CPF(prf->cpf)); // Continua pedindo até que um CPF válido seja inserido

  printf("\n");

// Loop para validar o CRN
    do {
        printf("\t//// Digite o CRN (XXXXX/CRN-X) : ");
        fgets(prf->crn, 12, stdin); // Lê até 11 dígitos, sem considerar o caractere nulo
        prf->crn[strcspn(prf->crn, "\n")] = '\0';
        limparBuffer();

        // Verifica se o CRN é válido
        if (!validaCRN(prf->crn)) {
            printf("\t//// CRN inválido. Tente novamente.\n");
        }
    } while (!validaCRN(prf->crn)); // Continua pedindo até que um CRN válido seja inserido

// Indica status como ativo
  prf->status = 'A';

  printf("\n");
  printf("\t//// Profissional cadastrado com sucesso!");
  printf("\n");
  printf("\tTecle <ENTER> para prosseguir... ");
  getchar();
  return prf;
}

// Função para buscar profissional
Profissional* buscar_prof(char* crn) {
    FILE* fp;
    Profissional* prf;

    prf = (Profissional*) malloc(sizeof(Profissional));
    fp = fopen("profissional.dat", "rb");
    if (fp == NULL) {
        printf("Erro na abertura do arquivo!\n");
        printf("Não é possível continuar...\n");
        exit(1);
    }

    while(!feof(fp)) {
      fread(prf, sizeof(Profissional), 1, fp);
      if ((strcmp(prf->crn, crn) == 0) && (prf->status == 'A')) {
          fclose(fp);
          return prf;
      } 
    }
    fclose(fp);
    return NULL;
}

// Função para mostrar a tela de inserir o CRN
char* tela_pesquisar_prof(void) {
    char* crn;
    crn = (char*) malloc(12*sizeof(char*));
    char continuar;
    
    while (continuar != '0') {
      system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
      printf("\t//////////////////////////////////////////////////////////////////////////////\n");
      printf("\t///                                                                        ///\n");
      printf("\t///                          Exibir profissional                           ///\n");
      printf("\t///                              [0] Retornar                              ///\n");
      printf("\t///                                                                        ///\n");
      printf("\t//////////////////////////////////////////////////////////////////////////////\n");
      printf("\n");
      printf("\t//// tecle <ENTER> para prosseguir e '0' para RETORNAR: ");
      scanf("%c", &continuar);
      limparBuffer();
      if (continuar == '0') {
        break;
      }
      system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
      printf("\t//////////////////////////////////////////////////////////////////////////////\n");
      printf("\t///                                                                        ///\n");
      printf("\t///                             Exibir profissional                        ///\n");
      printf("\t///                                                                        ///\n");
      printf("\t//////////////////////////////////////////////////////////////////////////////\n");
      printf("\n");
      printf("\t//// Digite o CRN do profissional a ser exibido: ");
      scanf("%s", crn);
      limparBuffer();
      return crn;
    }
} 

void exibir_prof(Profissional* prf) {

  if (prf == NULL) {
      printf("\n\t//// Profissional Inexistente !\n");
  } else {
      printf("\n");
      printf("\t//// Profissional Encontrado !\n");
      printf("\n");
      printf("\t//// Nome: %s\n", prf->nome);
      printf("\n");
      printf("\t//// E-mail: %s\n", prf->email);
      printf("\n");
      printf("\t//// Telefone: %s\n", prf->telefone);
      printf("\n");
      printf("\t//// CPF: %s\n", prf->cpf);
      printf("\n");
      printf("\t//// CRN: %s\n", prf->crn);
      printf("\n");
      printf("\t//// Status: %c\n", prf->status);
    }
    printf("\ttecle <ENTER> para continuar: ");
    getchar();
}

void pesquisar_prof(void){
  Profissional* prf;
  char* crn;

  crn = tela_pesquisar_prof();
  prf = buscar_prof(crn);
  exibir_prof(prf);
  free(prf);
  free(crn);
}

// funçao para alterar dados 
Profissional* recadastrar_prof(void) {
  Profissional* prf;
  prf = (Profissional*) malloc(sizeof(Profissional));
  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                         Recadastrar profissional                       ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");

// Loop para validar o nome
    do {
        printf("\t//// Digite o nome: ");
        fgets(prf->nome, 40, stdin); // Limita a entrada a 39 caracteres
        prf->nome[strcspn(prf->nome, "\n")] = '\0';
        limparBuffer();

        // Verifica se o nome é válido
        if (!validaNome(prf->nome)) {
            printf("\t//// Nome inválido. Tente novamente.\n");
        }
    } while (!validaNome(prf->nome)); // Continua pedindo até que um nome válido seja inserido

  printf("\n");
  
  // Loop para validar o e-mail
    do {
        printf("\t//// Digite o e-mail: ");
        scanf("%29s", prf->email); // Limita a entrada a 29 caracteres
        limparBuffer();

        // Verifica se o e-mail é válido
        if (!validaEmail(prf->email)) {
            printf("\t//// E-mail inválido. Tente novamente.\n");
        }
    } while (!validaEmail(prf->email)); // Continua pedindo até que um e-mail válido seja inserido

  printf("\n");

 // Loop para validar o telefone
    do {
        printf("\t//// Digite o telefone no formato (XX) XXXXX-XXXX: ");
        fgets(prf->telefone, 16, stdin); // Limita a entrada a 15 caracteres
        prf->telefone[strcspn(prf->telefone, "\n")] = '\0';
        limparBuffer();

        if (!validaFone(prf->telefone)) {
            printf("\t//// Telefone inválido. Tente novamente.\n");
        }
    } while (!validaFone(prf->telefone)); // Continua pedindo até que um telefone válido seja inserido
  
  printf("\n");
  printf("\t//// Profissional recadastrado com sucesso!");
  printf("\n");
  printf("\tTecle <ENTER> para prosseguir... ");
  getchar();
  return prf;
}

char* tela_recadastrar_prof(void) {
  char* crn;
  crn = (char*) malloc(12*sizeof(char*));

  printf("\n");
  system("clear || cls"); // se for Linux use 'clear', se for Windows use 'cls'
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                        Recadastrar profissional                        ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t//// Digite o CRN do profissional a ser recadastrado: ");
  scanf("%s", crn);
  limparBuffer();
  return crn;
}

void regravar_prof(Profissional* prf) {
  int find;
  FILE* fp;
  Profissional* prof_lido;

  prof_lido = (Profissional*) malloc(sizeof(Profissional));
  fp = fopen("profissional.dat", "r+b");
  if (fp == NULL) {
    printf("Erro na abertura do arquivo!\n");
    printf("Não é possível continuar...\n");
    exit(1);
  }

  while (!feof(fp)) {
    find = 0;
    fread(prof_lido, sizeof(Profissional), 1, fp) && !find;
    if (strcmp(prof_lido->crn, prf->crn) == 0) {
        find == 1;
        fseek(fp, -1*sizeof(Profissional), SEEK_CUR);
    fwrite(prf, sizeof(Profissional), 1, fp);
    break;
    }
  }
    fclose(fp);
    free(prof_lido);
}

void atualiza_prof(void) {
  Profissional* prf;
  char* crn;

  crn = tela_recadastrar_prof();
  prf = buscar_prof(crn);

  if (prf == NULL) {
    printf("\n\t//// Profissional Inexistente !\n");
  } else {
    prf = recadastrar_prof();
    strcpy(prf->crn, crn);
    regravar_prof(prf);
    free(prf);
  }
  free(crn);
}

char* tela_excluir_prof(void) {

  char* crn;
  crn = (char*) malloc(12*sizeof(char*));

  printf("\n");
  system("clear || cls"); // se for Linux use 'clear', se for Windows use 'cls'
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                          Excluir Profissional                          ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t//// Digite o CRN do profissional a ser excluído: ");
  scanf("%s", crn);
  limparBuffer();
  return crn;
} 

void excluir_prof(void) {
  Profissional* prf;
  char* crn;
  char confirma;
  crn = tela_excluir_prof();
  prf = (Profissional*) malloc(sizeof(Profissional));
  prf = buscar_prof(crn);
  if (prf == NULL) {
    printf("\n\t//// Profissional Inexistente !\n");
  } else {
    printf("\n\t//// Profissional Encontrado!\n");
    printf("\t//// Nome: %s\n", prf->nome);
    printf("\n\t//// Deseja excluir esse profissional? [S/N]: ");

    do {
        scanf("%c", &confirma);
        limparBuffer();
        confirma = toupper(confirma);
        if (confirma == 'S') {
          prf->status = 'I';
          regravar_prof(prf);
          printf("\n\t//// Profissional Excluído com Sucesso!\n");
        } else if (confirma == 'N') {
          printf("\n\t//// Operação Cancelada!\n");
        } else {
          printf("\n\t //// Operação Inválida! Tente [S/N]: ");
        }
    } while(confirma != 'S' && confirma != 'N');
    
    free(prf);
  }
  free(crn);
}