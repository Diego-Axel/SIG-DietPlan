// Assinatura das funções

#ifndef DIETAS
#define DIETAS

typedef struct dietas Dietas;

struct dietas {
    char id[8];
    char cpf_cliente[13];
    char crn_profissional[12];
    char tipo[25];
    int cal;
    char status;
};

typedef struct lista_diet ListaDiet;

struct lista_diet{
    Dietas* diet;
    ListaDiet* prox;
};

void modulo_dieta(void);
void cadastrar_dieta(void);
void pesquisar_dieta(void);
void atualizar_dieta(void);
void excluir_dieta(void);
Dietas* tela_cadastrar_dieta(void);
char* tela_pesquisar_dieta(void);
char* tela_recadastrar_dieta(void);
char* tela_excluir_dieta(void);
char menu_dietas(void);
Dietas* buscar_dieta(char*);
void exibir_dieta(Dietas*);
void gravar_dieta(Dietas*);
void regravar_dieta(Dietas*);
Dietas* recadastrar_dieta(void);
int string_to_int(char* str);

#endif