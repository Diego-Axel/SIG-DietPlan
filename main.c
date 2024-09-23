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


// Assinatura das funções
void menu_principal(void);
void menu_cliente(void);
void menu_dieta(void);
void menu_agendamento(void);
void menu_profissional(void);
void menu_relatorio(void);
void menu_info(void);

// Função principal
int main(void) {
  menu_principal();
  menu_cliente();
  menu_dieta();
  menu_agendamento();
  menu_profissional();
  menu_relatorio();
  menu_info();
  return 0;
}


void menu_principal(void) { // Feito por Luís e Diêgo 
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///            SIG Diet-Plan (Sistema de Planejamento de Dietas)           ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                         [1] Módulo Cliente                             ///\n");
  printf("\t///                         [2] Módulo Dietas                              ///\n"); 
  printf("\t///                         [3] Módulo Agendamento                         ///\n");
  printf("\t///                         [4] Módulo Profissional                        ///\n"); 
  printf("\t///                         [5] Módulo Relatório                           ///\n"); 
  printf("\t///                         [6] Módulo Informações                         ///\n"); 
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\n"); 
  printf("\tTecle <ENTER> para prosseguir...\n"); // Sem interação no momento
  printf("\n"); 
} 


void menu_cliente(void) { // Feito por Diêgo
  printf("\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                            Módulo Cliente                              ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                         [1] Cadastrar cliente                          ///\n");
  printf("\t///                         [2] Exibir cliente                             ///\n"); 
  printf("\t///                         [3] Alterar dados do cliente                   ///\n"); 
  printf("\t///                         [4] Excluir cliente                            ///\n");  
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\n"); 
  printf("\tTecle <ENTER> para prosseguir...\n"); // Sem interação no momento
  printf("\n");
}


void menu_dieta(void) { // Feito por Luís
  printf("\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                             Módulo Dieta                               ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                         [1] Avaliação                                  ///\n");
  printf("\t///                         [2] Dieta para hipertrófia                     ///\n"); 
  printf("\t///                         [3] Dieta para perda de peso                   ///\n"); 
  printf("\t///                         [4] Reavaliação                                ///\n");
  printf("\t///                         [5] Adicionar nova dieta                       ///\n");  
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\n"); 
  printf("\tTecle <ENTER> para prosseguir...\n"); // Sem interação no momento
  printf("\n");
}


void menu_agendamento(void) { // Feito por Luís
  printf("\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                         Módulo Agendamento                             ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                         [1] Agendar consulta                           ///\n");
  printf("\t///                         [2] Alterar consulta                           ///\n"); 
  printf("\t///                         [3] Exibir consulta                            ///\n"); 
  printf("\t///                         [4] Excluir consulta                           ///\n");  
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\n"); 
  printf("\tTecle <ENTER> para prosseguir...\n"); // Sem interação no momento
  printf("\n");
}


void menu_profissional(void) { // Feito por Luís
  printf("\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                            Módulo Profissional                         ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                         [1] Cadastrar profissional                     ///\n");
  printf("\t///                         [2] Exibir profissional                        ///\n"); 
  printf("\t///                         [3] Alterar dados do profissional              ///\n"); 
  printf("\t///                         [4] Excluir profissional                       ///\n");  
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\n"); 
  printf("\tTecle <ENTER> para prosseguir...\n"); // Sem interação no momento
  printf("\n");
}


void menu_relatorio(void) { // Feito por Diêgo
  printf("\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                            Módulo Relatório                            ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                         [1] Clientes cadastrados                       ///\n");
  printf("\t///                         [2] Histórico do cliente                       ///\n"); 
  printf("\t///                         [3] Profisionais cadastrados                   ///\n"); 
  printf("\t///                         [4] Histórico do profissional                  ///\n");
  printf("\t///                         [5] Financeiro                                 ///\n");  
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\n"); 
  printf("\tTecle <ENTER> para prosseguir...\n"); // Sem interação no momento
  printf("\n");
}


void menu_info(void) { // Feito por Luís
  printf("\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                            Módulo informações                          ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///             Universidade Federal do Rio Grande do Norte                ///\n");
  printf("\t///                 Centro de Ensino Superior do Seridó                    ///\n");
  printf("\t///               Departamento de Computação e Tecnologia                  ///\n");
  printf("\t///                    Sistemas de Informação - BSI                        ///\n");
  printf("\t///                  Disciplina DCT1106 -- Programação                     ///\n");
  printf("\t///               Projeto Sistema de Planejamento De Dietas                ///\n");
  printf("\t///                    Data do projeto : 18/09/2024                        ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                  Autores: Luís Henrique/Diêgo Axel                     ///\n");
  printf("\t///                  G-mail: luis27marciano/diegoaxelbsr@gmail.com         ///\n"); 
  printf("\t///                  GitHub: Luis27h/Diego-Axel                            ///\n");
  printf("\t///                  Licença: MIT License                                  ///\n"); 
  printf("\t///                  Orientador: Flavius Gorgônio                          ///\n");
  printf("\t///                  Instituto: UFRN - Ceres/Caicó - BSI                   ///\n");  
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\n"); 
  printf("\tTecle <ENTER> para prosseguir...\n"); // Sem interação no momento
  printf("\n");
}