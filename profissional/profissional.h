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

void cadastrar_prof(void);
void pesquisar_prof(void);
void atualiza_prof(void);
void excluir_prof(void);
char menu_profissional(void);
Profissional* tela_cadastrar_prof(void);
void grava_prof(Profissional*);
Profissional* buscar_prof(char*);
char* tela_pesquisar_prof(void);
void exibir_prof(Profissional*);
char* tela_recadastrar_prof(void);
void regravar_prof(Profissional*);

#endif