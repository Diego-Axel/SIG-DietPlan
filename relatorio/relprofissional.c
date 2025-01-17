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
            case '1': relprofissional_geral();
                    break;
            case '2': relprofissional_ativos();
                    break;
            case '3': relprofissional_inativos();
                    break;
            case '4': relprof_ordenado();
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
  printf("\t///                         [4] Profissionais (Ordem Alfabética)           ///\n");  
  printf("\t///                         [0] Retornar ao Menu Principal                 ///\n");  
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\n"); 
  printf("\t//// Escolha uma opção: "); 
  scanf("%c", &op_relatorio);
  limparBuffer();
  return op_relatorio;
}


void relprofissional_geral(void) {
    FILE* fp;
    Profissional* prf;
        
        fp = fopen("profissional.dat", "rb");
        if (fp == NULL) {
            printf("Erro na abertura do arquivo!\n");
            printf("Não é possível continuar...\n");
            exit(1);
        }
        prf = (Profissional*) malloc (sizeof(Profissional));
        system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
        printf("\t/////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
        printf("\t///                                                                                                       ///\n");
        printf("\t///                                            Relatório Geral                                            ///\n");
        printf("\t///                                                                                                       ///\n");
        printf("\t/////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
        while (fread(prf, sizeof(Profissional), 1, fp)){
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
            printf("\n");
            printf("\t//////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    } 
    free(prf);
    printf("\n");
    printf("\ttecle <ENTER> para continuar... ");
    getchar();
}


void relprofissional_ativos(void) {
    FILE* fp;
    Profissional* prf;
    
    fp = fopen("profissional.dat", "rb");
    if (fp == NULL){
        printf("Erro na abertura do arquivo!\n");
        printf("Não é possível continuar...\n");
        exit(1);
    }
    prf = (Profissional*) malloc (sizeof(Profissional));
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    printf("\t/////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\t///                                                                                                       ///\n");
    printf("\t///                                       Relatório Profissionais Ativos                                  ///\n");
    printf("\t///                                                                                                       ///\n");
    printf("\t/////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    while (fread(prf, sizeof(Profissional), 1, fp)){
        if (prf->status != 'I'){
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
            printf("\t/////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
        }
    } 
    free(prf);
    printf("\n");
    printf("\ttecle <ENTER> para continuar... ");
    getchar();
}


void relprofissional_inativos(void) {
    FILE* fp;
    Profissional* prf;
    
    fp = fopen("profissional.dat", "rb");
    if (fp == NULL){
        printf("Erro na abertura do arquivo!\n");
        printf("Não é possível continuar...\n");
        exit(1);
    }
    prf = (Profissional*) malloc (sizeof(Profissional));
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    printf("\t/////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\t///                                                                                                       ///\n");
    printf("\t///                                      Relatório Profissionais Inativos                                 ///\n");
    printf("\t///                                                                                                       ///\n");
    printf("\t/////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    while (fread(prf, sizeof(Profissional), 1, fp)){
        if (prf->status == 'I'){
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
            printf("\t/////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
        }
    } 
    free(prf);
    printf("\n");
    printf("\ttecle <ENTER> para continuar... ");
    getchar();
}


//Créditos: Fillipe, João Victor e ChatGPT.
ListaProf* lista_ordenada_prof(void) {
    FILE* fp;
    Profissional* prf;
    ListaProf* novo;
    ListaProf* l = NULL;

    fp = fopen("profissional.dat", "rb");
    if (fp == NULL) {
        printf("Erro na abertura do arquivo!\n");
        printf("Não é possível continuar...\n");
        exit(1);
    }

    while (1) {
        prf = (Profissional*) malloc(sizeof(Profissional)); 
        if (fread(prf, sizeof(Profissional), 1, fp) != 1) { 
            free(prf); 
            break; 
        }
        
        novo = (ListaProf*) malloc(sizeof(ListaProf));
        novo->prf = prf;   
        novo->prox = NULL; 

        if (l == NULL) {
            l = novo; 
        } else if (strcmp(novo->prf->nome, l->prf->nome) < 0) {
            novo->prox = l;
            l = novo; 
        } else {
            ListaProf* ant = l;
            ListaProf* atu = l->prox;
            while ((atu != NULL) && (strcmp(novo->prf->nome, atu->prf->nome) > 0)) {
                ant = atu;
                atu = atu->prox;
            }
            ant->prox = novo; 
            novo->prox = atu;
        }
    }
    fclose(fp); 
    return l;   
}


