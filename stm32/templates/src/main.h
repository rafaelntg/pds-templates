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

/****************************************************************************/
/** @mainpage Substitua este texto pelo apelido do projeto (Template v9.01.1)
 *
 *  @section sec_resumo Resumo
 *
 *  - Comunica��o : USB (idProduct=0x0E8A; idVendor=0x1781) (exemplo)
 *
 *  - Mecanismo : FUJITSU 3" COM GUILHOTINA 150mm/s 30mm/s (exemplo)
 *
 *  - Gaveta : N�O (exemplo)
 *
 *  - Chipset : N�O (exemplo)
 *
 *  - Processador : PHILIPS LPC2146 (exemplo)
 *
 *  - Modo gr�fico : FILETES (exemplo)
 *
 *  - Erro de guilhotina : SIM (exemplo)
 *
 *  - Pouco papel : SIM (exemplo)
 *
 *  - Driver Windows : ENGWORKS T080HF (exemplo)
 *
 *  - Tamanho do Papel : 80mm (exemplo)
 *
 *  - Mais informa��es: @ref pag_sinopse
 *
 *  @section sec_firmware Firmware
 *
 *  - Vers�o de firmware: SLxxyyzz-Rxx
 *
 *  - Data: dd/mm/aaaa
 *
 *  - Hora: hh:mm
 *
 *  - Alterado por:
 *
 *  - Altera��es:
 *
 ****************************************************************************/

/****************************************************************************/
/** @page pag_sinopse Sinopse do projeto
 *
 *  - Data de in�cio do projeto: dd/mm/aaaa
 *
 *  - Data prevista do t�rmino: dd/mm/aaaa
 *
 *  - Cliente externo do projeto: Nome (C�digo)
 *
 *  - Status/andamento do projeto: em desenvolvimento
 *
 *  - Caracter�sticas do firmware:
 *
 *  - Previs�o de outros software:
 *
 *  - Caracter�sticas do hardware:
 *
 *  - Outras observa��es/detalhes:
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
