// Bibliotecas

#include <stdio.h> 
#include <stdlib.h>
#include "relatorio.h"
#include "../utilitarios/utis.h" // Assinatura das utilidades
#include "relclientes.h"
#include "relprofissional.h"

// Funções

void modulo_relatorio(void) {
  
  char opcao;

  do {
        opcao = menu_relatorios();
        
        switch(opcao) {
            case '1': modulo_relprofissional();
                      break;
            case '2': modulo_relclientes();
                      break;
        }
  } while(opcao != '0');
}


char menu_relatorios(void) {

  char op_relatorio;

  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                             Módulo relatório                           ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                         [1] Relatórios de Profissionais                ///\n");
  printf("\t///                         [2] Relatórios de Clientes                     ///\n");
  printf("\t///                         [3] Relatórios de Dietas                       ///\n");
  printf("\t///                         [0] Retornar ao Menu Principal                 ///\n");  
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\n"); 
  printf("\t//// Escolha uma opção: "); 
  scanf("%c", &op_relatorio);
  limparBuffer();
  return op_relatorio;
} 