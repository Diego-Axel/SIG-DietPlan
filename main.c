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
char menu_principal(void);

// Assinatura do cliente
char menu_cliente(void);
void cadastrar_cliente(void);
void exibir_cliente(void);
void alterar_cliente(void);
void excluir_cliente(void);

// Assinatura dieta
char menu_dieta(void);
void avaliacao(void);
void dieta_para_hipertrofia(void);
void dieta_para_perda_de_peso(void);
void reavaliacao(void);
void nova_dieta(void);

// Assinatura agendamento
char menu_agendamento(void);
void agendar(void);
void exibir_agendamento(void);
void excluir_agendamento(void);

// Assinaturas do profissional
char menu_profissional(void);
void cadastrar_prof(void);
void exibir_prof(void);
void recadastrar_prof(void);
void excluir_prof(void);

// Assinatura relatório
char menu_relatorio(void);
void relatorio_clientes(void);

// Assinatura informações
void menu_info(void);
void menu_dev(void);


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


char menu_principal(void) {

  char op_principal;

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
  wprintf(L"\t///                         [0] Encerrar Programa                          ///\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\n"); 
  wprintf(L"\t//// Escolha uma opção: ");
  scanf("%c", &op_principal);
  getchar();
  return op_principal;
} 


char menu_cliente(void) {

  char op_cliente;

  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                              Módulo cliente                            ///\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                         [1] Cadastrar cliente                          ///\n");
  wprintf(L"\t///                         [2] Exibir cliente                             ///\n"); 
  wprintf(L"\t///                         [3] Alterar dados do cliente                   ///\n"); 
  wprintf(L"\t///                         [4] Excluir cliente                            ///\n");
  wprintf(L"\t///                         [0] Retornar ao Menu Principal                 ///\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\n"); 
  wprintf(L"\t//// Escolha uma opção: "); 
  scanf("%c", &op_cliente);
  getchar();
  return op_cliente;
}


void cadastrar_cliente(void) {

  // Variavéis
  char nome[40];
  char email[30];
  char telefone[13];
  char cpf[13];


  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                            Cadastar cliente                            ///\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\n");
  wprintf(L"\t//// Digite seu nome: ");
  scanf("%[A-Z a-z]", nome);
  getchar();
  wprintf(L"\n");
  wprintf(L"\t//// Digite seu e-mail: ");
  scanf("%[A-Z a-z@.0-9]", email);
  getchar();
  wprintf(L"\n");
  wprintf(L"\t//// Digite seu telefone: ");
  scanf("%[0-9 ()-]", telefone);
  getchar();
  wprintf(L"\n");
  wprintf(L"\t//// Digite seu cpf: ");
  scanf("%[0-9.-]", cpf);
  getchar();
  wprintf(L"\n");
  wprintf(L"\t//// Cliente cadastrado com sucesso!");
  wprintf(L"\n");
  wprintf(L"\tTecle <ENTER> para prosseguir... ");
  getchar();
}


void exibir_cliente(void) {
  char continuar;
  char cpf[13];
  
  while (continuar != '0') {
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t///                             Exibir cliente                             ///\n");
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
    wprintf(L"\t///                             Exibir cliente                             ///\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\n");
    wprintf(L"\t//// Digite o CPF do Cliente a ser exibido: ");
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
    wprintf(L"\ttecle <ENTER> para continuar: ");
    getchar();
  }
}


void alterar_cliente(void) {

  // Variáveis
  char nome[40];
  char email[30];
  char telefone[13];
  char cpf[13];

  system("clear || cls"); // se for Linux use 'clear', se for Windows use 'cls'
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                             Alterar Cliente                            ///\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\n");

  // Simulação de busca de dados antigos (pode ser substituído por uma busca real em arquivo ou banco de dados)
  wprintf(L"\t//// Dados antigos:\n");
  wprintf(L"\tNome: João da Silva\n");
  wprintf(L"\tEmail: joao.silva@email.com\n");
  wprintf(L"\tTelefone: (11) 91234-5678\n");
  wprintf(L"\tCPF: 123.456.789-00\n");
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

  // Confirmar a operação de recadastramento
  wprintf(L"\t//// Recadastramento realizado com sucesso!");
  wprintf(L"\n");
  wprintf(L"\tTecle <ENTER> para prosseguir... ");
  getchar();
}


void excluir_cliente(void) {

    // Variáveis
  char resp;

  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                        Excluir Dados do Cliente                        ///\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\tDeseja excluir os dados do Cliente selecionado (S/N) \n");
  scanf(" %c", &resp);
  if ((resp == 's') || (resp == 'S')) {
    wprintf(L"\tDados do cilente excluídos!\n");
    wprintf(L"\ttecle <ENTER> para continuar... ");
    getchar();
  } 
  else { 
    wprintf(L"\tTecle <ENTER> para continuar... ");
    getchar();
  }
}


char menu_dieta(void) {

  char op_dieta;

  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                               Módulo dieta                             ///\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                         [1] Avaliação                                  ///\n");
  wprintf(L"\t///                         [2] Dieta para hipertrófia                     ///\n"); 
  wprintf(L"\t///                         [3] Dieta para perda de peso                   ///\n"); 
  wprintf(L"\t///                         [4] Reavaliação                                ///\n");
  wprintf(L"\t///                         [5] Adicionar nova dieta                       ///\n");
  wprintf(L"\t///                         [0] Retornar ao Menu Principal                 ///\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\n"); 
  wprintf(L"\t//// Escolha uma opção: "); 
  scanf("%c", &op_dieta);
  getchar();
  return op_dieta;
}


void avaliacao(void) {
  
  char continuar;
  char cpf[13];
  
  do {
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t///                               Avaliação                                ///\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\n"); 
    wprintf(L"\t//// tecle <ENTER> para continuar ou '0' Para CANELAR e RETORNAR: ");
    scanf("%c", &continuar);
    getchar();
    if (continuar == '0') {
      wprintf(L"\n");
      wprintf(L"\t-> Avaliação Cancelada <-\n");
      break;
    }
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t///                               Avaliação                                ///\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\n"); 
    wprintf(L"\t//// Digite o CPF do Cliente que deseja verificar: ");
    scanf("%[0-9.-]", cpf);
    getchar();
    wprintf(L"\n"); 
    wprintf(L"\t//// Nome do Cliente: \n");
    wprintf(L"\n");
    wprintf(L"\t//// Profissional Responsável: \n");
    wprintf(L"\n");
    wprintf(L"\t//// Tipo De Dieta: \n");
    wprintf(L"\n");
    wprintf(L"\t//// Andamento: \n");
    wprintf(L"\n");
    wprintf(L"\ttecle <ENTER> para continuar... ");
    getchar();
  } while (continuar != '0');
  wprintf(L"\n"); 
  wprintf(L"\ttecle <ENTER> para retornar... ");
  getchar();
}


void dieta_para_hipertrofia(void) {

  char cpf[13];
  char crn[10];
  char continuar;


  do {
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t///                         Dieta Para Hipertrofia                         ///\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\n");
    wprintf(L"\t//// tecle <ENTER> para continuar ou '0' Para CANELAR e RETORNAR: ");
    scanf("%c", &continuar);
    getchar();
    if (continuar == '0') {
      wprintf(L"\n");
      wprintf(L"\t-> Avaliação Cancelada <-\n");
      break;
    }
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t///                         Dieta Para Hipertrofia                         ///\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\n");
    wprintf(L"\t//// Digite o CPF do cliente no qual você deseja atrelar essa dieta: ");
    scanf("%[0-9.-]", cpf);
    getchar();
    wprintf(L"\n");
    wprintf(L"\t//// Digite o CRN do Profissional que sera responsável pela dieta: ");
    scanf("%[0-9.-]", crn);
    getchar();
  } while (continuar != '0');
  wprintf(L"\n");
  wprintf(L"\ttecle <ENTER> para continuar... ");
  getchar();
}


void dieta_para_perda_de_peso(void) {
  
  char cpf[13];
  char crn[10];
  char continuar;


  do {
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t///                        Dieta Para Perda de Peso                        ///\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\n");
    wprintf(L"\t//// tecle <ENTER> para continuar ou '0' Para CANELAR e RETORNAR: ");
    scanf("%c", &continuar);
    getchar();
    if (continuar == '0') {
      wprintf(L"\n");
      wprintf(L"\t-> Avaliação Cancelada <-\n");
      break;
    }
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t///                        Dieta Para Perda de Peso                        ///\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\n");
    wprintf(L"\t//// Digite o CPF do cliente no qual você deseja atrelar essa dieta: ");
    scanf("%[0-9.-]", cpf);
    getchar();
    wprintf(L"\n");
    wprintf(L"\t//// Digite o CRN do Profissional que sera responsável pela dieta: ");
    scanf("%[0-9.-]", crn);
    getchar();
  } while (continuar != '0');
  wprintf(L"\n");
  wprintf(L"\ttecle <ENTER> para continuar... ");
  getchar();
}


void reavaliacao(void) {

  char cpf[13];
  char crn[10];
  char continuar;


  do {
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t///                               Reavaliação                              ///\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\n");
    wprintf(L"\t//// tecle <ENTER> para continuar ou '0' Para CANELAR e RETORNAR: ");
    scanf("%c", &continuar);
    getchar();
    if (continuar == '0') {
      wprintf(L"\n");
      wprintf(L"\t-> Reavaliação Cancelada <-\n");
      break;
    }
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t///                               Reavaliação                              ///\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\n");
    wprintf(L"\t//// Digite o CPF do cliente no qual você deseja fazer a reavaliação: ");
    scanf("%[0-9.-]", cpf);
    getchar();
    wprintf(L"\n");
    wprintf(L"\t//// Digite o CRN do Profissional que sera responsável pela dieta: ");
    scanf("%[0-9.-]", crn);
    getchar();
  } while (continuar != '0');
  wprintf(L"\n");
  wprintf(L"\ttecle <ENTER> para continuar... ");
  getchar();
}


void nova_dieta(void) {

  char nome_dieta[13];
  char continuar;


  do {
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t///                           Adicionar Nova Dieta                         ///\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\n");
    wprintf(L"\t//// tecle <ENTER> para continuar ou '0' Para CANELAR e RETORNAR: ");
    scanf("%c", &continuar);
    getchar();
    if (continuar == '0') {
      wprintf(L"\n");
      wprintf(L"\t-> Inclusão de Nova Dieta Cancelada <-\n");
      break;
    }
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t///                           Adicionar Nova Dieta                         ///\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\n");
    wprintf(L"\t//// Digite o nome da nova dieta que você deseja adicionar: ");
    scanf("%s", nome_dieta);
    getchar();
    wprintf(L"\n");
  } while (continuar != '0');
  wprintf(L"\n");
  wprintf(L"\ttecle <ENTER> para continuar... ");
  getchar();
}


char menu_agendamento(void) {

  char op_agendar;

  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                            Módulo agendamento                          ///\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                         [1] Agendar consulta                           ///\n");
  wprintf(L"\t///                         [2] Exibir consulta                            ///\n"); 
  wprintf(L"\t///                         [3] Excluir consulta                           ///\n");
  wprintf(L"\t///                         [0] Retornar ao Menu Principal                 ///\n"); 
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\n"); 
  wprintf(L"\t//// Escolha uma opção: "); 
  scanf("%c", &op_agendar);
  getchar();
  return op_agendar;
}


void agendar(void) {
  
  char continuar;
  char cpf[13];
  char nome[55];
  char prof[55];
  char dieta[15];
  char hora[5];

  do {
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t///                               Agendar                                  ///\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\n"); 
    wprintf(L"\t//// tecle <ENTER> para continuar ou '0' Para CANELAR e RETORNAR: ");
    scanf("%c", &continuar);
    getchar();
    if (continuar == '0') {
      wprintf(L"\n");
      wprintf(L"\t-> Agendamento Cancelado <-\n");
      break;
    }
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t///                               Agendamento                              ///\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\n"); 
    wprintf(L"\t//// Digite o CPF do Cliente que deseja agendar: ");
    scanf("%[0-9.-]", cpf);
    getchar();
    wprintf(L"\n"); 
    wprintf(L"\t//// Nome do Cliente: \n");
    scanf("%[A-Za-z]", nome);
    getchar();
    wprintf(L"\n");
    wprintf(L"\t//// Profissional Responsável: \n");
    scanf("%[A-Za-z]", prof);
    getchar();
    wprintf(L"\n");
    wprintf(L"\t//// Tipo De Dieta: \n");
    scanf("%[A-Za-z]", dieta);
    getchar();
    wprintf(L"\n");
    wprintf(L"\t//// Horário: \n");
    scanf("%[0-9 :]", hora);
    wprintf(L"\n");
    wprintf(L"\ttecle <ENTER> para continuar... ");
    getchar();
  } while (continuar != '0');
  wprintf(L"\n"); 
  wprintf(L"\ttecle <ENTER> para retornar... ");
  getchar();
}


void exibir_agendamento(void) {
  char continuar;
  char cpf[13];
  
  while (continuar != '0') {
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t///                           Exibir agendamento                           ///\n");
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
    wprintf(L"\t///                             Exibir agendamento                         ///\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\n");
    wprintf(L"\t//// Digite o CPF do cliente a ser exibido: ");
    scanf("%[0-9.-]", cpf);
    getchar();
    wprintf(L"\n");
    wprintf(L"\t//// Nome: \n");
    wprintf(L"\n");
    wprintf(L"\t//// Profissional: \n");
    wprintf(L"\n");
    wprintf(L"\t//// Horário: \n");
    wprintf(L"\n");
    wprintf(L"\t//// CPF: \n");
    wprintf(L"\n");
    wprintf(L"\t//// Dieta: \n");
    wprintf(L"\n");
    wprintf(L"\ttecle <ENTER> para continuar: ");
    getchar();
  }
}


void excluir_agendamento(void) {

    // Variáveis
  char resp;

  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                          Excluir agendamento                           ///\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\tDeseja excluir o agendamento selecionado (S/N) \n");
  scanf(" %c", &resp);
  if ((resp == 's') || (resp == 'S')) {
    wprintf(L"\tAgendamento excluído!\n");
    wprintf(L"\ttecle <ENTER> para continuar... ");
    getchar();
  } 
  else { 
    wprintf(L"\tTecle <ENTER> para continuar... ");
    getchar();
  }
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


void menu_info(void) {
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
  wprintf(L"\t///                             Sobre o programa:                          ///\n");
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
  wprintf(L"\tTecle <ENTER> para retornar...");
  getchar();
}


void menu_dev(void) {
  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                          Módulo desenvolvedores                        ///\n");
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
  wprintf(L"\n"); 
  wprintf(L"\tTecle <ENTER> para retornar...");
  getchar();
}