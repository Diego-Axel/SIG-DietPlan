//Bibliotecas

#include <stdio.h>
#include <stdlib.h>
#include "relclientes.h"
#include "../utilitarios/utis.h"
#include "../clientes/clientes.h"

//Funções

void modulo_relclientes(void) {
  
  char opcao;

  do {
        opcao = menu_relclientes();
        
        switch(opcao) {
            case '1': relclientes_geral();
                      break;
        }
  } while(opcao != '0');
}


char menu_relclientes(void) {

  char op_relatorio;

  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                         Módulo relatório clientes                       ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                         [1] Relatório Geral                            ///\n");
  printf("\t///                         [2] Clientes Ativos                            ///\n");
  printf("\t///                         [3] Clientes Inativos                          ///\n");
  printf("\t///                         [0] Retornar ao Menu Principal                 ///\n");  
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\n"); 
  printf("\t//// Escolha uma opção: "); 
  scanf("%c", &op_relatorio);
  limparBuffer();
  return op_relatorio;
}

void relclientes_geral(void) {
    FILE* fp;
    Cliente* clt;
    char continuar;
  
  do {
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    printf("\t//////////////////////////////////////////////////////////////////////////////\n");
    printf("\t///                                                                        ///\n");
    printf("\t///                             Relatório Geral                            ///\n");
    printf("\t///                                                                        ///\n");
    printf("\t//////////////////////////////////////////////////////////////////////////////\n");
    printf("\n"); 
    printf("\t//// tecle <ENTER> para continuar ou '0' Para CANELAR e RETORNAR: ");
    scanf("%c", &continuar);
    limparBuffer();
    if (continuar == '0') {
      printf("\n");
      printf("\t-> Consulta Cancelada <-\n");
      break;
    }
    fp = fopen("cliente.dat", "rb");
    if (fp == NULL){
        printf("Erro na abertura do arquivo!\n");
        printf("Não é possível continuar...\n");
        exit(1);
    }
    clt = (Cliente*) malloc (sizeof(Cliente));
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    printf("\t/////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\t///                                                                                                       ///\n");
    printf("\t///                                            Relatório Geral                                            ///\n");
    printf("\t///                                                                                                       ///\n");
    printf("\t/////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    while (fread(clt, sizeof(Cliente), 1, fp)){
        printf("\n\t//// Nome: %s\n", clt->nome);
        printf("\n");
        printf("\t//// E-mail: %s\n", clt->email);
        printf("\n");
        printf("\t//// Telefone: %s\n", clt->telefone);
        printf("\n");
        printf("\t//// CPF: %s\n", clt->cpf);
        printf("\n");
        printf("\t//// Status: %c\n", clt->status);
        printf("\n");
        printf("\t/////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    } 
    printf("\n");
    printf("\ttecle <ENTER> para continuar... ");
    getchar();
  } while (continuar != '0');
  printf("\n"); 
  printf("\ttecle <ENTER> para retornar... ");
  getchar();
  
}