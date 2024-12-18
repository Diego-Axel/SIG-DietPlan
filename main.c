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

// Assinaturas do profissional
#include "profissional/profissional.h"

// Assinatura relatório
#include "relatorio/relatorio.h"

// Assinatura das utilidades
#include "utilitarios/utis.h"

// Programa Principal
int main(void) {

  char opcao;

  do {
        opcao = menu_principal();

        switch(opcao) {
            case '1': menu_dieta(); 
                      break;
            case '2': menu_cliente();
                      break;
            case '3': menu_profissional();
                      break;
            case '4': menu_relatorio();
                      break;
            case '5': menu_info();
                      break;
            case '6': menu_dev();
                      break;
        }
  } while(opcao != '0');

  return 0;
}