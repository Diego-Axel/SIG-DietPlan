// Bibliotecas

#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include "profissional.h"
#include "../utilitarios/utis.h" // Assinatura das utilidades
#include "../validadores/validadores.h" // Assinatura dos validadores

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

// Função para gravar profissional
void grava_prof(Profissional* prf) {
  FILE* fp;
  fp = fopen("profissional.dat", "ab");
  if (fp == NULL) {
    printf("Erro na abertura do arquivo!\n");
    printf("Não é possível continuar...\n");
    exit(1);
  }
  fwrite(prf, sizeof(Profissional), 1, fp);
  fclose(fp);
}

// Função para cadastrar profissional
Profissional* cadastrar_prof(void) {
  Profissional* prf;
  prf = (Profissional*) malloc(sizeof(Profissional));
  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                            Cadastar profissional                       ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");

// Loop para validar o nome
    do {
        printf("\t//// Digite o nome: ");
        fgets(prf->nome, 40, stdin); // Limita a entrada a 39 caracteres
        prf->nome[strcspn(prf->nome, "\n")] = '\0';
        limparBuffer();

        // Verifica se o nome é válido
        if (!validaNome(prf->nome)) {
            printf("\t//// Nome inválido. Tente novamente.\n");
        }
    } while (!validaNome(prf->nome)); // Continua pedindo até que um nome válido seja inserido

  printf("\n");
  
  // Loop para validar o e-mail
    do {
        printf("\t//// Digite o e-mail: ");
        scanf("%29s", prf->email); // Limita a entrada a 29 caracteres
        limparBuffer();

        // Verifica se o e-mail é válido
        if (!validaEmail(prf->email)) {
            printf("\t//// E-mail inválido. Tente novamente.\n");
        }
    } while (!validaEmail(prf->email)); // Continua pedindo até que um e-mail válido seja inserido

  printf("\n");

 // Loop para validar o telefone
    do {
        printf("\t//// Digite o telefone no formato (XX) XXXXX-XXXX: ");
        fgets(prf->telefone, 16, stdin); // Limita a entrada a 15 caracteres
        prf->telefone[strcspn(prf->telefone, "\n")] = '\0';
        limparBuffer();

        if (!validaFone(prf->telefone)) {
            printf("\t//// Telefone inválido. Tente novamente.\n");
        }
    } while (!validaFone(prf->telefone)); // Continua pedindo até que um telefone válido seja inserido

  printf("\n");

  // Loop para validar o CPF
    do {
        printf("\t//// Digite o CPF (apenas números): ");
        scanf("%11s", prf->cpf); // Lê até 11 dígitos, sem considerar o caractere nulo
        limparBuffer();

        // Verifica se o CPF é válido
        if (!valida_CPF(prf->cpf)) {
            printf("\t//// CPF inválido. Tente novamente.\n");
        }
    } while (!valida_CPF(prf->cpf)); // Continua pedindo até que um CPF válido seja inserido

  printf("\n");

// Loop para validar o CRN
    do {
        printf("\t//// Digite o CRN (XXXXX/CRN-X) : ");
        fgets(prf->crn, 12, stdin); // Lê até 11 dígitos, sem considerar o caractere nulo
        prf->crn[strcspn(prf->crn, "\n")] = '\0';
        limparBuffer();

        // Verifica se o CRN é válido
        if (!validaCRN(prf->crn)) {
            printf("\t//// CRN inválido. Tente novamente.\n");
        }
    } while (!validaCRN(prf->crn)); // Continua pedindo até que um CRN válido seja inserido

// Indica status como ativo
  prf->status = 'A';

  printf("\n");
  printf("\t//// Profissional cadastrado com sucesso!");
  printf("\n");
  printf("\tTecle <ENTER> para prosseguir... ");
  getchar();
  return prf;
}

// Função para buscar profissional
Profissional* buscar_prof(void) {
    FILE* fp;
    Profissional* prf;
    char crn[12];

    prf = (Profissional*) malloc(sizeof(Profissional));
    fp = fopen("profissional.dat", "rb");
    if (fp == NULL) {
        printf("Erro na abertura do arquivo!\n");
        printf("Não é possível continuar...\n");
        exit(1);
    }

    while(!feof(fp)) {
      fread(prf, sizeof(Profissional), 1, fp);
      if ((strcmp(prf->crn, crn) == 0) && (prf->status == 'A')) {
          fclose(fp);
          return prf;
      } 
    }
    fclose(fp);
    return NULL;
}

// Função para mostrar a tela de inserir o CRN
char* tela_pesquisar_prof(void) {
    char* crn;
    crn = (char*) malloc(12*sizeof(char*));
    char continuar;
    
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
      getchar();
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
      printf("\t//// Digite o CRN do profissional a ser exibido: ");
      scanf("%[0-9.-]", crn);
      limparBuffer();
      return crn;
    }
} 

void exibir_prof(Profissional* prf) {

  if (prf == NULL) {
      printf("\n\t//// Profissional Inexistente !\n");
  } else {
      printf("\n");
      printf("\t//// Profissional Cadastrado !\n");
      printf("\n");
      printf("\t//// Nome: %s\n", prf->nome);
      printf("\n");
      printf("\t//// E-mail: %s\n", prf->email);
      printf("\n");
      printf("\t//// Telefone: %s\n", prf->telefone);
      printf("\n");
      printf("\t//// CPF: %s\n", prf->cpf);
      printf("\n");
      printf("\t//// CRN: %s\n", prf->crn);
      printf("\n");
      printf("\t//// Status: %c\n", prf->status);
    }
    printf("\ttecle <ENTER> para continuar: ");
    getchar();
}

void pesquisar_prof(void){
  Profissional* prf;
  char* crn;

  crn = tela_pesquisar_prof();
  prf = buscar_prof();
  exibir_prof(prf);
  free(prf);
  free(crn);
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