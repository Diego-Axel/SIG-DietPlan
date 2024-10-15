// Bibliotecas

#include <stdio.h> 
#include <stdlib.h>
#include <wchar.h>
#include <locale.h>
#include <ctype.h>
#include "dietas.h"

// Funções 

char menu_dieta(void) {

  char op_dieta;

  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                               Módulo dieta                             ///\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                         [1] Avaliação                                  ///\n");
  wprintf(L"\t///                         [2] Dieta para hipertrófia                     ///\n"); 
  wprintf(L"\t///                         [3] Dieta para perda de peso                   ///\n"); 
  wprintf(L"\t///                         [4] Reavaliação                                ///\n");
  wprintf(L"\t///                         [5] Adicionar nova dieta                       ///\n");
  wprintf(L"\t///                         [0] Retornar ao Menu Principal                 ///\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\n"); 
  wprintf(L"\t//// Escolha uma opção: "); 
  scanf("%c", &op_dieta);
  getchar();
  return op_dieta;
}


void avaliacao(void) {
  
  char continuar;
  char cpf[13];
  
  do {
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t///                               Avaliação                                ///\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\n"); 
    wprintf(L"\t//// tecle <ENTER> para continuar ou '0' Para CANELAR e RETORNAR: ");
    scanf("%c", &continuar);
    getchar();
    if (continuar == '0') {
      wprintf(L"\n");
      wprintf(L"\t-> Avaliação Cancelada <-\n");
      break;
    }
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t///                               Avaliação                                ///\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\n"); 
    wprintf(L"\t//// Digite o CPF do Cliente que deseja verificar: ");
    scanf("%[0-9.-]", cpf);
    getchar();
    wprintf(L"\n"); 
    wprintf(L"\t//// Nome do Cliente: \n");
    wprintf(L"\n");
    wprintf(L"\t//// Profissional Responsável: \n");
    wprintf(L"\n");
    wprintf(L"\t//// Tipo De Dieta: \n");
    wprintf(L"\n");
    wprintf(L"\t//// Andamento: \n");
    wprintf(L"\n");
    wprintf(L"\ttecle <ENTER> para continuar... ");
    getchar();
  } while (continuar != '0');
  wprintf(L"\n"); 
  wprintf(L"\ttecle <ENTER> para retornar... ");
  getchar();
}


void dieta_para_hipertrofia(void) {

  char cpf[13];
  char crn[10];
  char continuar;


  do {
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t///                         Dieta Para Hipertrofia                         ///\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\n");
    wprintf(L"\t//// tecle <ENTER> para continuar ou '0' Para CANELAR e RETORNAR: ");
    scanf("%c", &continuar);
    getchar();
    if (continuar == '0') {
      wprintf(L"\n");
      wprintf(L"\t-> Avaliação Cancelada <-\n");
      break;
    }
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t///                         Dieta Para Hipertrofia                         ///\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\n");
    wprintf(L"\t//// Digite o CPF do cliente no qual você deseja atrelar essa dieta: ");
    scanf("%[0-9.-]", cpf);
    getchar();
    wprintf(L"\n");
    wprintf(L"\t//// Digite o CRN do Profissional que sera responsável pela dieta: ");
    scanf("%[0-9.-]", crn);
    getchar();
  } while (continuar != '0');
  wprintf(L"\n");
  wprintf(L"\ttecle <ENTER> para continuar... ");
  getchar();
}


void dieta_para_perda_de_peso(void) {
  
  char cpf[13];
  char crn[10];
  char continuar;


  do {
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t///                        Dieta Para Perda de Peso                        ///\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\n");
    wprintf(L"\t//// tecle <ENTER> para continuar ou '0' Para CANELAR e RETORNAR: ");
    scanf("%c", &continuar);
    getchar();
    if (continuar == '0') {
      wprintf(L"\n");
      wprintf(L"\t-> Avaliação Cancelada <-\n");
      break;
    }
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t///                        Dieta Para Perda de Peso                        ///\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\n");
    wprintf(L"\t//// Digite o CPF do cliente no qual você deseja atrelar essa dieta: ");
    scanf("%[0-9.-]", cpf);
    getchar();
    wprintf(L"\n");
    wprintf(L"\t//// Digite o CRN do Profissional que sera responsável pela dieta: ");
    scanf("%[0-9.-]", crn);
    getchar();
  } while (continuar != '0');
  wprintf(L"\n");
  wprintf(L"\ttecle <ENTER> para continuar... ");
  getchar();
}


void reavaliacao(void) {

  char cpf[13];
  char crn[10];
  char continuar;


  do {
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t///                               Reavaliação                              ///\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\n");
    wprintf(L"\t//// tecle <ENTER> para continuar ou '0' Para CANELAR e RETORNAR: ");
    scanf("%c", &continuar);
    getchar();
    if (continuar == '0') {
      wprintf(L"\n");
      wprintf(L"\t-> Reavaliação Cancelada <-\n");
      break;
    }
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t///                               Reavaliação                              ///\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\n");
    wprintf(L"\t//// Digite o CPF do cliente no qual você deseja fazer a reavaliação: ");
    scanf("%[0-9.-]", cpf);
    getchar();
    wprintf(L"\n");
    wprintf(L"\t//// Digite o CRN do Profissional que sera responsável pela dieta: ");
    scanf("%[0-9.-]", crn);
    getchar();
  } while (continuar != '0');
  wprintf(L"\n");
  wprintf(L"\ttecle <ENTER> para continuar... ");
  getchar();
}


void nova_dieta(void) {

  char nome_dieta[13];
  char continuar;


  do {
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t///                           Adicionar Nova Dieta                         ///\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\n");
    wprintf(L"\t//// tecle <ENTER> para continuar ou '0' Para CANELAR e RETORNAR: ");
    scanf("%c", &continuar);
    getchar();
    if (continuar == '0') {
      wprintf(L"\n");
      wprintf(L"\t-> Inclusão de Nova Dieta Cancelada <-\n");
      break;
    }
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t///                           Adicionar Nova Dieta                         ///\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\n");
    wprintf(L"\t//// Digite o nome da nova dieta que você deseja adicionar: ");
    scanf("%s", nome_dieta);
    getchar();
    wprintf(L"\n");
  } while (continuar != '0');
  wprintf(L"\n");
  wprintf(L"\ttecle <ENTER> para continuar... ");
  getchar();
}