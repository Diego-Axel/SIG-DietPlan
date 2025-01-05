// Assinatura das funções

#ifndef RELDIETAS
#define RELDIETAS

void modulo_reldietas(void);
char menu_reldietas(void);
void reldietas_geral(void);
void reldietas_ativas(void);
void reldietas_inativas(void);

char* get_cliente (char* cpf);
char* get_prof (char* crn);

#endif