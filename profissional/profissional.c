// Bibliotecas

#include <stdio.h> 
#include <stdlib.h>
#include "profissional.h"
#include "../utilitarios/utis.h" // Assinatura das utilidades


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


void cadastrar_prof(void) {

  // Variavéis
  char nome[40];
  char email[30];
  char telefone[13];
  char cpf[13];
  char crn[10];

  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                            Cadastar profissional                       ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t//// Digite o nome do profissional: ");
  scanf("%[A-Z a-z]", nome);
  limparBuffer();
  printf("\n");
  printf("\t//// Digite o e-mail: ");
  scanf("%[A-Z a-z@.0-9]", email);
  limparBuffer();
  printf("\n");
  printf("\t//// Digite o telefone: ");
  scanf("%[0-9 ()-]", telefone);
  limparBuffer();
  printf("\n");
  printf("\t//// Digite o cpf: ");
  scanf("%[0-9.-]", cpf);
  limparBuffer();
  printf("\n");
  printf("\t//// Digite o CRN: ");
  scanf("%[0-9.-]", crn);
  limparBuffer();
  printf("\n");
  printf("\t//// Profissional cadastrado com sucesso!");
  printf("\n");
  printf("\tTecle <ENTER> para prosseguir... ");
  getchar();
}


void exibir_prof(void) {
  char continuar;
  char cpf[13];
  
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
    printf("\t//// Digite o CPF do profissional a ser exibido: ");
    scanf("%[0-9.-]", cpf);
    limparBuffer();
    printf("\n");
    printf("\t//// Nome: \n");
    printf("\n");
    printf("\t//// E-mail: \n");
    printf("\n");
    printf("\t//// Telefone: \n");
    printf("\n");
    printf("\t//// CPF: \n");
    printf("\n");
    printf("\t//// CRN: \n");
    printf("\n");
    printf("\ttecle <ENTER> para continuar: ");
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
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                        Recadastrar profissional                        ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");

  // Simulação de busca de dados antigos (pode ser substituído por uma busca real em arquivo ou banco de dados)
  printf("\t//// Dados antigos:\n");
  printf("\tNome: João da Silva\n");
  printf("\tEmail: joao.silva@email.com\n");
  printf("\tTelefone: (11) 91234-5678\n");
  printf("\tCPF: 123.456.789-00\n");
  printf("\tCRN: 123456\n");
  printf("\n");

  // Solicitação de novos dados
  printf("\t//// Digite o novo nome do profissional (ou pressione ENTER para manter o atual): ");
  fgets(nome, sizeof(nome), stdin);
  limparBuffer();
  printf("\n");

  printf("\t//// Digite o novo e-mail (ou pressione ENTER para manter o atual): ");
  fgets(email, sizeof(email), stdin);
  limparBuffer();
  printf("\n");

  printf("\t//// Digite o novo telefone (ou pressione ENTER para manter o atual): ");
  fgets(telefone, sizeof(telefone), stdin);
  limparBuffer();
  printf("\n");

  printf("\t//// Digite o novo CPF (ou pressione ENTER para manter o atual): ");
  fgets(cpf, sizeof(cpf), stdin);
  limparBuffer();
  printf("\n");

  printf("\t//// Digite o novo CRN (ou pressione ENTER para manter o atual): ");
  fgets(crn, sizeof(crn), stdin);
  limparBuffer();
  printf("\n");

  // Confirmar a operação de recadastramento
  printf("\t//// Recadastramento realizado com sucesso!");
  printf("\n");
  printf("\tTecle <ENTER> para prosseguir... ");
  getchar();
}


void excluir_prof(void) {

  // Variáveis
  char respprof;

  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                      Excluir dados do profissional                     ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\tDeseja excluir os dados do profissional selecionado? s/n");
  scanf(" %c", &respprof);
  limparBuffer();
  if (respprof == 's') {
    printf("\tDados do profissional excluídos!\n");
  } else { 
    printf("\tTecle <ENTER> para continuar: \n");
    getchar();
  }

} 