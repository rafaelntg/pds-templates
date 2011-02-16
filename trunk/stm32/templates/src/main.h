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

/****************************************************************************/
/** @mainpage Substitua este texto pelo apelido do projeto (Template v9.01.1)
 *
 *  @section sec_resumo Resumo
 *
 *  - Comunicação : USB (idProduct=0x0E8A; idVendor=0x1781) (exemplo)
 *
 *  - Mecanismo : FUJITSU 3" COM GUILHOTINA 150mm/s 30mm/s (exemplo)
 *
 *  - Gaveta : NÃO (exemplo)
 *
 *  - Chipset : NÃO (exemplo)
 *
 *  - Processador : PHILIPS LPC2146 (exemplo)
 *
 *  - Modo gráfico : FILETES (exemplo)
 *
 *  - Erro de guilhotina : SIM (exemplo)
 *
 *  - Pouco papel : SIM (exemplo)
 *
 *  - Driver Windows : ENGWORKS T080HF (exemplo)
 *
 *  - Tamanho do Papel : 80mm (exemplo)
 *
 *  - Mais informações: @ref pag_sinopse
 *
 *  @section sec_firmware Firmware
 *
 *  - Versão de firmware: SLxxyyzz-Rxx
 *
 *  - Data: dd/mm/aaaa
 *
 *  - Hora: hh:mm
 *
 *  - Alterado por:
 *
 *  - Alterações:
 *
 ****************************************************************************/

/****************************************************************************/
/** @page pag_sinopse Sinopse do projeto
 *
 *  - Data de início do projeto: dd/mm/aaaa
 *
 *  - Data prevista do término: dd/mm/aaaa
 *
 *  - Cliente externo do projeto: Nome (Código)
 *
 *  - Status/andamento do projeto: em desenvolvimento
 *
 *  - Características do firmware:
 *
 *  - Previsão de outros software:
 *
 *  - Características do hardware:
 *
 *  - Outras observações/detalhes:
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
