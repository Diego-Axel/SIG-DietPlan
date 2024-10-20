// Bibliotecas

#include <stdio.h> 
#include <stdlib.h>
#include <wchar.h>
#include <locale.h>
#include <ctype.h>
#include "relatorio.h"

// Funções

char menu_relatorio(void) {

  char op_relatorio;

  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                             Módulo relatório                           ///\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                         [1] Clientes cadastrados                       ///\n");
  wprintf(L"\t///                         [2] Profisionais cadastrados                   ///\n"); 
  wprintf(L"\t///                         [0] Retornar ao Menu Principal                 ///\n");  
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\n"); 
  wprintf(L"\t//// Escolha uma opção: "); 
  scanf("%c", &op_relatorio);
  getchar();
  return op_relatorio;
}


void relatorio_clientes(void) {

  char continuar;
  
  do {
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t///                           Relatório de Clientes                        ///\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\n"); 
    wprintf(L"\t//// tecle <ENTER> para continuar ou '0' Para CANELAR e RETORNAR: ");
    scanf("%c", &continuar);
    getchar();
    if (continuar == '0') {
      wprintf(L"\n");
      wprintf(L"\t-> Consulta Cancelada <-\n");
      break;
    }
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    wprintf(L"\t/////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\t///                                                                                                       ///\n");
    wprintf(L"\t///                                         Relatório de Clientes                                         ///\n");
    wprintf(L"\t///                                                                                                       ///\n");
    wprintf(L"\t/////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\t|          NOME           |          E-mail          |           Telefone          |           CPF          |\n"); 
    wprintf(L"\n");
    wprintf(L"\ttecle <ENTER> para continuar... ");
    getchar();
  } while (continuar != '0');
  wprintf(L"\n"); 
  wprintf(L"\ttecle <ENTER> para retornar... ");
  getchar();
  
}


void relatorio_profissional(void) {

  char continuar;
  
  do {
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t///                        Relatório de Profissionais                      ///\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\n"); 
    wprintf(L"\t//// tecle <ENTER> para continuar ou '0' Para CANELAR e RETORNAR: ");
    scanf("%c", &continuar);
    getchar();
    if (continuar == '0') {
      wprintf(L"\n");
      wprintf(L"\t-> Consulta Cancelada <-\n");
      break;
    }
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\t///                                                                                                                                ///\n");
    wprintf(L"\t///                                                  Relatório de Profissionais                                                    ///\n");
    wprintf(L"\t///                                                                                                                                ///\n");
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\t|          NOME           |          E-mail          |           Telefone          |           CPF          |           CRN          |\n"); 
    wprintf(L"\n");
    wprintf(L"\ttecle <ENTER> para continuar... ");
    getchar();
  } while (continuar != '0');
  wprintf(L"\n"); 
  wprintf(L"\ttecle <ENTER> para retornar... ");
  getchar();
  
}