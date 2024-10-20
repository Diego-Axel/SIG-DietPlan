// Bibliotecas

#include <stdio.h> 
#include <stdlib.h>
#include <wchar.h>
#include <locale.h>
#include <ctype.h>
#include "agendamento.h"

// Funções

char menu_agendamento(void) {

  char op_agendar;

  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                            Módulo agendamento                          ///\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                         [1] Agendar consulta                           ///\n");
  wprintf(L"\t///                         [2] Exibir consulta                            ///\n"); 
  wprintf(L"\t///                         [3] Excluir consulta                           ///\n");
  wprintf(L"\t///                         [0] Retornar ao Menu Principal                 ///\n"); 
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\n"); 
  wprintf(L"\t//// Escolha uma opção: "); 
  scanf("%c", &op_agendar);
  getchar();
  return op_agendar;
}


void agendar(void) {
  
  char continuar;
  char cpf[13];
  char nome[55];
  char prof[55];
  char dieta[15];
  char hora[5];

  do {
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t///                               Agendar                                  ///\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\n"); 
    wprintf(L"\t//// tecle <ENTER> para continuar ou '0' Para CANELAR e RETORNAR: ");
    scanf("%c", &continuar);
    getchar();
    if (continuar == '0') {
      wprintf(L"\n");
      wprintf(L"\t-> Agendamento Cancelado <-\n");
      break;
    }
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t///                               Agendamento                              ///\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\n"); 
    wprintf(L"\t//// Digite o CPF do Cliente que deseja agendar: ");
    scanf("%[0-9.-]", cpf);
    getchar();
    wprintf(L"\n"); 
    wprintf(L"\t//// Nome do Cliente: \n");
    scanf("%[A-Za-z]", nome);
    getchar();
    wprintf(L"\n");
    wprintf(L"\t//// Profissional Responsável: \n");
    scanf("%[A-Za-z]", prof);
    getchar();
    wprintf(L"\n");
    wprintf(L"\t//// Tipo De Dieta: \n");
    scanf("%[A-Za-z]", dieta);
    getchar();
    wprintf(L"\n");
    wprintf(L"\t//// Horário: \n");
    scanf("%[0-9 :]", hora);
    wprintf(L"\n");
    wprintf(L"\ttecle <ENTER> para continuar... ");
    getchar();
  } while (continuar != '0');
  wprintf(L"\n"); 
  wprintf(L"\ttecle <ENTER> para retornar... ");
  getchar();
}


void exibir_agendamento(void) {
  char continuar;
  char cpf[13];
  
  while (continuar != '0') {
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t///                           Exibir agendamento                           ///\n");
    wprintf(L"\t///                              [0] Retornar                              ///\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\n");
    wprintf(L"\t//// tecle <ENTER> para prosseguir e '0' para RETORNAR: ");
    scanf("%c", &continuar);
    getchar();
    if (continuar == '0') {
      break;
    }
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t///                             Exibir agendamento                         ///\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\n");
    wprintf(L"\t//// Digite o CPF do cliente a ser exibido: ");
    scanf("%[0-9.-]", cpf);
    getchar();
    wprintf(L"\n");
    wprintf(L"\t//// Nome: \n");
    wprintf(L"\n");
    wprintf(L"\t//// Profissional: \n");
    wprintf(L"\n");
    wprintf(L"\t//// Horário: \n");
    wprintf(L"\n");
    wprintf(L"\t//// CPF: \n");
    wprintf(L"\n");
    wprintf(L"\t//// Dieta: \n");
    wprintf(L"\n");
    wprintf(L"\ttecle <ENTER> para continuar: ");
    getchar();
  }
}


void excluir_agendamento(void) {

    // Variáveis
  char resp;

  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                          Excluir agendamento                           ///\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\tDeseja excluir o agendamento selecionado (S/N) \n");
  scanf(" %c", &resp);
  if ((resp == 's') || (resp == 'S')) {
    wprintf(L"\tAgendamento excluído!\n");
    wprintf(L"\ttecle <ENTER> para continuar... ");
    getchar();
  } 
  else { 
    wprintf(L"\tTecle <ENTER> para continuar... ");
    getchar();
  }
}