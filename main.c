////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte              ///
///                 Centro de Ensino Superior do Seridó                  ///
///               Departamento de Computação e Tecnologia                ///
///                  Disciplina DCT1106 -- Programação                   ///
///               Projeto Sistema de Planejamento de Dietas              ///
///              Developed by Diêgo Axel and Luís Henrique               ///
////////////////////////////////////////////////////////////////////////////


// Bibliotecas
#include <stdio.h> 
#include <stdlib.h>
#include <wchar.h>
#include <locale.h>
#include <ctype.h>


// Assinatura das funções
void menu_principal(void);
void menu_cliente(void);
void menu_dieta(void);
void menu_agendamento(void);
void menu_profissional(void);
void menu_relatorio(void);
void menu_info(void);
void menu_dev(void);


// Função principal
int main(void) {
  setlocale(LC_CTYPE , "");
  menu_principal();
  menu_cliente();
  menu_dieta();
  menu_agendamento();
  menu_profissional();
  menu_relatorio();
  menu_info();
  menu_dev();
  return 0;
}


void menu_principal(void) { // Feito por Luís e Diêgo 
  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///             SIG Diet-Plan Sistema de Planejamento de Dietas            ///\n");
  wprintf(L"\t///                              Bem vindo(a)                              ///\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                         [1] Módulo Cliente                             ///\n");
  wprintf(L"\t///                         [2] Módulo Dietas                              ///\n"); 
  wprintf(L"\t///                         [3] Módulo Agendamento                         ///\n");
  wprintf(L"\t///                         [4] Módulo Profissional                        ///\n"); 
  wprintf(L"\t///                         [5] Módulo Relatório                           ///\n"); 
  wprintf(L"\t///                         [6] Módulo Informações                         ///\n");
  wprintf(L"\t///                         [7] Módulo Desenvolvedores                     ///\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\n"); 
  wprintf(L"\tTecle <ENTER> para prosseguir..."); // Sem interação no momento
  getchar();
} 


void menu_cliente(void) { // Feito por Diêgo
  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                              Módulo Cliente                            ///\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                         [1] Cadastrar cliente                          ///\n");
  wprintf(L"\t///                         [2] Exibir cliente                             ///\n"); 
  wprintf(L"\t///                         [3] Alterar dados do cliente                   ///\n"); 
  wprintf(L"\t///                         [4] Excluir cliente                            ///\n");  
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\n"); 
  wprintf(L"\tTecle <ENTER> para prosseguir..."); // Sem interação no momento
  getchar();
}


void menu_dieta(void) { // Feito por Luís
  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                               Módulo Dieta                             ///\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                         [1] Avaliação                                  ///\n");
  wprintf(L"\t///                         [2] Dieta para hipertrófia                     ///\n"); 
  wprintf(L"\t///                         [3] Dieta para perda de peso                   ///\n"); 
  wprintf(L"\t///                         [4] Reavaliação                                ///\n");
  wprintf(L"\t///                         [5] Adicionar nova dieta                       ///\n");  
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\n"); 
  wprintf(L"\tTecle <ENTER> para prosseguir..."); // Sem interação no momento
  getchar();
}


void menu_agendamento(void) { // Feito por Luís
  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                            Módulo Agendamento                          ///\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                         [1] Agendar consulta                           ///\n");
  wprintf(L"\t///                         [2] Alterar consulta                           ///\n"); 
  wprintf(L"\t///                         [3] Exibir consulta                            ///\n"); 
  wprintf(L"\t///                         [4] Excluir consulta                           ///\n");  
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\n"); 
  wprintf(L"\tTecle <ENTER> para prosseguir..."); // Sem interação no momento
  getchar();
}


void menu_profissional(void) { // Feito por Luís
  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                             Módulo Profissional                        ///\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                         [1] Cadastrar profissional                     ///\n");
  wprintf(L"\t///                         [2] Exibir profissional                        ///\n"); 
  wprintf(L"\t///                         [3] Alterar dados do profissional              ///\n"); 
  wprintf(L"\t///                         [4] Excluir profissional                       ///\n");  
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\n"); 
  wprintf(L"\tTecle <ENTER> para prosseguir..."); // Sem interação no momento
  getchar();
}


void menu_relatorio(void) { // Feito por Diêgo
  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                             Módulo Relatório                           ///\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                         [1] Clientes cadastrados                       ///\n");
  wprintf(L"\t///                         [2] Histórico do cliente                       ///\n"); 
  wprintf(L"\t///                         [3] Profisionais cadastrados                   ///\n"); 
  wprintf(L"\t///                         [4] Histórico do profissional                  ///\n");
  wprintf(L"\t///                         [5] Financeiro                                 ///\n");  
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\n"); 
  wprintf(L"\tTecle <ENTER> para prosseguir..."); // Sem interação no momento
  getchar();
}


void menu_info(void) { // Feito por Luís
  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                            Módulo informações                          ///\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///               Universidade Federal do Rio Grande do Norte              ///\n");
  wprintf(L"\t///                   Centro de Ensino Superior do Seridó                  ///\n");
  wprintf(L"\t///                 Departamento de Computação e Tecnologia                ///\n");
  wprintf(L"\t///                      Sistemas de Informação - BSI                      ///\n");
  wprintf(L"\t///                    Disciplina DCT1106 -- Programação                   ///\n");
  wprintf(L"\t///                 Projeto Sistema de Planejamento De Dietas              ///\n");
  wprintf(L"\t///                Developed by Diêgo Axel and Luís Henrique               ///\n");
  wprintf(L"\t///                      Data do projeto : 18/09/2024                      ///\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                             Sobre o Programa:                          ///\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t/// SIG-DietPlan, é um software próprio para você que é um profissional na ///\n"); 
  wprintf(L"\t/// área da saúde, especialmente nutricionista, que quer ter um controle   ///\n");
  wprintf(L"\t/// preciso e bastante eficiente em sua clínica. SIG-DietPlan permite você ///\n"); 
  wprintf(L"\t/// além de ter todo o controle de gestão sobre o seu negócio, faz com que ///\n");
  wprintf(L"\t/// você(profissional) possa cadastrar e acompanhar uma dieta completa dos ///\n");  
  wprintf(L"\t/// seus clientes. SIG-DietPlan, a solução para os seus problemas.         ///\n"); 
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///         Acesse esse Link para conferir o repositório no GitHub:        ///\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///              https://github.com/Diego-Axel/SIG-DietPlan.git            ///\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                              MIT Licence                               ///\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\n"); 
  wprintf(L"\tTecle <ENTER> para prosseguir..."); // Sem interação no momento
  getchar();
}


void menu_dev(void) { // Feito por Diêgo
  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                          Módulo Desenvolvedores                        ///\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                             Desenvolvedores:                           ///\n");
  wprintf(L"\t///      Luís Henrique                                      Diêgo Axel     ///\n");
  wprintf(L"\t///------------------------------------------------------------------------///\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                                 GitHub:                                ///\n");
  wprintf(L"\t///         Luis27h                                         Diego-Axel     ///\n");
  wprintf(L"\t///------------------------------------------------------------------------///\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                            Entre Em Contato:                           ///\n");
  wprintf(L"\t///  luis27marciano @gmail.com                    diegoaxelbsr@gmail.com   ///\n");
  wprintf(L"\t///       (84) 99627-4880                             (84) 99977-4459      ///\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
}

// Falta terminar esse moódulo