// Bibliotecas

#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include "clientes.h"
#include "../utilitarios/utis.h" // Assinatura das utilidades
#include "../validadores/validadores.h" // Assinatura dos validadores

// Funções 

char menu_cliente(void) {

  char op_cliente;

  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                              Módulo cliente                            ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                         [1] Cadastrar cliente                          ///\n");
  printf("\t///                         [2] Exibir cliente                             ///\n"); 
  printf("\t///                         [3] Alterar dados do cliente                   ///\n"); 
  printf("\t///                         [4] Excluir cliente                            ///\n");
  printf("\t///                         [0] Retornar ao Menu Principal                 ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\n"); 
  printf("\t//// Escolha uma opção: "); 
  scanf("%c", &op_cliente);
  limparBuffer();
  return op_cliente;
}

// Função para gravar cliente

void grava_cliente(Cliente* clt) {
  FILE* fp;
  fp = fopen("cliente.dat", "ab");
  if (fp == NULL) {
    printf("Erro na abertura do arquivo!\n");
    printf("Não é possível continuar...\n");
    exit(1);
  }
  fwrite(clt, sizeof(Cliente), 1, fp);
  fclose(fp);
}


Cliente* cadastrar_cliente(void) {
  Cliente* clt;
  clt = (Cliente*) malloc(sizeof(Cliente));


  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                            Cadastrar cliente                            ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  // Loop para validar o nome
  do {
        printf("\t//// Digite o nome: ");
        fgets(clt->nome, 40, stdin); // Limita a entrada a 39 caracteres
        clt->nome[strcspn(clt->nome, "\n")] = '\0';
        limparBuffer();

        // Verifica se o nome é válido
        if (!validaNome(clt->nome)) {
            printf("\t//// Nome inválido. Tente novamente.\n");
        }
    } while (!validaNome(clt->nome)); // Continua pedindo até que um nome válido seja inserido
  
  printf("\n");

 // Loop para validar o e-mail
    do {
        printf("\t//// Digite o e-mail: ");
        scanf("%29s", clt->email); // Limita a entrada a 29 caracteres
        limparBuffer();

        // Verifica se o e-mail é válido
        if (!validaEmail(clt->email)) {
            printf("\t//// E-mail inválido. Tente novamente.\n");
        }
    } while (!validaEmail(clt->email)); // Continua pedindo até que um e-mail válido seja inserido

  printf("\n");

// Loop para validar o telefone
    do {
        printf("\t//// Digite o telefone no formato (XX) XXXXX-XXXX: ");
        fgets(clt->telefone, 16, stdin); // Limita a entrada a 15 caracteres
        clt->telefone[strcspn(clt->telefone, "\n")] = '\0';
        limparBuffer();

        if (!validaFone(clt->telefone)) {
            printf("\t//// Telefone inválido. Tente novamente.\n");
        }
    } while (!validaFone(clt->telefone)); // Continua pedindo até que um telefone válido seja inserido

  printf("\n");

// Loop para validar o CPF
    do {
        printf("\t//// Digite o CPF (apenas números): ");
        scanf("%11s", clt->cpf); // Lê até 11 dígitos, sem considerar o caractere nulo
        limparBuffer();

        // Verifica se o CPF é válido
        if (!valida_CPF(clt->cpf)) {
            printf("\t//// CPF inválido. Tente novamente.\n");
        }
    } while (!valida_CPF(clt->cpf)); // Continua pedindo até que um CPF válido seja inserido

    // Indica status como ativo
  clt->status = 'A';

  printf("\n");
  printf("\t//// Cliente cadastrado com sucesso!");
  printf("\n");
  printf("\tTecle <ENTER> para prosseguir... ");
  getchar();
  return clt;
}


void exibir_cliente(void) {
  char continuar;
  char cpf[13];
  
  while (continuar != '0') {
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    printf("\t//////////////////////////////////////////////////////////////////////////////\n");
    printf("\t///                                                                        ///\n");
    printf("\t///                             Exibir cliente                             ///\n");
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
    printf("\t///                             Exibir cliente                             ///\n");
    printf("\t///                                                                        ///\n");
    printf("\t//////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t//// Digite o CPF do Cliente a ser exibido: ");
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
    printf("\ttecle <ENTER> para continuar: ");
    getchar();
  }
}


void alterar_cliente(void) {

  // Variáveis
  char nome[40];
  char email[30];
  char telefone[13];
  char cpf[13];

  system("clear || cls"); // se for Linux use 'clear', se for Windows use 'cls'
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                             Alterar Cliente                            ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");

  // Simulação de busca de dados antigos (pode ser substituído por uma busca real em arquivo ou banco de dados)
  printf("\t//// Dados antigos:\n");
  printf("\tNome: João da Silva\n");
  printf("\tEmail: joao.silva@email.com\n");
  printf("\tTelefone: (11) 91234-5678\n");
  printf("\tCPF: 123.456.789-00\n");
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

  // Confirmar a operação de recadastramento
  printf("\t//// Recadastramento realizado com sucesso!");
  printf("\n");
  printf("\tTecle <ENTER> para prosseguir... ");
  getchar();
}


void excluir_cliente(void) {

  // Variáveis
  char resp;

  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                        Excluir Dados do Cliente                        ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\tDeseja excluir os dados do Cliente selecionado (S/N) ");
  scanf("%c", &resp);
  limparBuffer();
  printf("\n");
  if ((resp == 's') || (resp == 'S')) {
    printf("\tDados do cilente excluídos!\n");
    printf("\n");
    printf("\ttecle <ENTER> para continuar... ");
    getchar();
  } 
  else { 
    printf("\tExclusão Cancelada!\n");
    printf("\n");
    printf("\tTecle <ENTER> para continuar... ");
    getchar();
  }
}