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