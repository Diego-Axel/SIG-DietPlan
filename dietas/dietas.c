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

// Função para cadastrar profissional
void cadastrar_dieta(void){
    Dietas* dts;

    dts = tela_cadastrar_dieta();
    gravar_dieta(dts);
    free(dts);
}