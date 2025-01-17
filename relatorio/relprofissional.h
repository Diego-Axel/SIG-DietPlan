// Assinatura das funções

#ifndef RELPROFISSIONAL
#define RELPROFISSIONAL
#include "../profissional/profissional.h"

void modulo_relprofissional(void);
char menu_relprofissional(void);
void relprofissional_geral(void);
void relprofissional_ativos(void);
void relprofissional_inativos(void);
ListaProf* lista_ordenada_prof(void);
void imprime_lista_prof(ListaProf*);
void limpa_lista_prof(ListaProf*);
void relprof_ordenado(void);
#endif

