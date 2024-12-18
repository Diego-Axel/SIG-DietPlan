// Bibliotecas

#include <stdio.h> 
#include <stdlib.h>
#include "dietas.h"
#include "../utilitarios/utis.h" // Assinatura das utilidades


void modulo_dieta(void) {
  
  char opcao;

  do {
        opcao = menu_dieta();
        
        switch(opcao) {
            case '1': cadastrar_dieta();
                      break;
            case '2': pesquisar_dieta();
                      break;
            case '3': atualizar_dieta();
                      break;
            case '4': excluir_dieta();
                      break;
        }
  } while(opcao != '0');
}

// Funções 

// Função para cadastrar dieta
void cadastrar_dieta(void){
    Dietas* dts;

    dts = tela_cadastrar_dieta();
    gravar_dieta(dts);
    free(dts);
}

// Função para exibir dieta
void pesquisar_dieta(void){
  Dietas* dts;
  char* id;

  id = tela_pesquisar_dieta();
  dts = buscar_dieta(id);
  exibir_dieta(dts);
  free(dts);
  free(id);
}

// Função para alterar dieta
void atualizar_dieta(void) {
  Dietas* dts;
  char* id;

  id = tela_recadastrar_dieta();
  dts = buscar_dieta(id);

  if (dts == NULL) {
    printf("\n\t//// Dieta Inexistente !\n");
  } else {
    dts = recadastrar_dieta();
    strcpy(dts->id, id);
    regravar_dieta(dts);
    free(dts);
  }
  free(id);
}

// Função para excluir dieta
void excluir_dieta(void) {
  Dietas* dts;
  char* id;
  char confirma;
  id = tela_excluir_dieta();
  dts = (Dietas*) malloc(sizeof(Dietas));
  dts = buscar_dieta(id);
  if (dts == NULL) {
    printf("\n\t//// Dieta Inexistente !\n");
  } else {
    printf("\n\t//// Dieta Encontrada!\n");
    printf("\t//// Tipo: %s\n", dts->tipo);
    printf("\t//// Cliente: %s\n", dts->cpf_cliente);
    printf("\n\t//// Deseja excluir essa dieta? [S/N]: ");

    do {
        scanf("%c", &confirma);
        limparBuffer();
        confirma = toupper(confirma);
        if (confirma == 'S') {
          dts->status = 'I';
          regravar_dieta(dts);
          printf("\n\t//// Dieta Excluída com Sucesso!\n");
        } else if (confirma == 'N') {
          printf("\n\t//// Operação Cancelada!\n");
        } else {
          printf("\n\t //// Operação Inválida! Tente [S/N]: ");
        }
    } while(confirma != 'S' && confirma != 'N');
    
    free(dts);
  }
  free(id);
}

char menu_dietas(void) {  
  char op_dieta;

  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                               Módulo Dietas                            ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                         [1] Cadastrar Dieta                            ///\n");
  printf("\t///                         [2] Exibir Dieta                               ///\n"); 
  printf("\t///                         [3] Alterar dados da Dieta                     ///\n"); 
  printf("\t///                         [4] Excluir Dieta                              ///\n");
  printf("\t///                         [0] Retornar ao Menu Principal                 ///\n");  
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\n"); 
  printf("\tEscolha uma opção: ");
  scanf(" %c", &op_dieta);
  limparBuffer();
  
  return op_dieta;
}

// Função para gravar dietas
void gravar_dieta(Dietas* dts) {
  FILE* fp;
  fp = fopen("dietas.dat", "ab");
  if (fp == NULL) {
    printf("Erro na abertura do arquivo!\n");
    printf("Não é possível continuar...\n");
    exit(1);
  }
  fwrite(dts, sizeof(Dietas), 1, fp);
  fclose(fp);
}

