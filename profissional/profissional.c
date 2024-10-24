// Bibliotecas

#include <stdio.h> 
#include <stdlib.h>
#include <wchar.h>
#include <locale.h>
#include <ctype.h>
#include "profissional.h"
#include "../utilitarios/utis.h" // Assinatura das utilidades

// Funções

char menu_profissional(void) {
  char op_profissional;

  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                             Módulo Profissional                        ///\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                         [1] Cadastrar profissional                     ///\n");
  wprintf(L"\t///                         [2] Exibir profissional                        ///\n"); 
  wprintf(L"\t///                         [3] Alterar dados do profissional              ///\n"); 
  wprintf(L"\t///                         [4] Excluir profissional                       ///\n");
  wprintf(L"\t///                         [0] Retornar ao Menu Principal                 ///\n");  
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\n"); 
  wprintf(L"\tEscolha uma opção: ");
  scanf(" %c", &op_profissional);
  limparBuffer();
  
  return op_profissional;
}


void cadastrar_prof(void) {

  // Variavéis
  char nome[40];
  char email[30];
  char telefone[13];
  char cpf[13];
  char crn[10];

  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                            Cadastar profissional                       ///\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\n");
  wprintf(L"\t//// Digite o nome do profissional: ");
  scanf("%[A-Z a-z]", nome);
  limparBuffer();
  wprintf(L"\n");
  wprintf(L"\t//// Digite o e-mail: ");
  scanf("%[A-Z a-z@.0-9]", email);
  limparBuffer();
  wprintf(L"\n");
  wprintf(L"\t//// Digite o telefone: ");
  scanf("%[0-9 ()-]", telefone);
  limparBuffer();
  wprintf(L"\n");
  wprintf(L"\t//// Digite o cpf: ");
  scanf("%[0-9.-]", cpf);
  limparBuffer();
  wprintf(L"\n");
  wprintf(L"\t//// Digite o CRN: ");
  scanf("%[0-9.-]", crn);
  limparBuffer();
  wprintf(L"\n");
  wprintf(L"\t//// Profissional cadastrado com sucesso!");
  wprintf(L"\n");
  wprintf(L"\tTecle <ENTER> para prosseguir... ");
  getchar();
}


void exibir_prof(void) {
  char continuar;
  char cpf[13];
  
  while (continuar != '0') {
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t///                          Exibir profissional                           ///\n");
    wprintf(L"\t///                              [0] Retornar                              ///\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\n");
    wprintf(L"\t//// tecle <ENTER> para prosseguir e '0' para RETORNAR: ");
    scanf("%c", &continuar);
    limparBuffer();
    if (continuar == '0') {
      break;
    }
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t///                             Exibir profissional                        ///\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\n");
    wprintf(L"\t//// Digite o CPF do profissional a ser exibido: ");
    scanf("%[0-9.-]", cpf);
    limparBuffer();
    wprintf(L"\n");
    wprintf(L"\t//// Nome: \n");
    wprintf(L"\n");
    wprintf(L"\t//// E-mail: \n");
    wprintf(L"\n");
    wprintf(L"\t//// Telefone: \n");
    wprintf(L"\n");
    wprintf(L"\t//// CPF: \n");
    wprintf(L"\n");
    wprintf(L"\t//// CRN: \n");
    wprintf(L"\n");
    wprintf(L"\ttecle <ENTER> para continuar: ");
    getchar();
  }
}

// Adaptado do Chatgpt
void recadastrar_prof(void) {

  // Variáveis
  char nome[40];
  char email[30];
  char telefone[13];
  char cpf[13];
  char crn[10];

  system("clear || cls"); // se for Linux use 'clear', se for Windows use 'cls'
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                        Recadastrar profissional                        ///\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\n");

  // Simulação de busca de dados antigos (pode ser substituído por uma busca real em arquivo ou banco de dados)
  wprintf(L"\t//// Dados antigos:\n");
  wprintf(L"\tNome: João da Silva\n");
  wprintf(L"\tEmail: joao.silva@email.com\n");
  wprintf(L"\tTelefone: (11) 91234-5678\n");
  wprintf(L"\tCPF: 123.456.789-00\n");
  wprintf(L"\tCRN: 123456\n");
  wprintf(L"\n");

  // Solicitação de novos dados
  wprintf(L"\t//// Digite o novo nome do profissional (ou pressione ENTER para manter o atual): ");
  fgets(nome, sizeof(nome), stdin);
  limparBuffer();
  wprintf(L"\n");

  wprintf(L"\t//// Digite o novo e-mail (ou pressione ENTER para manter o atual): ");
  fgets(email, sizeof(email), stdin);
  limparBuffer();
  wprintf(L"\n");

  wprintf(L"\t//// Digite o novo telefone (ou pressione ENTER para manter o atual): ");
  fgets(telefone, sizeof(telefone), stdin);
  limparBuffer();
  wprintf(L"\n");

  wprintf(L"\t//// Digite o novo CPF (ou pressione ENTER para manter o atual): ");
  fgets(cpf, sizeof(cpf), stdin);
  limparBuffer();
  wprintf(L"\n");

  wprintf(L"\t//// Digite o novo CRN (ou pressione ENTER para manter o atual): ");
  fgets(crn, sizeof(crn), stdin);
  limparBuffer();
  wprintf(L"\n");

  // Confirmar a operação de recadastramento
  wprintf(L"\t//// Recadastramento realizado com sucesso!");
  wprintf(L"\n");
  wprintf(L"\tTecle <ENTER> para prosseguir... ");
  getchar();
}


void excluir_prof(void) {

  // Variáveis
  char respprof;

  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                      Excluir dados do profissional                     ///\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\tDeseja excluir os dados do profissional selecionado? s/n");
  scanf(" %c", &respprof);
  limparBuffer();
  if (respprof == 's') {
    printf("\tDados do profissional excluídos!\n");
  } else { 
    wprintf(L"\tTecle <ENTER> para continuar: \n");
    getchar();
  }

} 