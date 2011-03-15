#ifndef _MAIN_H
#define _MAIN_H
                            /*********************
****************************** M�DULO  :  MAIN  ******************************
                            *********************/
/** @file main.h
 *
 *  M�dulo principal do projeto.
 *
 *  Este � o m�dulo principal do projeto. A fun��o principal (main) e toda a
 *  descri��o deste projeto como um todo est�o inclusos neste m�dulo.
 *
 *  @note
 *  N�o h�.
 *
 *  @warning
 *  N�o h�.
 *
 *  @attention
 *  Todo projeto deve possuir um m�dulo MAIN.
 *
 *  @author Rafael Noronha
 *
 *  @author ENGWORKS - DPD
 *  @date 2009
 *
 ****************************************************************************/

/*****************************************************************************
**                                                                          **
**                          ARQUIVOS DE CABE�ALHO                           **
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

/**** Outros ****/
/*
** Inclus�o de arquivos de cabe�alho de outros m�dulos utilizados por este.
** Por exemplo: '#include "termico.h"'.
*/

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
**                           VARI�VEIS EXPORTADAS                           **
**                                                                          **
*****************************************************************************/

/*****************************************************************************
**                                                                          **
**                            FUN��ES EXPORTADAS                            **
**                                                                          **
*****************************************************************************/

/****************************************************************************/
/** Inicializa��o do m�dulo MAIN.
 *
 *  Esta fun��o � respons�vel por inicializar o m�dulo MAIN e todos os m�dulos
 *  utilizados neste projeto.
 *
 *  @return void
 *
 *  @note
 *  N�o h�.
 *
 *  @attention
 *  Esta fun��o deve ser chamada no in�cio da fun��o "main".
 ****************************************************************************/
void InicializaMain(void);

/*****************************************************************************
**                                                                          **
**                                   EOF                                    **
**                                                                          **
*****************************************************************************/
#endif
