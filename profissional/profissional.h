// Assinatura das funções

#ifndef PROFISSIONAL
#define PROFISSIONAL

typedef struct profissional Profissional;

struct profissional {
    char nome[40];
    char email[30];
    char telefone[16];
    char cpf[13];
    char crn[10];
    char status;
};

char menu_profissional(void);
Profissional* cadastrar_prof(void);
void grava_prof(Profissional*);
void exibir_prof(void);
void recadastrar_prof(void);
void excluir_prof(void);

#endif