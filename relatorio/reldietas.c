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
            case '2': reldietas_ativas();
                      break;
            case '3': reldietas_inativas();
                      break;
            case '4': reldietas_ordenado();
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
  printf("\t///                         [4] Dietas (Por Calorias)                      ///\n");
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
        printf("\t//// Quantidade de Calorias: %s cal\n", diet->cal);
        printf("\n");
        printf("\t//// Status: %c\n", diet->status);
        printf("\n");
        printf("\t/////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
        free(cpf);
        free(crn);
    } 
    free(diet);
    printf("\n");
    printf("\tTecle <ENTER> para continuar... ");
    getchar();
}



void reldietas_ativas(void) {
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
    printf("\t///                                        Relatório Dietas Ativas                                        ///\n");
    printf("\t///                                                                                                       ///\n");
    printf("\t/////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    while (fread(diet, sizeof(Dietas), 1, fp)) {
        if (diet->status != 'I') {
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
            printf("\t//// Quantidade de Calorias: %s cal\n", diet->cal);
            printf("\n");
            printf("\t/////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
            free(cpf);
            free(crn);
        }
    }
    free(diet);
    printf("\n");
    printf("\tTecle <ENTER> para continuar...");
    getchar();

}


void reldietas_inativas(void) {
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
    printf("\t///                                        Relatório Dietas Inativas                                      ///\n");
    printf("\t///                                                                                                       ///\n");
    printf("\t/////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    while (fread(diet, sizeof(Dietas), 1, fp)) {
        if (diet->status == 'I') {
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
            printf("\t//// Quantidade de Calorias: %s cal\n", diet->cal);
            printf("\n");
            printf("\t/////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
            free(cpf);
            free(crn);
        }
    }
    free(diet);
    printf("\n");
    printf("\tTecle <ENTER> para continuar...");
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


//Créditos: Fillipe, João Victor e ChatGPT.
ListaDiet* lista_ordenada_diet(void) {
    FILE* fp;
    Dietas* diet;
    ListaDiet* novo;
    ListaDiet* l = NULL;

    fp = fopen("dietas.dat", "rb");
    if (fp == NULL) {
        printf("Erro na abertura do arquivo!\n");
        printf("Não é possível continuar...\n");
        exit(1);
    }

    while (1) {
        diet = (Dietas*) malloc(sizeof(Dietas)); 
        if (fread(diet, sizeof(Dietas), 1, fp) != 1) { 
            free(diet); 
            break; 
        }
        
        novo = (ListaDiet*) malloc(sizeof(ListaDiet));
        novo->diet = diet;   
        novo->prox = NULL; 

        if (l == NULL) {
            l = novo; 
        } else if (strcmp(novo->diet->cal, l->diet->cal) < 0) {
            novo->prox = l;
            l = novo; 
        } else {
            ListaDiet* ant = l;
            ListaDiet* atu = l->prox;
            while ((atu != NULL) && (strcmp(novo->diet->cal, atu->diet->cal) > 0)) {
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


void imprime_lista_diet(ListaDiet* l){
    char* cpf;
    char* crn;
    
    if(l == NULL){
        printf("\tNão existem dietas cadastradas!\n");
        printf("\tTecle <ENTER> para prosseguir... ");
        getchar();
        return;
    }
    while(l != NULL){
        printf("\n\t//// ID da Dieta: %s\n", l->diet->id);
        printf("\n");
        cpf = get_cliente(l->diet->cpf_cliente);
        printf("\t//// Cliente: %s\n", cpf);
        printf("\n");
        crn = get_prof(l->diet->crn_profissional);
        printf("\t//// Profissional: %s\n", crn);
        printf("\n");
        printf("\t//// Tipo: %s\n", l->diet->tipo);
        printf("\n");
        printf("\t//// Quantidade de Calorias: %s cal\n", l->diet->cal);
        printf("\n");
        printf("\t//// Status: %c\n", l->diet->status);
        printf("\n");
        printf("\t/////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
        free(cpf);
        free(crn);
        l = l->prox;
    }
}


//Créditos: Flavius Gorgônio || @flgorgonio
void limpa_lista_diet(ListaDiet* l){
    ListaDiet* p = l;
	while (p != NULL){
		ListaDiet* t = p->prox;
		free(p->diet);
        free(p);
		p = t;
	}
}


void reldietas_ordenado(void){
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    printf("\t/////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\t///                                                                                                       ///\n");
    printf("\t///                                           Relatório Dietas                                            ///\n");
    printf("\t///                                    (Ordem Crescente em Calorias)                                      ///\n");
    printf("\t///                                                                                                       ///\n");
    printf("\t/////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    ListaDiet* l = lista_ordenada_diet();
    imprime_lista_diet(l);
    limpa_lista_diet(l);
    printf("\n");
    printf("\ttecle <ENTER> para continuar... ");
    getchar();
}