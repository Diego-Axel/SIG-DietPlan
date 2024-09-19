///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///               Projeto Sistema de Planejamento de Dietas                 ///
///              Developed by Diêgo Axel and Luís Henrique                  ///
///////////////////////////////////////////////////////////////////////////////


// Bibliotecas
#include <stdio.h> 
#include <wchar.h>
#include <locale.h>


// Assinatura das funções
void menu_principal(void);
void menu_cliente(void);
void menu_dieta(void);

// Função principal
int main(void) {
  setlocale(LC_CTYPE , "");
  menu_principal();
  menu_cliente();
  menu_dieta();
  return 0;
}


void menu_principal(void) { // Feito por Luís e Diêgo
  printf("\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///             Universidade Federal do Rio Grande do Norte                ///\n");
  wprintf(L"\t///                 Centro de Ensino Superior do Seridó                    ///\n");
  wprintf(L"\t///               Departamento de Computação e Tecnologia                  ///\n");
  wprintf(L"\t///                    Sistemas de Informação - BSI                        ///\n");
  wprintf(L"\t///                  Disciplina DCT1106 -- Programação                     ///\n");
  printf("\t///               Projeto Sistema de Planejamento De Dietas                ///\n");
  wprintf(L"\t///              Developed by Diêgo Axel and Luís Henrique                 ///\n");
  printf("\t///                    Data do projeto : 18/09/2024                        ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///            SIG Diet-Plan (Sistema de planejamento de dietas)           ///\n");
  printf("\t///                                                                        ///\n");
  wprintf(L"\t///                         [1] Módulo Cliente                             ///\n");
  wprintf(L"\t///                         [2] Módulo Dietas                              ///\n"); 
  wprintf(L"\t///                         [3] Módulo Agendamento                         ///\n"); 
  wprintf(L"\t///                         [4] Módulo Relatório                           ///\n"); 
  wprintf(L"\t///                         [5] Módulo Informações                         ///\n"); 
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
} 


void menu_cliente(void) { // Feito por Diêgo
  printf("\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  wprintf(L"\t///                            Módulo Cliente                              ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                         [1] Cadastrar Cliente                          ///\n");
  printf("\t///                         [2] Exibir Cliente                             ///\n"); 
  printf("\t///                         [3] Alterar Dados do Cliente                   ///\n"); 
  printf("\t///                         [4] Excluir Cliente                            ///\n");  
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
}


void menu_dieta(void) { // Feito por Luís
  printf("\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  wprintf(L"\t///                             Módulo Dieta                               ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  wprintf(L"\t///                         [1] Avaliação                                  ///\n");
  wprintf(L"\t///                         [2] Dieta para hipertrófia                     ///\n"); 
  printf("\t///                         [3] Dieta para perda de peso                   ///\n"); 
  wprintf(L"\t///                         [4] Reavaliação                                ///\n");  
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");  
}