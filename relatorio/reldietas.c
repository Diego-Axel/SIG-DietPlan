//Bibliotecas

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "reldietas.h"
#include "../utilitarios/utis.h"
#include "../dietas/dietas.h"
#include "../clientes/clientes.h"
#include "../profissional/profissional.h"

//Funções

void modulo_reldietas(void) {
  
  char opcao;

  do {
        opcao = menu_reldietas();
        
        switch(opcao) {
            case '1': reldietas_geral();
                      break;
        }
  } while(opcao != '0');
}


char menu_reldietas(void) {

  char op_relatorio;

  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                          Módulo Relatório Dietas                       ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                         [1] Relatório Geral                            ///\n");
  printf("\t///                         [2] Dietas Ativas                              ///\n");
  printf("\t///                         [3] Dietas Inativas                            ///\n");
  printf("\t///                         [0] Retornar ao Menu Principal                 ///\n");  
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\n"); 
  printf("\t//// Escolha uma opção: "); 
  scanf("%c", &op_relatorio);
  limparBuffer();
  return op_relatorio;
}


void reldietas_geral(void) {
    FILE* fp;
    Dietas* diet;
    char* cpf;
    char* crn;
  
    fp = fopen("dietas.dat", "rb");
    if (fp == NULL){
        printf("Erro na abertura do arquivo!\n");
        printf("Não é possível continuar...\n");
        exit(1);
    }
    diet = (Dietas*) malloc (sizeof(Dietas));
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    printf("\t/////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\t///                                                                                                       ///\n");
    printf("\t///                                            Relatório Geral                                            ///\n");
    printf("\t///                                                                                                       ///\n");
    printf("\t/////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    while (fread(diet, sizeof(Dietas), 1, fp)){
        printf("\n\t//// ID da Dieta: %s\n", diet->id);
        printf("\n");
        cpf = get_cliente(diet->cpf_cliente);
        printf("\t//// Cliente: %s\n", cpf);
        printf("\n");
        crn = get_prof(diet->crn_profissional);
        printf("\t//// Profissional: %s\n", crn);
        printf("\n");
        printf("\t//// Tipo: %s\n", diet->tipo);
        printf("\n");
        printf("\t//// Status: %c\n", diet->status);
        printf("\n");
        printf("\t/////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    } 
    free(diet);
    free(cpf);
    free(crn);
    printf("\n");
    printf("\ttecle <ENTER> para continuar... ");
    getchar();
}

char* get_cliente (char* cpf){
    FILE* fp;
    Cliente* clt;
    
    clt = (Cliente*) malloc (sizeof(Cliente));
    fp = fopen("cliente.dat", "rb");
    if (fp == NULL){
    printf("Erro na abertura do arquivo!\n");
    printf("Não é possível continuar...\n");
    exit(1);
    }
    while(fread(clt, sizeof(Cliente), 1, fp)){
        if(strcmp(clt->cpf, cpf) == 0){
            fclose(fp);
            return (clt->nome);
        }
    }
    fclose(fp);
    free(clt);
    return NULL;
}

char* get_prof (char* crn){
    FILE* fp;
    Profissional* prf;
    
    prf = (Profissional*) malloc (sizeof(Profissional));
    fp = fopen("profissional.dat", "rb");
    if (fp == NULL){
    printf("Erro na abertura do arquivo!\n");
    printf("Não é possível continuar...\n");
    exit(1);
    }
    while(fread(prf, sizeof(Profissional), 1, fp)){
        if(strcmp(prf->crn, crn) == 0){
            fclose(fp);
            return (prf->nome);
        }
    }
    fclose(fp);
    free(prf);
    return NULL;
}