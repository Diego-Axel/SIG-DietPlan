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
void menu_servico(void);

// Função principal
int main(void) {
    setlocale(LC_CTYPE , "" );
    menu_principal();
    menu_servico();
    return 0;
}


void menu_principal(void) {
    printf("\n");
    printf("//////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                        ///\n");
    printf("///             Universidade Federal do Rio Grande do Norte                ///\n");
    wprintf(L"///                 Centro de Ensino Superior do Seridó                    ///\n");
    wprintf(L"///               Departamento de Computação e Tecnologia                  ///\n");
    wprintf(L"///                    Sistemas de Informação - BSI                        ///\n");
    wprintf(L"///                  Disciplina DCT1106 -- Programação                     ///\n");
    printf("///               Projeto Sistema de Planejamento De Dietas                ///\n");
    wprintf(L"///              Developed by Diêgo Axel and Luís Henrique                 ///\n");
    printf("///                    Data do projeto : 18/09/2024                        ///\n");
    printf("///                                                                        ///\n");
    printf("//////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                        ///\n");
    printf("///            SIG Diet-Plan (Sistema de planejamento de dietas)           ///\n");
    printf("///                                                                        ///\n");
    wprintf(L"///                         [1] Módulo Cliente                             ///\n");
    wprintf(L"///                         [2] Módulo Dietas                              ///\n"); 
    wprintf(L"///                         [3] Módulo Agendamento                         ///\n"); 
    wprintf(L"///                         [4] Módulo Relatório                           ///\n"); 
    wprintf(L"///                         [5] Módulo Informações                         ///\n"); 
    printf("///                                                                        ///\n");
    printf("//////////////////////////////////////////////////////////////////////////////\n");
} 


void menu_servico(void) {
  printf("\n");
  printf("//////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                        ///\n");
  wprintf(L"///                            Módulo Serviço                              ///\n");
  printf("///                                                                        ///\n");
  printf("//////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                        ///\n");
  wprintf(L"///                         [1] Avaliação                                  ///\n");
  wprintf(L"///                         [2] Dieta para hipertrófia                     ///\n"); 
  printf("///                         [3] Dieta para perda de peso                   ///\n"); 
  wprintf(L"///                         [4] Reavaliação                                ///\n");  
  printf("///                                                                        ///\n");
  printf("//////////////////////////////////////////////////////////////////////////////\n");  
}