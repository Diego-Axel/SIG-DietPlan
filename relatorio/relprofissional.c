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
            case 1: relprofissional_geral();
                    break;
            case 2: relprofissional_ativos();
                    break;
            case 3: relprofissional_inativos();
                    break;
        }
    } while(opcao != '0');
}


