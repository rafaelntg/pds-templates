#ifndef _TEMPLATE_H
#define _TEMPLATE_H
/*                                          **********************
 ********************************************* M�DULO: TEMPLATE **********************************************
 *                                          **********************/
/** @file template.h
 *
 * Substitua este texto por uma descri��o breve deste m�dulo (arquivos ".c" e ".h").
 *
 * Substitua este texto pela descri��o completa deste m�dulo (arquivos ".c" e ".h").
 * Este m�dulo � um modelo para a cria��o de novos m�dulos. Ele cont�m toda a estrutura que um m�dulo deve 
 * conter, sendo composto pelos arquivos:
 *    - template.c;
 *    - template.tab.h (opcional); e
 *    - este aquivo (template.h).
 *
 * @note
 * - N�o sobrescreva os arquivos de template do m�dulo. Implemente um novo m�dulo sobre uma c�pia do template.
 * - Os padr�es de coment�rio que come�am com BARRA-ASTERISCO-ASTERISCO, como este, devem ser compilados com a 
 *   ferramenta Doxygen (comando: "doxygen.exe doxygen.cfg").
 * - Leia a documenta��o do @b Doxygen para maiores informa��es sobre o funcionamento dos recursos de 
 *   documenta��o de c�digo.
 *
 * @warning
 * - � altamente recomendado manter todos os arquivos de template como somente-leitura, evitando assim que 
 *   eles sejam sobrescritos ao serem utilizados.
 *
 * @attention
 * - A descri��o de cada m�dulo deve ser realizada no arquivo ".h" do mesmo.
 * - Cada m�dulo de um projeto de software deve conter, pelo menos, um arquivo ".h" e um ".c".
 *
 * @author Rafael Noronha <rafael@pdsolucoes.com.br>.
 *
 * @author PD Solu��es
 * @date 2012
 *
 * @copyright Insira a licen�a do c�digo-fonte deste m�dulo aqui.
 ************************************************************************************************************/

/*************************************************************************************************************
 **                                                                                                         **
 **                                          ARQUIVOS DE CABE�ALHO                                          **
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
#include "stddefs.h"

/**** Outros ****
 *
 * Inclus�o de arquivos de cabe�alho de outros m�dulos utilizados por este.
 * Por exemplo: '#include "serial.h"'.
 */

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
 **                                          VARI�VEIS EXPORTADAS                                           **
 **                                                                                                         **
 ************************************************************************************************************/

/** 
 * Exemplo de vari�vel exportada.
 *
 * Esta vari�vel deve ser definida no arquivo ".c" deste m�dulo.
 *
 * @note
 * As vari�veis exportadas devem possuir a primeira letra de cada palavra em mai�sculo e as demais letras em 
 * min�sculo.
 *
 * @attention
 * A palavra reservada @b extern deve ser sempre utilizada para n�o conflitar com a declara��o da mesma 
 * vari�vel realizada no arquivo ".c" do mesmo m�dulo.
 */
extern INT8U VariavelExportada1;

/** 
 * Segunda vari�vel exportada de exemplo.
 *
 * Cada vari�vel deve ser documentada segundo sua funcionalidade no software.
 *
 * @note
 * V�rios recursos de documenta��o podem ser utilizados. Consulte a documenta��o do Doxygen para mais 
 * informa��es.
 *
 * @see VariavelExportada1
 */
extern INT16U VariavelExportada2;

/*************************************************************************************************************
 **                                                                                                         **
 **                                           FUN��ES EXPORTADAS                                            **
 **                                                                                                         **
 ************************************************************************************************************/

/************************************************************************************************************/
/** Inicializa��o deste m�dulo.
 *
 * Realiza todas as inicializa��es necess�rias para a execu��o deste m�dulo.
 *
 * @return void
 *
 * @note Esta fun��o deve ser chamada durante a inicializa��o do software caso este m�dulo seja utilizado.
 ************************************************************************************************************/
void InicializaTemplate(void);

/************************************************************************************************************/
/** Fun��o exportada para os outros m�dulos.
 *
 * Esta fun��o simplesmente exemplifica como codificar e documentar uma fun��o que ser� vis�vel para os outros 
 * m�dulos do projeto.
 *
 * @param primeiroParametro Descri��o do primeiro par�metro.
 * @param segundoParametro  Descri��o do segundo par�metro.
 *
 * @return Descri��o do retorno desta fun��o.
 * @retval TRUE  Descri��o deste valor de retorno.
 * @retval FALSE Descri��o deste valor de retorno.
 *
 * @note
 * As fun��es exportadas devem possuir a primeira letra de cada palavra em mai�sculo e as demais letras em 
 * min�sculo.
 ************************************************************************************************************/
BOOL FuncaoExportada1(INT8S primeiroParametro, INT16U segundoParametro);

/*************************************************************************************************************
 **                                                                                                         **
 **                                                   EOF                                                   **
 **                                                                                                         **
 ************************************************************************************************************/
#endif
