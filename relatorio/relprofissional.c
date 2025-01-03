#include <stdio.h>
#include <stdlib.h>
#include "relprofissional.h"
#include "../utilitarios/utis.h"
#include "../profissional/profissional.h"

//Funções

void modulo_relprofissional(void){

    char opcao;

    do {
        opcao = menu_relprofissional();

        switch(opcao) {
            case 1: relprofissional_geral();
                    break;
            case 2: relprofissional_ativos();
                    break;
            case 3: relprofissional_inativos();
                    break;
        }
    } while(opcao != '0');
}


char menu_relprofissional(void) {

  char op_relatorio;

  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                         Módulo Relatório Profissional                  ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                         [1] Relatório Geral                            ///\n");
  printf("\t///                         [2] Profissionais Ativos                       ///\n");
  printf("\t///                         [3] Profissionais Inativos                     ///\n");
  printf("\t///                         [0] Retornar ao Menu Principal                 ///\n");  
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\n"); 
  printf("\t//// Escolha uma opção: "); 
  scanf("%c", &op_relatorio);
  limparBuffer();
  return op_relatorio;
}