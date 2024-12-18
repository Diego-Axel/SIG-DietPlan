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
Profissional* tela_cadastrar_prof(void);
char* tela_pesquisar_prof(void);
char* tela_recadastrar_prof(void);
char* tela_excluir_prof(void);
char menu_profissional(void);
Profissional* buscar_prof(char*);
void exibir_prof(Profissional*);
void grava_prof(Profissional*);
void regravar_prof(Profissional*);
Profissional* recadastrar_prof(void);
#endif