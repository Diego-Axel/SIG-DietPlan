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


// Assinatura das funções do Menu Principal (interfaces)
#include "interfacePrincipal/interfaces.h"

// Assinatura do cliente
#include "clientes/clientes.h"

// Assinatura dieta
#include "dietas/dietas.h"

// Assinatura agendamento
#include "agendamento/agendamento.h"

// Assinaturas do profissional
char menu_profissional(void);
void cadastrar_prof(void);
void exibir_prof(void);
void recadastrar_prof(void);
void excluir_prof(void);

// Assinatura relatório
char menu_relatorio(void);
void relatorio_clientes(void);
void relatorio_profissional(void);


// Programa Principal
int main(void) {
  setlocale(LC_CTYPE , "");

  // Variáveis para as opções
  char op_principal;
  char op_cliente;
  char op_dietas;
  char op_agendar;
  char op_profissional;
  char op_relatorio;


  do { 
    op_principal = menu_principal();
    if (op_principal == '1') {
      do {
        op_cliente = menu_cliente();
        if (op_cliente == '1') {
          cadastrar_cliente();
        }
        else if (op_cliente == '2') {
          exibir_cliente();
        }
        else if (op_cliente == '3') {
          alterar_cliente();
        }
        else if (op_cliente == '4') {
          excluir_cliente();
        }  
      } while (op_cliente != '0');    
    }
    else if (op_principal == '2') {
      do {
        op_dietas = menu_dieta();
        if (op_dietas == '1') {
          avaliacao();
        }
        else if (op_dietas == '2') {
          dieta_para_hipertrofia();
        }
        else if (op_dietas == '3') {
          dieta_para_perda_de_peso();
        }
        else if (op_dietas == '4') {
          reavaliacao();
        }
        else if (op_dietas == '5') {
          nova_dieta();
        }
      } while (op_dietas != '0'); 
    }
    else if (op_principal == '3') {
      do {
        op_agendar = menu_agendamento();
        if (op_agendar == '1') {
          agendar();
        }
        else if (op_agendar == '2')  {
          exibir_agendamento();
        }
        else if (op_agendar == '3') {
          excluir_agendamento();
        }
      } while (op_agendar != '0');
    }
    else if (op_principal == '4') {
      do {
        op_profissional = menu_profissional();
        if (op_profissional == '1') {
          cadastrar_prof();
        }
        else if (op_profissional == '2') {
          exibir_prof();
        }
        else if (op_profissional == '3') {
          recadastrar_prof();
        }
        else if (op_profissional == '4') {
          excluir_prof();
        }
      } while (op_profissional != '0');
    }
    else if (op_principal == '5') {
      do {
        op_relatorio = menu_relatorio();
        if (op_relatorio == '1') {
          relatorio_clientes();
        }
        else if (op_relatorio == '2') {
          relatorio_profissional();
        }
      } while (op_relatorio != '0');   
    }
    else if (op_principal == '6') {
      menu_info();
    }
    else if (op_principal == '7') {
      menu_dev();
    }
  } while (op_principal != '0');
  return 0;
}


char menu_profissional(void) {
  char op_profissional;

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
  wprintf(L"\t///                         [0] Retornar ao Menu Principal                 ///\n");  
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\n"); 
  wprintf(L"\tEscolha uma opção: ");
  scanf(" %c", &op_profissional);
  getchar();
  
  return op_profissional;
}


void cadastrar_prof(void) {

  // Variavéis
  char nome[40];
  char email[30];
  char telefone[13];
  char cpf[13];
  char crn[10];

  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                            Cadastar profissional                       ///\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\n");
  wprintf(L"\t//// Digite o nome do profissional: ");
  scanf("%[A-Z a-z]", nome);
  getchar();
  wprintf(L"\n");
  wprintf(L"\t//// Digite o e-mail: ");
  scanf("%[A-Z a-z@.0-9]", email);
  getchar();
  wprintf(L"\n");
  wprintf(L"\t//// Digite o telefone: ");
  scanf("%[0-9 ()-]", telefone);
  getchar();
  wprintf(L"\n");
  wprintf(L"\t//// Digite o cpf: ");
  scanf("%[0-9.-]", cpf);
  getchar();
  wprintf(L"\n");
  wprintf(L"\t//// Digite o CRN: ");
  scanf("%[0-9.-]", crn);
  wprintf(L"\n");
  wprintf(L"\t//// Profissional cadastrado com sucesso!");
  wprintf(L"\n");
  wprintf(L"\tTecle <ENTER> para prosseguir... ");
  getchar();
}


void exibir_prof(void) {
  char continuar;
  char cpf[13];
  
  while (continuar != '0') {
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t///                          Exibir profissional                           ///\n");
    wprintf(L"\t///                              [0] Retornar                              ///\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\n");
    wprintf(L"\t//// tecle <ENTER> para prosseguir e '0' para RETORNAR: ");
    scanf("%c", &continuar);
    getchar();
    if (continuar == '0') {
      break;
    }
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t///                             Exibir profissional                        ///\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\n");
    wprintf(L"\t//// Digite o CPF do profissional a ser exibido: ");
    scanf("%[0-9.-]", cpf);
    getchar();
    wprintf(L"\n");
    wprintf(L"\t//// Nome: \n");
    wprintf(L"\n");
    wprintf(L"\t//// E-mail: \n");
    wprintf(L"\n");
    wprintf(L"\t//// Telefone: \n");
    wprintf(L"\n");
    wprintf(L"\t//// CPF: \n");
    wprintf(L"\n");
    wprintf(L"\t//// CRN: \n");
    wprintf(L"\n");
    wprintf(L"\ttecle <ENTER> para continuar: ");
    getchar();
  }
}

// Adaptado do Chatgpt
void recadastrar_prof(void) {

  // Variáveis
  char nome[40];
  char email[30];
  char telefone[13];
  char cpf[13];
  char crn[10];

  system("clear || cls"); // se for Linux use 'clear', se for Windows use 'cls'
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                        Recadastrar profissional                        ///\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\n");

  // Simulação de busca de dados antigos (pode ser substituído por uma busca real em arquivo ou banco de dados)
  wprintf(L"\t//// Dados antigos:\n");
  wprintf(L"\tNome: João da Silva\n");
  wprintf(L"\tEmail: joao.silva@email.com\n");
  wprintf(L"\tTelefone: (11) 91234-5678\n");
  wprintf(L"\tCPF: 123.456.789-00\n");
  wprintf(L"\tCRN: 123456\n");
  wprintf(L"\n");

  // Solicitação de novos dados
  wprintf(L"\t//// Digite o novo nome do profissional (ou pressione ENTER para manter o atual): ");
  fgets(nome, sizeof(nome), stdin);
  wprintf(L"\n");

  wprintf(L"\t//// Digite o novo e-mail (ou pressione ENTER para manter o atual): ");
  fgets(email, sizeof(email), stdin);
  wprintf(L"\n");

  wprintf(L"\t//// Digite o novo telefone (ou pressione ENTER para manter o atual): ");
  fgets(telefone, sizeof(telefone), stdin);
  wprintf(L"\n");

  wprintf(L"\t//// Digite o novo CPF (ou pressione ENTER para manter o atual): ");
  fgets(cpf, sizeof(cpf), stdin);
  wprintf(L"\n");

  wprintf(L"\t//// Digite o novo CRN (ou pressione ENTER para manter o atual): ");
  fgets(crn, sizeof(crn), stdin);
  wprintf(L"\n");

  // Confirmar a operação de recadastramento
  wprintf(L"\t//// Recadastramento realizado com sucesso!");
  wprintf(L"\n");
  wprintf(L"\tTecle <ENTER> para prosseguir... ");
  getchar();
}


void excluir_prof(void) {

  // Variáveis
  char respprof;

  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                      Excluir dados do profissional                     ///\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\tDeseja excluir os dados do profissional selecionado? s/n");
  scanf(" %c", &respprof);
  if (respprof == 's') {
    printf("\tDados do profissional excluídos!\n");
  } else { 
    wprintf(L"\tTecle <ENTER> para continuar: \n");
    getchar();
  }

} 


char menu_relatorio(void) {

  char op_relatorio;

  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                             Módulo relatório                           ///\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                         [1] Clientes cadastrados                       ///\n");
  wprintf(L"\t///                         [2] Profisionais cadastrados                   ///\n"); 
  wprintf(L"\t///                         [0] Retornar ao Menu Principal                 ///\n");  
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\n"); 
  wprintf(L"\t//// Escolha uma opção: "); 
  scanf("%c", &op_relatorio);
  getchar();
  return op_relatorio;
}


void relatorio_clientes(void) {

  char continuar;
  
  do {
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t///                           Relatório de Clientes                        ///\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\n"); 
    wprintf(L"\t//// tecle <ENTER> para continuar ou '0' Para CANELAR e RETORNAR: ");
    scanf("%c", &continuar);
    getchar();
    if (continuar == '0') {
      wprintf(L"\n");
      wprintf(L"\t-> Consulta Cancelada <-\n");
      break;
    }
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    wprintf(L"\t/////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\t///                                                                                                       ///\n");
    wprintf(L"\t///                                         Relatório de Clientes                                         ///\n");
    wprintf(L"\t///                                                                                                       ///\n");
    wprintf(L"\t/////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\t|          NOME           |          E-mail          |           Telefone          |           CPF          |\n"); 
    wprintf(L"\n");
    wprintf(L"\ttecle <ENTER> para continuar... ");
    getchar();
  } while (continuar != '0');
  wprintf(L"\n"); 
  wprintf(L"\ttecle <ENTER> para retornar... ");
  getchar();
  
}


void relatorio_profissional(void) {

  char continuar;
  
  do {
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t///                        Relatório de Profissionais                      ///\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\n"); 
    wprintf(L"\t//// tecle <ENTER> para continuar ou '0' Para CANELAR e RETORNAR: ");
    scanf("%c", &continuar);
    getchar();
    if (continuar == '0') {
      wprintf(L"\n");
      wprintf(L"\t-> Consulta Cancelada <-\n");
      break;
    }
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\t///                                                                                                                                ///\n");
    wprintf(L"\t///                                                  Relatório de Profissionais                                                    ///\n");
    wprintf(L"\t///                                                                                                                                ///\n");
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\t|          NOME           |          E-mail          |           Telefone          |           CPF          |           CRN          |\n"); 
    wprintf(L"\n");
    wprintf(L"\ttecle <ENTER> para continuar... ");
    getchar();
  } while (continuar != '0');
  wprintf(L"\n"); 
  wprintf(L"\ttecle <ENTER> para retornar... ");
  getchar();
  
}