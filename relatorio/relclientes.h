// Assinatura das funções

#ifndef RELCLIENTES
#define RELCLIENTES
#include "../clientes/clientes.h"

void modulo_relclientes(void);
char menu_relclientes(void);
void relclientes_geral(void);
void relclientes_ativos(void);
void relclientes_inativos(void);
Lista* lista_ordenada(void);
void imprime_lista(Lista*);
void limpa_lista(Lista*);
void relclientes_ordenado(void);

#endif

