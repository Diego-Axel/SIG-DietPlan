// Bibliotecas

#include <stdio.h> 
#include <stdlib.h>
#include "interfaces.h"
#include "../utilitarios/utis.h" // Assinatura das utilidades

// Funções

char menu_principal(void) {

  char op_principal;

  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///             SIG Diet-Plan Sistema de Planejamento de Dietas            ///\n");
  printf("\t///                              Bem vindo(a)                              ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                         [1] Módulo Cliente                             ///\n");
  printf("\t///                         [2] Módulo Dietas                              ///\n"); 
  printf("\t///                         [3] Módulo Agendamento                         ///\n");
  printf("\t///                         [4] Módulo Profissional                        ///\n"); 
  printf("\t///                         [5] Módulo Relatório                           ///\n"); 
  printf("\t///                         [6] Módulo Informações                         ///\n");
  printf("\t///                         [7] Módulo Desenvolvedores                     ///\n");
  printf("\t///                         [0] Encerrar Programa                          ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\n"); 
  printf("\t//// Escolha uma opção: ");
  scanf("%c", &op_principal);
  limparBuffer();
  return op_principal;
} 


void menu_info(void) {
  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                            Módulo informações                          ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///               Universidade Federal do Rio Grande do Norte              ///\n");
  printf("\t///                   Centro de Ensino Superior do Seridó                  ///\n");
  printf("\t///                 Departamento de Computação e Tecnologia                ///\n");
  printf("\t///                      Sistemas de Informação - BSI                      ///\n");
  printf("\t///                    Disciplina DCT1106 -- Programação                   ///\n");
  printf("\t///                 Projeto Sistema de Planejamento De Dietas              ///\n");
  printf("\t///                Developed by Diêgo Axel, Luís Henrique                  ///\n");
  printf("\t///                         and Kaio Márcio                                ///\n");
  printf("\t///                      Data do projeto : 18/09/2024                      ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                             Sobre o programa:                          ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t/// SIG-DietPlan, é um software próprio para você que é um profissional na ///\n"); 
  printf("\t/// área da saúde, especialmente nutricionista, que quer ter um controle   ///\n");
  printf("\t/// preciso e bastante eficiente em sua clínica. SIG-DietPlan permite você ///\n"); 
  printf("\t/// além de ter todo o controle de gestão sobre o seu negócio, faz com que ///\n");
  printf("\t/// você(profissional) possa cadastrar e acompanhar uma dieta completa dos ///\n");  
  printf("\t/// seus clientes. SIG-DietPlan, a solução para os seus problemas.         ///\n"); 
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///         Acesse esse Link para conferir o repositório no GitHub:        ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t///              https://github.com/Diego-Axel/SIG-DietPlan.git            ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                              MIT Licence                               ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\n"); 
  printf("\tTecle <ENTER> para retornar...");
  getchar();
}


void menu_dev(void) {
  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///                          Módulo desenvolvedores                        ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\t///                                                                        ///\n");
  printf("\t///    +-------------------+          E-mail: luis27marciano @gmail.com    ///\n");
  printf("\t///    |   Luís Henrique   |          Celular: (84) 99627-4880             ///\n");
  printf("\t///    +-------------------+          Github: Luis27h                      ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t///------------------------------------------------------------------------///\n");
  printf("\t///                                                                        ///\n");
  printf("\t///    +----------------+             E-mail: diegoaxelbsr@gmail.com       ///\n");
  printf("\t///    |   Diêgo Axel   |             Celular: (84) 99977-4459             ///\n");
  printf("\t///    +----------------+             Github: Diego-Axel                   ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t///------------------------------------------------------------------------///\n");
  printf("\t///                                                                        ///\n");
  printf("\t///    +-----------------+            E-mail: kaiomacl.20@gmail.com        ///\n");
  printf("\t///    |   Kaio Márcio   |            Celular: (83) 98716-3046             ///\n");
  printf("\t///    +-----------------+            Github: Kaiom20                      ///\n");
  printf("\t///                                                                        ///\n");
  printf("\t//////////////////////////////////////////////////////////////////////////////\n");
  printf("\n"); 
  printf("\tTecle <ENTER> para retornar...");
  getchar();
}