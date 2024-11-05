// Bibliotecas

#include <stdio.h> 
#include <stdlib.h>
#include "profissional.h"
#include "../utilitarios/utis.h" // Assinatura das utilidades
#include "../validadores/validadores.h"

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
  char telefone[17];
  char cpf[13];
  char crn[10];

  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                            Cadastar profissional                       ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");

// Loop para validar o e-mail
    do {
        printf("\t//// Digite o nome: ");
        scanf("%39s", nome); // Limita a entrada a 39 caracteres
        limparBuffer();

        // Verifica se o nome é válido
        if (!validaNome(nome)) {
            printf("\t//// Nome inválido. Tente novamente.\n");
        }
    } while (!validaNome(nome)); // Continua pedindo até que um nome válido seja inserido

  printf("\n");

  // Loop para validar o e-mail
    do {
        printf("\t//// Digite o e-mail: ");
        scanf("%29s", email); // Limita a entrada a 29 caracteres
        limparBuffer();

        // Verifica se o e-mail é válido
        if (!validaEmail(email)) {
            printf("\t//// E-mail inválido. Tente novamente.\n");
        }
    } while (!validaEmail(email)); // Continua pedindo até que um e-mail válido seja inserido

  printf("\n");

 // Loop para validar o telefone
    do {
        printf("\t//// Digite o telefone (apenas números): ");
        scanf("%15s", telefone); // Limita a entrada a 15 caracteres
        limparBuffer();

        if (!validaFone(telefone)) {
            printf("\t//// Telefone inválido. Tente novamente.\n");
        }
    } while (!validaFone(telefone)); // Continua pedindo até que um telefone válido seja inserido

  printf("\n");

  // Loop para validar o CPF
    do {
        printf("\t//// Digite o CPF (apenas números): ");
        scanf("%11s", cpf); // Lê até 11 dígitos, sem considerar o caractere nulo
        limparBuffer();

        // Verifica se o CPF é válido
        if (!valida_CPF(cpf)) {
            printf("\t//// CPF inválido. Tente novamente.\n");
        }
    } while (!valida_CPF(cpf)); // Continua pedindo até que um CPF válido seja inserido

  printf("\n");

// Loop para validar o CRN
    do {
        printf("\t//// Digite o CRN : ");
        scanf("%9s", crn); // Lê até 9 dígitos, sem considerar o caractere nulo
        limparBuffer();

        // Verifica se o CRN é válido
        if (!validaCRN(crn)) {
            printf("\t//// CRN inválido. Tente novamente.\n");
        }
    } while (!validaCRN(crn)); // Continua pedindo até que um CRN válido seja inserido

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