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

// Assinatura do cliente
void menu_cliente(void);
void cadastrar_cliente(void);
void exibir_cliente(void);
void alterar_cliente(void);
void excluir_cliente(void);

// Assinatura dieta
void menu_dieta(void);

// Assinatura agendamento
void menu_agendamento(void);

// Assinaturas do profissional
void menu_profissional(void);
void cadastrar_prof(void);
void exibir_prof(void);
void recadastrar_prof(void);
void excluir_prof(void);

// Assinatura relatório
void menu_relatorio(void);

// Assinatura informações
void menu_info(void);
void menu_dev(void);


// Programa Principal
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


void menu_principal(void) {
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
  wprintf(L"\tTecle <ENTER> para prosseguir..."); // Sem interação no momento
  getchar();
} 


void menu_cliente(void) {
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
  wprintf(L"\tTecle <ENTER> para prosseguir..."); // Sem interação no momento
  getchar();
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

  // Variavéis
  char resp[15];
  char nome[40];
  char email[30];
  char telefone[13];
  char cpf[13];

  // Variavel Booleana
  int verificador = 1; // true


  while (verificador) {
    wprintf(L"\t//// Digite o cpf do cliente ou Digite '0' para retornar: ");
    scanf("%d", &verificador);
    verificador = 0; // false
    if (cpf == "0") {
      return;
    } 
  }

  // Reiniciando a verificação
  verificador = 1; // true
  
  while (verificador) {
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t///                        Alterar Dados do Cliente                        ///\n");
    wprintf(L"\t///                                                                        ///\n");
    wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
    wprintf(L"\n");
    // Simulação de busca de dados antigos (pode ser substituído por uma busca real em arquivo ou banco de dados)
    wprintf(L"\t//// Dados Atuais:\n");
    wprintf(L"\n");
    wprintf(L"\t//// Nome: João da Silva\n");
    wprintf(L"\t//// Email: joao.silva@email.com\n");
    wprintf(L"\t//// Telefone: (11) 91234-5678\n");
    wprintf(L"\t//// CPF: 123.456.789-00\n");
    wprintf(L"\n");
    wprintf(L"\t//// Qual Dado deseja alterar (0 Para Cancelar)? ");
    scanf("%s", resp);
    getchar();
    wprintf(L"\n");
    if ((resp == "Nome") || (resp == "NOME")) {
      wprintf(L"//// Digite o Nome do Cliente: ");
      scanf("%s", nome);
      getchar();
    } 
    else if ((resp == "Email") || (resp == "E-mail") || (resp == "E-MAIL")) {
      wprintf(L"//// Digite o E-mail do Cliente: ");
      scanf("%s", email);
      getchar();
    }
    else if ((resp == "Telefone") || (resp == "TELEFONE")) {
      wprintf(L"//// Digite o Telefone do Cliente: ");
      scanf("%s", telefone);
      getchar();
    }
    else if ((resp == "cpf") || (resp == "CPF")) {
      wprintf(L"//// Digite o CPF do Cliente: ");
      scanf("%s", cpf);
      getchar();
    }
    else if ((resp == "0")) {
      wprintf(L"//// Alteração Cancelada");
      verificador = 0; // false
    }
  }
  wprintf(L"\tTecle <ENTER> para prosseguir...");
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
  wprintf(L"\tDeseja excluir os dados do Cliente selecionado (S/N) ");
  scanf(" %c", &resp);
  if ((resp == 's') || (resp == 'S')) {
    printf("\tDados do profissional excludos!\n");
  } 
  else { 
    wprintf(L"\tTecle <ENTER> para continuar: \n");
  }
}


void menu_dieta(void) {
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
  wprintf(L"\tTecle <ENTER> para prosseguir..."); // Sem interação no momento
  getchar();
}


void menu_agendamento(void) {
  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                            Módulo agendamento                          ///\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                         [1] Agendar consulta                           ///\n");
  wprintf(L"\t///                         [2] Alterar consulta                           ///\n"); 
  wprintf(L"\t///                         [3] Exibir consulta                            ///\n"); 
  wprintf(L"\t///                         [4] Excluir consulta                           ///\n");
  wprintf(L"\t///                         [0] Retornar ao Menu Principal                 ///\n"); 
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\n"); 
  wprintf(L"\tTecle <ENTER> para prosseguir..."); // Sem interação no momento
  getchar();
}


void menu_profissional(void) {
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
  wprintf(L"\tTecle <ENTER> para prosseguir..."); // Sem interação no momento
  getchar();
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
    printf("\tDados do profissional excludos!\n");
  } else { 
    wprintf(L"\tTecle <ENTER> para continuar: \n");
  }

} 


void menu_relatorio(void) {
  system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                             Módulo relatório                           ///\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t///                         [1] Clientes cadastrados                       ///\n");
  wprintf(L"\t///                         [2] Histórico do cliente                       ///\n"); 
  wprintf(L"\t///                         [3] Profisionais cadastrados                   ///\n"); 
  wprintf(L"\t///                         [4] Histórico do profissional                  ///\n");
  wprintf(L"\t///                         [5] Financeiro                                 ///\n");
  wprintf(L"\t///                         [0] Retornar ao Menu Principal                 ///\n");  
  wprintf(L"\t///                                                                        ///\n");
  wprintf(L"\t//////////////////////////////////////////////////////////////////////////////\n");
  wprintf(L"\n"); 
  wprintf(L"\tTecle <ENTER> para prosseguir..."); // Sem interação no momento
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
  wprintf(L"\tTecle <ENTER> para prosseguir..."); // Sem interação no momento
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
}

// versão 0.3