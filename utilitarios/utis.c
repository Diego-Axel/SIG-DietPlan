// Bibliotecas

#include <stdio.h> 
#include <stdlib.h>
#include <wchar.h>
#include <locale.h>
#include <ctype.h>
#include "utis.h"

// Funções

void limparBuffer(void) { // Feita pelo ChatGPT
    int c;
    while ((c = getchar()) != '\n' && c != EOF); // Lê e descarta os caracteres até encontrar um newline ou EOF
}