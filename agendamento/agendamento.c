// Bibliotecas

#include <stdio.h> 
#include <stdlib.h>
#include "agendamento.h"
#include "../utilitarios/utis.h" // Assinatura das utilidades

// Funções

char menu_agendamento(void) {

  char op_agendar;

  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                            Módulo agendamento                          ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                         [1] Agendar consulta                           ///\n");
  printf("\t///                         [2] Exibir consulta                            ///\n"); 
  printf("\t///                         [3] Excluir consulta                           ///\n");
  printf("\t///                         [0] Retornar ao Menu Principal                 ///\n"); 
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\n"); 
  printf("\t//// Escolha uma opção: "); 
  scanf("%c", &op_agendar);
  limparBuffer();
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
    printf("\t//////////////////////////////////////////////////////////////////////////////\n");
    printf("\t///                                                                        ///\n");
    printf("\t///                               Agendar                                  ///\n");
    printf("\t///                                                                        ///\n");
    printf("\t//////////////////////////////////////////////////////////////////////////////\n");
    printf("\n"); 
    printf("\t//// tecle <ENTER> para continuar ou '0' Para CANELAR e RETORNAR: ");
    scanf("%c", &continuar);
    limparBuffer();
    if (continuar == '0') {
      printf("\n");
      printf("\t-> Agendamento Cancelado <-\n");
      break;
    }
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    printf("\t//////////////////////////////////////////////////////////////////////////////\n");
    printf("\t///                                                                        ///\n");
    printf("\t///                               Agendamento                              ///\n");
    printf("\t///                                                                        ///\n");
    printf("\t//////////////////////////////////////////////////////////////////////////////\n");
    printf("\n"); 
    printf("\t//// Digite o CPF do Cliente que deseja agendar: ");
    scanf("%[0-9.-]", cpf);
    limparBuffer();
    printf("\n"); 
    printf("\t//// Nome do Cliente: \n");
    scanf("%[A-Za-z]", nome);
    limparBuffer();
    printf("\n");
    printf("\t//// Profissional Responsável: \n");
    scanf("%[A-Za-z]", prof);
    limparBuffer();
    printf("\n");
    printf("\t//// Tipo De Dieta: \n");
    scanf("%[A-Za-z]", dieta);
    limparBuffer();
    printf("\n");
    printf("\t//// Horário: \n");
    scanf("%[0-9 :]", hora);
    limparBuffer();
    printf("\n");
    printf("\ttecle <ENTER> para continuar... ");
    getchar();
  } while (continuar != '0');
  printf("\n"); 
  printf("\ttecle <ENTER> para retornar... ");
  getchar();
}


void exibir_agendamento(void) {
  char continuar;
  char cpf[13];
  
  while (continuar != '0') {
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    printf("\t//////////////////////////////////////////////////////////////////////////////\n");
    printf("\t///                                                                        ///\n");
    printf("\t///                           Exibir agendamento                           ///\n");
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
    printf("\t///                             Exibir agendamento                         ///\n");
    printf("\t///                                                                        ///\n");
    printf("\t//////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t//// Digite o CPF do cliente a ser exibido: ");
    scanf("%[0-9.-]", cpf);
    limparBuffer();
    printf("\n");
    printf("\t//// Nome: \n");
    printf("\n");
    printf("\t//// Profissional: \n");
    printf("\n");
    printf("\t//// Horário: \n");
    printf("\n");
    printf("\t//// CPF: \n");
    printf("\n");
    printf("\t//// Dieta: \n");
    printf("\n");
    printf("\ttecle <ENTER> para continuar: ");
    getchar();
  }
}


void excluir_agendamento(void) {

    // Variáveis
  char resp;

  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                          Excluir agendamento                           ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\tDeseja excluir o agendamento selecionado (S/N) \n");
  scanf("%c", &resp);
  limparBuffer();
  if ((resp == 's') || (resp == 'S')) {
    printf("\tAgendamento excluído!\n");
    printf("\ttecle <ENTER> para continuar... ");
    getchar();
  } 
  else { 
    printf("\tTecle <ENTER> para continuar... ");
    getchar();
  }
}