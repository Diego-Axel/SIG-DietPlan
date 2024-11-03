// Bibliotecas

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include "validadores.h"

// Funções 

// Função para verificar se um caractere é um digito
// Adaptado do Projeto Língua Solta

int eDigito(char c) {
    if (c <= '9' && c >= '0') {        // retorna 1 caso o caractere recebido esteja entre 0 e 9 
        return 1;
    } else {
        return 0;
    }
}
 

// Função para verificar se um caractere é uma letra
// Adaptado do Projeto Língua Solta

int eLetra(char c) {
  if (c >= 'A' && c <= 'Z') {          // retorna 1 caso o caractere recebido seja uma letra entre ('A' e 'Z' ou 'a' e 'z')
    return 1;
  } else if (c >= 'a' && c <= 'z') {
    return 1;
  } else {
    return 0;
  }
}

// Função para validar nome
// Adaptado do Projeto Língua Solta

int validaNome(char *nome) {                 // o "*" ao lado do "char" indica que "nome" é um ponteiro para um tipo char
  for (int i = 0; nome[i] != '\0'; i++) {
    if (!eLetra(nome[i])) {                  // retorna 0 caso a função "eLetra" retornar 0 também 
      return 0;
    }
  }
  return 1;
}


// Função para validar e-mail
// créditos: ChatGPT

int validaEmail(const char *email) {
    
    if (email == NULL || strlen(email) < 3) {          // Verifica se email é NULL ou muito curto
        return 0;
    }

    const char *arroba = strchr(email, '@');                         // Verifica a presença de '@' e a sua posição
    if (arroba == NULL || arroba == email || arroba - email > 64) {
        return 0;                                                   // Deve ter '@' e pelo menos um caractere antes
    }

    const char *ponto = strchr(arroba + 1, '.');                        // Verifica a presença de '.' depois de '@'
    if (ponto == NULL || ponto - arroba < 2 || ponto - email > 254) {
        return 0;                                                       // Deve ter '.' após '@' e domínio razoável
    }

    if (*(ponto + 1) == '\0') {                    // Verifica se não termina com '.' e se os caracteres são válidos
        return 0;
    }

    for (const char *p = email; p < arroba; ++p) {                      // Verifica se todos os caracteres antes do '@' são válidos
        if (!isalnum(*p) && *p != '.' && *p != '-' && *p != '_') {
            return 0;
        }
    }

    for (const char *p = arroba + 1; *p; ++p) {              // Verifica se todos os caracteres depois do '@' são válidos
        if (!isalnum(*p) && *p != '.' && *p != '-') {
            return 0;
        }
    }

    return 1; // Email válido
}

/*                                                          exemplo de como implementar(segundo o gpt)
int main() {
    const char *email1 = "exemplo@dominio.com";
    const char *email2 = "email_invalido.com";
    
    printf("Email %s é %s\n", email1, validaEmail(email1) ? "válido" : "inválido");
    printf("Email %s é %s\n", email2, validaEmail(email2) ? "válido" : "inválido");
    
    return 0;
}
*/

// Função para validar telefone
// créditos: ChatGPT

int validaFone(const char *telefone) {
    
    if (telefone == NULL || strlen(telefone) != 14) {          // Verifica se o telefone possui exatamente 14 caracteres
        return 0;                                              // tem que ser exatamente no formato (xx) 9xxxx-xxxx
    }

    // Verifica o formato específico (XX) 9XXXX-XXXX
    if (telefone[0] != '(' || !isdigit(telefone[1]) || !isdigit(telefone[2]) || telefone[3] != ')' ||
        telefone[4] != ' ' || telefone[5] != '9' || !isdigit(telefone[6]) || !isdigit(telefone[7]) ||
        !isdigit(telefone[8]) || !isdigit(telefone[9]) || telefone[10] != '-' ||
        !isdigit(telefone[11]) || !isdigit(telefone[12]) || !isdigit(telefone[13])) {
        return 0;
    }

    return 1; // Telefone válido
}

/*
int main() {                                          exemplo de como implementar(segundo o gpt)
    const char *telefone1 = "(11) 91234-5678";
    const char *telefone2 = "(21) 91234-567";

    printf("Telefone %s é %s\n", telefone1, validaFone(telefone1) ? "válido" : "inválido");
    printf("Telefone %s é %s\n", telefone2, validaFone(telefone2) ? "válido" : "inválido");

    return 0;
}
*/


// Função para validar CRN

int validaCRN(const char *crn) {

  if (crn == NULL || strlen(crn) != 11) {        //verifica o tamanho do formato do CRN (xxxxx/CRN-x)
    return 0;
  }
  
  if (!isdigit(crn[0]) || !isdigit(crn[1]) || !isdigit(crn[2]) || !isdigit(crn[3]) || !isdigit(crn[4]) || crn[5] != '/' ||
      crn[6] != 'C' || crn[7] != 'R' || crn[8] != 'N' || crn[9] != '-' || !isdigit(crn[10])) {
        return 0;
      }
  
  return 1;
}


// Função para validar CPF
// créditos: ChatGPT

int digitos_iguais(char * cpf) {
    for (int i = 1; i < 11; i++) {
        if (cpf[i] != cpf[0]) {
            return 0;
        }
    }
    return 1;
}

int valida_CPF(char * cpf) {

    if (strlen(cpf) != 11) {
        return 0;
    }
    
    for (int i = 0; i < 11; i++) {
        if (!isdigit(cpf[i])) {
            return 0;
        }
    }
    if (todosDigitosIguais(cpf)) {
        return 0;
    }

    int soma = 0;
    for (int i = 0; i < 9; i++) {
        soma += (cpf[i] - '0') * (10 - i);
    }
    int primeiroDigitoVerificador = (soma * 10) % 11;
    if (primeiroDigitoVerificador == 10) {
        primeiroDigitoVerificador = 0;
    }
    if (primeiroDigitoVerificador != (cpf[9] - '0')) {
        return 0;
    }

    soma = 0;
    for (int i = 0; i < 10; i++) {
        soma += (cpf[i] - '0') * (11 - i);
    }
    int segundoDigitoVerificador = (soma * 10) % 11;
    if (segundoDigitoVerificador == 10) {
        segundoDigitoVerificador = 0;
    }
    if (segundoDigitoVerificador != (cpf[10] - '0')) {
        return 0; 
    }

    return 1;
}