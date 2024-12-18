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

void cadastrar_cliente(void);
void pesquisar_cliente(void);
void atualizar_cliente(void);
void excluir_cliente(void);
Cliente* tela_cadastrar_cliente(void);
char* tela_pesquisar_cliente(void);
char* tela_recadastrar_cliente(void);
char* tela_excluir_cliente(void);
char menu_cliente(void);
Cliente* buscar_cliente(char*);
void exibir_cliente(Cliente*);
void gravar_cliente(Cliente*);
void regravar_cliente(Cliente*);
Cliente* recadastrar_cliente(void);
#endif