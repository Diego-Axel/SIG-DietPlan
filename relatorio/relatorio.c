// Bibliotecas

#include <stdio.h> 
#include <stdlib.h>
#include "relatorio.h"
#include "../utilitarios/utis.h" // Assinatura das utilidades

// Funções

char menu_relatorio(void) {

  char op_relatorio;

  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                             Módulo relatório                           ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                         [1] Clientes cadastrados                       ///\n");
  printf("\t///                         [2] Profisionais cadastrados                   ///\n"); 
  printf("\t///                         [0] Retornar ao Menu Principal                 ///\n");  
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\n"); 
  printf("\t//// Escolha uma opção: "); 
  scanf("%c", &op_relatorio);
  limparBuffer();
  return op_relatorio;
}


void relatorio_clientes(void) {

  char continuar;
  
  do {
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    printf("\t//////////////////////////////////////////////////////////////////////////////\n");
    printf("\t///                                                                        ///\n");
    printf("\t///                           Relatório de Clientes                        ///\n");
    printf("\t///                                                                        ///\n");
    printf("\t//////////////////////////////////////////////////////////////////////////////\n");
    printf("\n"); 
    printf("\t//// tecle <ENTER> para continuar ou '0' Para CANELAR e RETORNAR: ");
    scanf("%c", &continuar);
    limparBuffer();
    if (continuar == '0') {
      printf("\n");
      printf("\t-> Consulta Cancelada <-\n");
      break;
    }
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    printf("\t/////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\t///                                                                                                       ///\n");
    printf("\t///                                         Relatório de Clientes                                         ///\n");
    printf("\t///                                                                                                       ///\n");
    printf("\t/////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\t|          NOME           |          E-mail          |           Telefone          |           CPF          |\n"); 
    printf("\n");
    printf("\ttecle <ENTER> para continuar... ");
    getchar();
  } while (continuar != '0');
  printf("\n"); 
  printf("\ttecle <ENTER> para retornar... ");
  getchar();
  
}


void relatorio_profissional(void) {

  char continuar;
  
  do {
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    printf("\t//////////////////////////////////////////////////////////////////////////////\n");
    printf("\t///                                                                        ///\n");
    printf("\t///                        Relatório de Profissionais                      ///\n");
    printf("\t///                                                                        ///\n");
    printf("\t//////////////////////////////////////////////////////////////////////////////\n");
    printf("\n"); 
    printf("\t//// tecle <ENTER> para continuar ou '0' Para CANELAR e RETORNAR: ");
    scanf("%c", &continuar);
    limparBuffer();
    if (continuar == '0') {
      printf("\n");
      printf("\t-> Consulta Cancelada <-\n");
      break;
    }
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    printf("\t//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\t///                                                                                                                                ///\n");
    printf("\t///                                                  Relatório de Profissionais                                                    ///\n");
    printf("\t///                                                                                                                                ///\n");
    printf("\t//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\t|          NOME           |          E-mail          |           Telefone          |           CPF          |           CRN          |\n"); 
    printf("\n");
    printf("\ttecle <ENTER> para continuar... ");
    getchar();
  } while (continuar != '0');
  printf("\n"); 
  printf("\ttecle <ENTER> para retornar... ");
  getchar();
  
}