/*                          **********************
****************************** MÓDULO  :  MAIN  ******************************
*                           **********************
*/
/** @file main.c
 *   Veja main.h para mais informações.
 ****************************************************************************/

/*****************************************************************************
**                                                                          **
**                            MÓDULOS UTILIZADOS                            **
**                                                                          **
*****************************************************************************/

/**** Sistema ****/
/*
** Inclusão de arquivos de cabeçalho da ferramenta de desenvolvimento.
** Por exemplo: '#include <stdio.h>'.
*/

/**** Genéricos ****/
/*
** Inclusão de arquivos de cabeçalho sem um arquivo ".c" correspondente.
** Por exemplo: '#include "stddefs.h"'.
*/
#include "stddefs.h"

/**** Outros ****/
/*
** Inclusão de arquivos de cabeçalho de outros módulos utilizados por este.
** Por exemplo: '#include "termico.h"'.
*/
#include "template.h"

/**** Tabelas ****/
/*
** Inclusão dos arquivos ".tab" deste módulo.
** Por exemplo: '#include "termico.tab".
*/

/**** Atual ****/
/*
** Inclusão do arquivo de cabeçalho deste módulo.
*/
#include "main.h"

/*****************************************************************************
**                                                                          **
**                           DEFINIÇÕES E MACROS                            **
**                                                                          **
*****************************************************************************/

/*****************************************************************************
**                                                                          **
**                     ESTRUTURAS E DEFINIÇÕES DE TIPOS                     **
**                                                                          **
*****************************************************************************/

/*****************************************************************************
**                                                                          **
**                       PROTÓTIPOS DAS FUNÇÕES LOCAIS                      **
**                                                                          **
*****************************************************************************/

/*****************************************************************************
**                                                                          **
**                           VARIÁVEIS EXPORTADAS                           **
**                                                                          **
*****************************************************************************/
/*
** A documentação destas variáveis é realizada no arquivo ".h" deste módulo.
*/

/*****************************************************************************
**                                                                          **
**                            VARIÁVEIS GLOBAIS                             **
**                                                                          **
*****************************************************************************/

/*****************************************************************************
**                                                                          **
**                            FUNÇÕES EXPORTADAS                            **
**                                                                          **
*****************************************************************************/
/*
** A documentação destas funções é realizada no arquivo ".h" deste módulo.
*/

/****************************************************************************/
void InicializaMain(void)
/****************************************************************************/
{
  /**** Inicialização de todos os módulos do projeto ****/
  InicializaTemplate();

  /**** Inicialização deste módulo ****/
  /*... Insira as inicializações necessárias para este módulo aqui! ...*/
}

/*****************************************************************************
**                                                                          **
**                              FUNÇÕES LOCAIS                              **
**                                                                          **
*****************************************************************************/

/****************************************************************************/
/** Função principal do software.
 *
 *  Controla o fluxo principal do software.
 *
 *  @return Valor padrão de retorno da função @b main pelo padrão ANSI-C.
 *  @retval 0 Indica sucesso na execução do software, porém um firmware nunca
 *    executará @code return 0; @endcode dentro de sua função @b main.
 *
 *  @note
 *  Observações.
 ****************************************************************************/
int main(void)
/****************************************************************************/
{
  InicializaMain();

  LOOP_INFINITO()
  {
    /*... Insira o código de controle principal do firmware aqui! ...*/
  }
}

/*****************************************************************************
**                                                                          **
**                                   EOF                                    **
**                                                                          **
*****************************************************************************/
