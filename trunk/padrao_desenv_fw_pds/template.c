/*                                          **********************
 ********************************************* MÓDULO: TEMPLATE **********************************************
 *                                          **********************/
/** @file template.c 
 *
 * Veja template.h para mais informações.
 ************************************************************************************************************/
 
/*************************************************************************************************************
 **                                                                                                         **
 **                                           MÓDULOS UTILIZADOS                                            **
 **                                                                                                         **
 ************************************************************************************************************/
 
/**** Sistema ****
 *
 * Inclusão de arquivos de cabeçalho da ferramenta de desenvolvimento.
 * Por exemplo: '#include <stdlib.h>'.
 */
 
/**** Genéricos ****
 *
 * Inclusão de arquivos de cabeçalho sem um arquivo ".c" correspondente.
 * Por exemplo: '#include "stddefs.h"'.
 */
#include "template_header.h"
 
/**** Outros ****
 *
 * Inclusão de arquivos de cabeçalho de outros módulos utilizados por este.
 * Por exemplo: '#include "serial.h"'.
 */
 
/**** Tabelas ****
 *
 * Inclusão dos arquivos ".tab.h" deste módulo.
 * Por exemplo: '#include "serial.tab.h".
 */
#include "template.tab.h"
 
/**** Atual ****
 *
 * Inclusão do arquivo de cabeçalho deste módulo.
 */
#include "template.h"
 
/*************************************************************************************************************
 **                                                                                                         **
 **                                           DEFINIÇÕES E MACROS                                           **
 **                                                                                                         **
 ************************************************************************************************************/
 
/*************************************************************************************************************
 **                                                                                                         **
 **                                    ESTRUTURAS E DEFINIÇÕES DE TIPOS                                     **
 **                                                                                                         **
 ************************************************************************************************************/
 
/*************************************************************************************************************
 **                                                                                                         **
 **                                      PROTÓTIPOS DAS FUNÇÕES LOCAIS                                      **
 **                                                                                                         **
 ************************************************************************************************************/
 
static void funcaoLocalTemplate(void);
 
/*************************************************************************************************************
 **                                                                                                         **
 **                                          VARIÁVEIS EXPORTADAS                                           **
 **                                                                                                         **
 ************************************************************************************************************/
/*
 * A documentação destas variáveis é realizada no arquivo ".h" deste módulo.
 */
INT8U  VariavelExportada1;
INT16U VariavelExportada2;
 
/*************************************************************************************************************
 **                                                                                                         **
 **                                            VARIÁVEIS GLOBAIS                                            **
 **                                                                                                         **
 ************************************************************************************************************/
 
/** 
 * Variável global não exportada 1.
 *
 * Esta variável global não é exportada para outros módulos, devendo ser documentada aqui.
 *
 * @note 
 * Apesar dessa variável não ser visível para outros módulos, ela não pode possuir o mesmo nome que qualquer
 * outro identificador deste projeto, como por exemplo, uma variável global não exportada de outro módulo.
 */
static BOOL variavelGlobalNaoExportada1;
 
/** 
 * Variável global não exportada 2.
 *
 * Esta variável global não é exportada para outros módulos, devendo ser documentada aqui.
 *
 * @note
 * Diferentemente das variáveis globais exportadas, as variáveis globais não exportadas devem ser nomeadas 
 * com todas as letras em minúsculo, exceto a primeira letra de cada palavra a partir da segunda palavra.
 */
static INT16S variavelGlobalNaoExportada2;
 
/*************************************************************************************************************
 **                                                                                                         **
 **                                           FUNÇÕES EXPORTADAS                                            **
 **                                                                                                         **
 ************************************************************************************************************/
/*
 * A documentação destas funções é realizada no arquivo ".h" deste módulo.
 */
 
/************************************************************************************************************/
void InicializaTemplate(void)
/************************************************************************************************************/
{
   /**** Inicialização deste módulo ****/
   /*... Insira as inicializações necessárias para este módulo aqui! ...*/
}
 
/************************************************************************************************************/
BOOL FuncaoExportada1(INT8S primeiroParametro, INT16U segundoParametro)
/************************************************************************************************************/
{
}
 
/*************************************************************************************************************
 **                                                                                                         **
 **                                             FUNÇÕES LOCAIS                                              **
 **                                                                                                         **
 ************************************************************************************************************/
 
/************************************************************************************************************/
/** Descrição breve desta função local.
 *
 * Descrição completa da operação realizada por esta função local.
 *
 * @note 
 * Diferentemente das funções exportadas, as funções locais devem ser nomeadas com todas as letras em 
 * minúsculo, exceto a primeira letra de cada palavra a partir da segunda palavra.
 ************************************************************************************************************/
static void funcaoLocalTemplate(void)
/************************************************************************************************************/
{
}
 
/************************************************************************************************************/
/** Função local para exemplo.
 *
 * Esta função simplesmente exemplifica como codificar e documentar uma função local, a qual somente será 
 * visível para este módulo. Geralmente as funções locais são funções auxiliares utilizadas pelas outras 
 * funções do módulo.
 *
 * @param primeiroParametro Descrição do primeiro parâmetro.
 * @param segundoParametro  Descrição do segundo parâmetro.
 *
 * @return Descrição do retorno desta função.
 * @retval TRUE  Descrição deste valor de retorno.
 * @retval FALSE Descrição deste valor de retorno.
 *
 * @note Observações.
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