// Assinatura das funções

#ifndef PROFISSIONAL
#define PROFISSIONAL

typedef struct profissional Profissional;

struct profissional {
    char nome[40];
    char email[30];
    char telefone[16];
    char cpf[13];
    char crn[12];
    char status;
};

typedef struct lista_prof ListaProf;

struct lista_prof {
    Profissional* prf;
    ListaProf* prox;
};

 
void modulo_profissional(void);
void cadastrar_profissional(void);
void pesquisar_profissional(void);
void atualizar_profissional(void);
void excluir_profissional(void);
Profissional* tela_cadastrar_prof(void);
char* tela_pesquisar_prof(void);
char* tela_recadastrar_prof(void);
char* tela_excluir_prof(void);
char menu_profissional(void);
Profissional* buscar_prof(char*);
void exibir_prof(Profissional*);
void gravar_prof(Profissional*);
void regravar_prof(Profissional*);
Profissional* recadastrar_prof(void);
#endif