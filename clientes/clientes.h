// Assinatura das funções

#ifndef CLIENTES
#define CLIENTES

typedef struct clientes Clientes;

struct clientes {
    char nome[40];
    char email[30];
    char telefone[16];
    char cpf[13];
};

char menu_cliente(void);
void cadastrar_cliente(void);
void exibir_cliente(void);
void alterar_cliente(void);
void excluir_cliente(void);

#endif