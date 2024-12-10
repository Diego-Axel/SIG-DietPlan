////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte              ///
///                 Centro de Ensino Superior do Seridó                  ///
///               Departamento de Computação e Tecnologia                ///
///                  Disciplina DCT1106 -- Programação                   ///
///               Projeto Sistema de Planejamento de Dietas              ///
///              Developed by Diêgo Axel,  Luís Henrique                 ///
///                           and Kaio Márcio                            ///
///                             Versão 0.8                               ///
////////////////////////////////////////////////////////////////////////////


// Bibliotecas
#include <stdio.h> 
#include <stdlib.h>

// Assinatura das funções do Menu Principal (interfaces)
#include "interfacePrincipal/interfaces.h"

// Assinatura do cliente
#include "clientes/clientes.h"

// Assinatura dieta
#include "dietas/dietas.h"

// Assinatura agendamento
#include "agendamento/agendamento.h"

// Assinaturas do profissional
#include "profissional/profissional.h"

// Assinatura relatório
#include "relatorio/relatorio.h"

// Assinatura das utilidades
#include "utilitarios/utis.h"

// Programa Principal
int main(void) {

  // Variáveis para as opções
  char op_principal;
  char op_cliente;
  char op_dietas;
  char op_agendar;
  char op_profissional;
  char op_relatorio;
  Profissional* profissional;
  Cliente* cliente;

  do { 
    op_principal = menu_principal();
    if (op_principal == '1') {
      do {
        op_cliente = menu_cliente();
        if (op_cliente == '1') {
          cliente = cadastrar_cliente();
          grava_cliente(cliente);
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
          profissional = cadastrar_prof();
          grava_prof(profissional);
        }
        else if (op_profissional == '2') {
          pesquisar_prof();
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