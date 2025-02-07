// Assinatura das funções

#ifndef RELDIETAS
#define RELDIETAS
#include "../dietas/dietas.h"

void modulo_reldietas(void);
char menu_reldietas(void);
void reldietas_geral(void);
void reldietas_ativas(void);
void reldietas_inativas(void);

char* get_cliente (char* cpf);
char* get_prof (char* crn);

ListaDiet* lista_ordenada_diet(void);
void imprime_lista_diet(ListaDiet* l);
void limpa_lista_diet(ListaDiet* l);
void reldietas_ordenado(void);

#endif