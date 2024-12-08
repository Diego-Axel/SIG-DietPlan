// Assinatura das funções

#ifndef CLIENTES
#define CLIENTES

typedef struct cliente Cliente;

struct cliente {
    char nome[40];
    char email[30];
    char telefone[16];
    char cpf[13];
    char status;
};

char menu_cliente(void);
Cliente* cadastrar_cliente(void);
void grava_cliente(Cliente*);
void exibir_cliente(void);
void alterar_cliente(void);
void excluir_cliente(void);

#endif