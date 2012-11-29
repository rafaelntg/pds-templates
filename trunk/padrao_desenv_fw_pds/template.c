/*                                          **********************
 ********************************************* M�DULO: TEMPLATE **********************************************
 *                                          **********************/
/** @file template.c 
 *
 * Veja template.h para mais informa��es.
 ************************************************************************************************************/
 
/*************************************************************************************************************
 **                                                                                                         **
 **                                           M�DULOS UTILIZADOS                                            **
 **                                                                                                         **
 ************************************************************************************************************/
 
/**** Sistema ****
 *
 * Inclus�o de arquivos de cabe�alho da ferramenta de desenvolvimento.
 * Por exemplo: '#include <stdlib.h>'.
 */
 
/**** Gen�ricos ****
 *
 * Inclus�o de arquivos de cabe�alho sem um arquivo ".c" correspondente.
 * Por exemplo: '#include "stddefs.h"'.
 */
#include "template_header.h"
 
/**** Outros ****
 *
 * Inclus�o de arquivos de cabe�alho de outros m�dulos utilizados por este.
 * Por exemplo: '#include "serial.h"'.
 */
 
/**** Tabelas ****
 *
 * Inclus�o dos arquivos ".tab.h" deste m�dulo.
 * Por exemplo: '#include "serial.tab.h".
 */
#include "template.tab.h"
 
/**** Atual ****
 *
 * Inclus�o do arquivo de cabe�alho deste m�dulo.
 */
#include "template.h"
 
/*************************************************************************************************************
 **                                                                                                         **
 **                                           DEFINI��ES E MACROS                                           **
 **                                                                                                         **
 ************************************************************************************************************/
 
/*************************************************************************************************************
 **                                                                                                         **
 **                                    ESTRUTURAS E DEFINI��ES DE TIPOS                                     **
 **                                                                                                         **
 ************************************************************************************************************/
 
/*************************************************************************************************************
 **                                                                                                         **
 **                                      PROT�TIPOS DAS FUN��ES LOCAIS                                      **
 **                                                                                                         **
 ************************************************************************************************************/
 
static void funcaoLocalTemplate(void);
 
/*************************************************************************************************************
 **                                                                                                         **
 **                                          VARI�VEIS EXPORTADAS                                           **
 **                                                                                                         **
 ************************************************************************************************************/
/*
 * A documenta��o destas vari�veis � realizada no arquivo ".h" deste m�dulo.
 */
INT8U  VariavelExportada1;
INT16U VariavelExportada2;
 
/*************************************************************************************************************
 **                                                                                                         **
 **                                            VARI�VEIS GLOBAIS                                            **
 **                                                                                                         **
 ************************************************************************************************************/
 
/** 
 * Vari�vel global n�o exportada 1.
 *
 * Esta vari�vel global n�o � exportada para outros m�dulos, devendo ser documentada aqui.
 *
 * @note 
 * Apesar dessa vari�vel n�o ser vis�vel para outros m�dulos, ela n�o pode possuir o mesmo nome que qualquer
 * outro identificador deste projeto, como por exemplo, uma vari�vel global n�o exportada de outro m�dulo.
 */
static BOOL variavelGlobalNaoExportada1;
 
/** 
 * Vari�vel global n�o exportada 2.
 *
 * Esta vari�vel global n�o � exportada para outros m�dulos, devendo ser documentada aqui.
 *
 * @note
 * Diferentemente das vari�veis globais exportadas, as vari�veis globais n�o exportadas devem ser nomeadas 
 * com todas as letras em min�sculo, exceto a primeira letra de cada palavra a partir da segunda palavra.
 */
static INT16S variavelGlobalNaoExportada2;
 
/*************************************************************************************************************
 **                                                                                                         **
 **                                           FUN��ES EXPORTADAS                                            **
 **                                                                                                         **
 ************************************************************************************************************/
/*
 * A documenta��o destas fun��es � realizada no arquivo ".h" deste m�dulo.
 */
 
/************************************************************************************************************/
void InicializaTemplate(void)
/************************************************************************************************************/
{
   /**** Inicializa��o deste m�dulo ****/
   /*... Insira as inicializa��es necess�rias para este m�dulo aqui! ...*/
}
 
/************************************************************************************************************/
BOOL FuncaoExportada1(INT8S primeiroParametro, INT16U segundoParametro)
/************************************************************************************************************/
{
}
 
/*************************************************************************************************************
 **                                                                                                         **
 **                                             FUN��ES LOCAIS                                              **
 **                                                                                                         **
 ************************************************************************************************************/
 
/************************************************************************************************************/
/** Descri��o breve desta fun��o local.
 *
 * Descri��o completa da opera��o realizada por esta fun��o local.
 *
 * @note 
 * Diferentemente das fun��es exportadas, as fun��es locais devem ser nomeadas com todas as letras em 
 * min�sculo, exceto a primeira letra de cada palavra a partir da segunda palavra.
 ************************************************************************************************************/
static void funcaoLocalTemplate(void)
/************************************************************************************************************/
{
}
 
/************************************************************************************************************/
/** Fun��o local para exemplo.
 *
 * Esta fun��o simplesmente exemplifica como codificar e documentar uma fun��o local, a qual somente ser� 
 * vis�vel para este m�dulo. Geralmente as fun��es locais s�o fun��es auxiliares utilizadas pelas outras 
 * fun��es do m�dulo.
 *
 * @param primeiroParametro Descri��o do primeiro par�metro.
 * @param segundoParametro  Descri��o do segundo par�metro.
 *
 * @return Descri��o do retorno desta fun��o.
 * @retval TRUE  Descri��o deste valor de retorno.
 * @retval FALSE Descri��o deste valor de retorno.
 *
 * @note Observa��es.
 ************************************************************************************************************/
BOOL funcaoLocalExemplo(INT8S primeiroParametro, INT16U segundoParametro)
/************************************************************************************************************/
{
}
 
/*************************************************************************************************************
 **                                                                                                         **
 **                                                   EOF                                                   **
 **                                                                                                         **
 ************************************************************************************************************/