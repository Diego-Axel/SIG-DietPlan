// Bibliotecas

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Funções 

// Função para verificar se um caractere é um digito
// Adaptado do Projeto Lingua Solta

int eDigito(char c) {
    if (c <= '9' && c >= '0') {        // retorna 1 caso o caractere recebido esteja entre 0 e 9 
        return 1;
    } else {
        return 0;
    }
}
 

// Função para verificar se um caractere é uma letra
// Adaptado do Projeto Lingua Solta

int eLetra(char c) {
  if (c >= 'A' && c <= 'Z') {          // retorna 1 caso o caractere recebido seja uma letra entre ('A' e 'Z' ou 'a' e 'z')
    return 1;
  } else if (c >= 'a' && c <= 'z') {
    return 1;
  } else {
    return 0;
  }
}