// Bibliotecas

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Funções 

// Função para verificar se um caractere é um digito

int eDigito(char c) {
    if (c <= '9' && c >= '0') {        // retorna 1 caso o caractere inserido esteja entre 0 e 9 
        return 1;
    } else {
        return 0;
    }
}

