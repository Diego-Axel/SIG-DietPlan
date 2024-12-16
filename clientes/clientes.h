// Assinatura das funções

#ifndef CLIENTES
#define CLIENTES

typedef struct cliente Cliente;

struct cliente {
    char nome[40];
    char email[30];
    char telefone[16];
    char cpf[14];
    char status;
};

char menu_cliente(void);
Cliente* cadastrar_cliente(void);
void grava_cliente(Cliente*);
void pesquisar_cliente(void);
Cliente* buscar_cliente(char*);
char* tela_pesquisar_cliente(void);
void exibir_cliente(Cliente*);
void alterar_cliente(void);
void excluir_cliente(void);

#endif