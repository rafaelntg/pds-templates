/*                          **********************
****************************** M�DULO  :  MAIN  ******************************
*                           **********************
*/
/** @file main.c
 *   Veja main.h para mais informa��es.
 ****************************************************************************/

/*****************************************************************************
**                                                                          **
**                            M�DULOS UTILIZADOS                            **
**                                                                          **
*****************************************************************************/

/**** Sistema ****/
/*
** Inclus�o de arquivos de cabe�alho da ferramenta de desenvolvimento.
** Por exemplo: '#include <stdio.h>'.
*/

/**** Gen�ricos ****/
/*
** Inclus�o de arquivos de cabe�alho sem um arquivo ".c" correspondente.
** Por exemplo: '#include "stddefs.h"'.
*/
#include "stddefs.h"

/**** Outros ****/
/*
** Inclus�o de arquivos de cabe�alho de outros m�dulos utilizados por este.
** Por exemplo: '#include "termico.h"'.
*/
#include "template.h"

/**** Tabelas ****/
/*
** Inclus�o dos arquivos ".tab" deste m�dulo.
** Por exemplo: '#include "termico.tab".
*/

/**** Atual ****/
/*
** Inclus�o do arquivo de cabe�alho deste m�dulo.
*/
#include "main.h"

/*****************************************************************************
**                                                                          **
**                           DEFINI��ES E MACROS                            **
**                                                                          **
*****************************************************************************/

/*****************************************************************************
**                                                                          **
**                     ESTRUTURAS E DEFINI��ES DE TIPOS                     **
**                                                                          **
*****************************************************************************/

/*****************************************************************************
**                                                                          **
**                       PROT�TIPOS DAS FUN��ES LOCAIS                      **
**                                                                          **
*****************************************************************************/

/*****************************************************************************
**                                                                          **
**                           VARI�VEIS EXPORTADAS                           **
**                                                                          **
*****************************************************************************/
/*
** A documenta��o destas vari�veis � realizada no arquivo ".h" deste m�dulo.
*/

/*****************************************************************************
**                                                                          **
**                            VARI�VEIS GLOBAIS                             **
**                                                                          **
*****************************************************************************/

/*****************************************************************************
**                                                                          **
**                            FUN��ES EXPORTADAS                            **
**                                                                          **
*****************************************************************************/
/*
** A documenta��o destas fun��es � realizada no arquivo ".h" deste m�dulo.
*/

/****************************************************************************/
void InicializaMain(void)
/****************************************************************************/
{
  /**** Inicializa��o de todos os m�dulos do projeto ****/
  InicializaTemplate();

  /**** Inicializa��o deste m�dulo ****/
  /*... Insira as inicializa��es necess�rias para este m�dulo aqui! ...*/
}

/*****************************************************************************
**                                                                          **
**                              FUN��ES LOCAIS                              **
**                                                                          **
*****************************************************************************/

/****************************************************************************/
/** Fun��o principal do software.
 *
 *  Controla o fluxo principal do software.
 *
 *  @return Valor padr�o de retorno da fun��o @b main pelo padr�o ANSI-C.
 *  @retval 0 Indica sucesso na execu��o do software, por�m um firmware nunca
 *    executar� @code return 0; @endcode dentro de sua fun��o @b main.
 *
 *  @note
 *  Observa��es.
 ****************************************************************************/
int main(void)
/****************************************************************************/
{
  InicializaMain();

  LOOP_INFINITO()
  {
    /*... Insira o c�digo de controle principal do firmware aqui! ...*/
  }
}

/*****************************************************************************
**                                                                          **
**                                   EOF                                    **
**                                                                          **
*****************************************************************************/
