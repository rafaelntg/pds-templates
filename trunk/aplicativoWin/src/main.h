#ifndef _MAIN_H
#define _MAIN_H
                            /*********************
****************************** MÓDULO  :  MAIN  ******************************
                            *********************/
/** @file main.h
 *
 *  Módulo principal do projeto.
 *
 *  Este é o módulo principal do projeto. A função principal (main) e toda a
 *  descrição deste projeto como um todo estão inclusos neste módulo.
 *
 *  @note
 *  Não há.
 *
 *  @warning
 *  Não há.
 *
 *  @attention
 *  Todo projeto deve possuir um módulo MAIN.
 *
 *  @author Rafael Noronha
 *
 *  @author ENGWORKS - DPD
 *  @date 2009
 *
 ****************************************************************************/

/*****************************************************************************
**                                                                          **
**                          ARQUIVOS DE CABEÇALHO                           **
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

/**** Outros ****/
/*
** Inclusão de arquivos de cabeçalho de outros módulos utilizados por este.
** Por exemplo: '#include "termico.h"'.
*/

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
**                           VARIÁVEIS EXPORTADAS                           **
**                                                                          **
*****************************************************************************/

/*****************************************************************************
**                                                                          **
**                            FUNÇÕES EXPORTADAS                            **
**                                                                          **
*****************************************************************************/

/****************************************************************************/
/** Inicialização do módulo MAIN.
 *
 *  Esta função é responsável por inicializar o módulo MAIN e todos os módulos
 *  utilizados neste projeto.
 *
 *  @return void
 *
 *  @note
 *  Não há.
 *
 *  @attention
 *  Esta função deve ser chamada no início da função "main".
 ****************************************************************************/
void InicializaMain(void);

/*****************************************************************************
**                                                                          **
**                                   EOF                                    **
**                                                                          **
*****************************************************************************/
#endif
