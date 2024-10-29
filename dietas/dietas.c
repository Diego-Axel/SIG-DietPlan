// Bibliotecas

#include <stdio.h> 
#include <stdlib.h>
#include "dietas.h"
#include "../utilitarios/utis.h" // Assinatura das utilidades

// Funções 

char menu_dieta(void) {

  char op_dieta;

  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                               Módulo dieta                             ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                         [1] Avaliação                                  ///\n");
  printf("\t///                         [2] Dieta para hipertrófia                     ///\n"); 
  printf("\t///                         [3] Dieta para perda de peso                   ///\n"); 
  printf("\t///                         [4] Reavaliação                                ///\n");
  printf("\t///                         [5] Adicionar nova dieta                       ///\n");
  printf("\t///                         [0] Retornar ao Menu Principal                 ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\n"); 
  printf("\t//// Escolha uma opção: "); 
  scanf("%c", &op_dieta);
  limparBuffer();
  return op_dieta;
}


void avaliacao(void) {
  
  char continuar;
  char cpf[13];
  
  do {
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    printf("\t//////////////////////////////////////////////////////////////////////////////\n");
    printf("\t///                                                                        ///\n");
    printf("\t///                               Avaliação                                ///\n");
    printf("\t///                                                                        ///\n");
    printf("\t//////////////////////////////////////////////////////////////////////////////\n");
    printf("\n"); 
    printf("\t//// tecle <ENTER> para continuar ou '0' Para CANELAR e RETORNAR: ");
    scanf("%c", &continuar);
    limparBuffer();
    if (continuar == '0') {
      printf("\n");
      printf("\t-> Avaliação Cancelada <-\n");
      break;
    }
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    printf("\t//////////////////////////////////////////////////////////////////////////////\n");
    printf("\t///                                                                        ///\n");
    printf("\t///                               Avaliação                                ///\n");
    printf("\t///                                                                        ///\n");
    printf("\t//////////////////////////////////////////////////////////////////////////////\n");
    printf("\n"); 
    printf("\t//// Digite o CPF do Cliente que deseja verificar: ");
    scanf("%[0-9.-]", cpf);
    limparBuffer();
    printf("\n"); 
    printf("\t//// Nome do Cliente: \n");
    printf("\n");
    printf("\t//// Profissional Responsável: \n");
    printf("\n");
    printf("\t//// Tipo De Dieta: \n");
    printf("\n");
    printf("\t//// Andamento: \n");
    printf("\n");
    printf("\ttecle <ENTER> para continuar... ");
    getchar();
  } while (continuar != '0');
  printf("\n"); 
  printf("\ttecle <ENTER> para retornar... ");
  getchar();
}


void dieta_para_hipertrofia(void) {

  char cpf[13];
  char crn[10];
  char continuar;


  do {
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    printf("\t//////////////////////////////////////////////////////////////////////////////\n");
    printf("\t///                                                                        ///\n");
    printf("\t///                         Dieta Para Hipertrofia                         ///\n");
    printf("\t///                                                                        ///\n");
    printf("\t//////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t//// tecle <ENTER> para continuar ou '0' Para CANELAR e RETORNAR: ");
    scanf("%c", &continuar);
    limparBuffer();
    if (continuar == '0') {
      printf("\n");
      printf("\t-> Avaliação Cancelada <-\n");
      break;
    }
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    printf("\t//////////////////////////////////////////////////////////////////////////////\n");
    printf("\t///                                                                        ///\n");
    printf("\t///                         Dieta Para Hipertrofia                         ///\n");
    printf("\t///                                                                        ///\n");
    printf("\t//////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t//// Digite o CPF do cliente no qual você deseja atrelar essa dieta: ");
    scanf("%[0-9.-]", cpf);
    limparBuffer();
    printf("\n");
    printf("\t//// Digite o CRN do Profissional que sera responsável pela dieta: ");
    scanf("%[0-9.-]", crn);
    limparBuffer();
  } while (continuar != '0');
  printf("\n");
  printf("\ttecle <ENTER> para continuar... ");
  getchar();
}


void dieta_para_perda_de_peso(void) {
  
  char cpf[13];
  char crn[10];
  char continuar;


  do {
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    printf("\t//////////////////////////////////////////////////////////////////////////////\n");
    printf("\t///                                                                        ///\n");
    printf("\t///                        Dieta Para Perda de Peso                        ///\n");
    printf("\t///                                                                        ///\n");
    printf("\t//////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t//// tecle <ENTER> para continuar ou '0' Para CANELAR e RETORNAR: ");
    scanf("%c", &continuar);
    limparBuffer();
    if (continuar == '0') {
      printf("\n");
      printf("\t-> Avaliação Cancelada <-\n");
      break;
    }
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    printf("\t//////////////////////////////////////////////////////////////////////////////\n");
    printf("\t///                                                                        ///\n");
    printf("\t///                        Dieta Para Perda de Peso                        ///\n");
    printf("\t///                                                                        ///\n");
    printf("\t//////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t//// Digite o CPF do cliente no qual você deseja atrelar essa dieta: ");
    scanf("%[0-9.-]", cpf);
    limparBuffer();
    printf("\n");
    printf("\t//// Digite o CRN do Profissional que sera responsável pela dieta: ");
    scanf("%[0-9.-]", crn);
    limparBuffer();
  } while (continuar != '0');
  printf("\n");
  printf("\ttecle <ENTER> para continuar... ");
  getchar();
}


void reavaliacao(void) {

  char cpf[13];
  char crn[10];
  char continuar;


  do {
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    printf("\t//////////////////////////////////////////////////////////////////////////////\n");
    printf("\t///                                                                        ///\n");
    printf("\t///                               Reavaliação                              ///\n");
    printf("\t///                                                                        ///\n");
    printf("\t//////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t//// tecle <ENTER> para continuar ou '0' Para CANELAR e RETORNAR: ");
    scanf("%c", &continuar);
    limparBuffer();
    if (continuar == '0') {
      printf("\n");
      printf("\t-> Reavaliação Cancelada <-\n");
      break;
    }
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    printf("\t//////////////////////////////////////////////////////////////////////////////\n");
    printf("\t///                                                                        ///\n");
    printf("\t///                               Reavaliação                              ///\n");
    printf("\t///                                                                        ///\n");
    printf("\t//////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t//// Digite o CPF do cliente no qual você deseja fazer a reavaliação: ");
    scanf("%[0-9.-]", cpf);
    limparBuffer();
    printf("\n");
    printf("\t//// Digite o CRN do Profissional que sera responsável pela dieta: ");
    scanf("%[0-9.-]", crn);
    limparBuffer();
  } while (continuar != '0');
  printf("\n");
  printf("\ttecle <ENTER> para continuar... ");
  getchar();
}


void nova_dieta(void) {

  char nome_dieta[13];
  char continuar;


  do {
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    printf("\t//////////////////////////////////////////////////////////////////////////////\n");
    printf("\t///                                                                        ///\n");
    printf("\t///                           Adicionar Nova Dieta                         ///\n");
    printf("\t///                                                                        ///\n");
    printf("\t//////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t//// tecle <ENTER> para continuar ou '0' Para CANELAR e RETORNAR: ");
    scanf("%c", &continuar);
    limparBuffer();
    if (continuar == '0') {
      printf("\n");
      printf("\t-> Inclusão de Nova Dieta Cancelada <-\n");
      break;
    }
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    printf("\t//////////////////////////////////////////////////////////////////////////////\n");
    printf("\t///                                                                        ///\n");
    printf("\t///                           Adicionar Nova Dieta                         ///\n");
    printf("\t///                                                                        ///\n");
    printf("\t//////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t//// Digite o nome da nova dieta que você deseja adicionar: ");
    scanf("%s", nome_dieta);
    limparBuffer();
    printf("\n");
  } while (continuar != '0');
  printf("\n");
  printf("\ttecle <ENTER> para continuar... ");
  getchar();
}