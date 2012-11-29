#ifndef _TEMPLATE_H
#define _TEMPLATE_H
/*                                          **********************
 ********************************************* MÓDULO: TEMPLATE **********************************************
 *                                          **********************/
/** @file template.h
 *
 * Substitua este texto por uma descrição breve deste módulo (arquivos ".c" e ".h").
 *
 * Substitua este texto pela descrição completa deste módulo (arquivos ".c" e ".h").
 * Este módulo é um modelo para a criação de novos módulos. Ele contém toda a estrutura que um módulo deve 
 * conter, sendo composto pelos arquivos:
 *    - template.c;
 *    - template.tab.h (opcional); e
 *    - este aquivo (template.h).
 *
 * @note
 * - Não sobrescreva os arquivos de template do módulo. Implemente um novo módulo sobre uma cópia do template.
 * - Os padrões de comentário que começam com BARRA-ASTERISCO-ASTERISCO, como este, devem ser compilados com a 
 *   ferramenta Doxygen (comando: "doxygen.exe doxygen.cfg").
 * - Leia a documentação do @b Doxygen para maiores informações sobre o funcionamento dos recursos de 
 *   documentação de código.
 *
 * @warning
 * - É altamente recomendado manter todos os arquivos de template como somente-leitura, evitando assim que 
 *   eles sejam sobrescritos ao serem utilizados.
 *
 * @attention
 * - A descrição de cada módulo deve ser realizada no arquivo ".h" do mesmo.
 * - Cada módulo de um projeto de software deve conter, pelo menos, um arquivo ".h" e um ".c".
 *
 * @author Rafael Noronha <rafael@pdsolucoes.com.br>.
 *
 * @author PD Soluções
 * @date 2012
 *
 * @copyright Insira a licença do código-fonte deste módulo aqui.
 ************************************************************************************************************/

/*************************************************************************************************************
 **                                                                                                         **
 **                                          ARQUIVOS DE CABEÇALHO                                          **
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
#include "stddefs.h"

/**** Outros ****
 *
 * Inclusão de arquivos de cabeçalho de outros módulos utilizados por este.
 * Por exemplo: '#include "serial.h"'.
 */

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
 **                                          VARIÁVEIS EXPORTADAS                                           **
 **                                                                                                         **
 ************************************************************************************************************/

/** 
 * Exemplo de variável exportada.
 *
 * Esta variável deve ser definida no arquivo ".c" deste módulo.
 *
 * @note
 * As variáveis exportadas devem possuir a primeira letra de cada palavra em maiúsculo e as demais letras em 
 * minúsculo.
 *
 * @attention
 * A palavra reservada @b extern deve ser sempre utilizada para não conflitar com a declaração da mesma 
 * variável realizada no arquivo ".c" do mesmo módulo.
 */
extern INT8U VariavelExportada1;

/** 
 * Segunda variável exportada de exemplo.
 *
 * Cada variável deve ser documentada segundo sua funcionalidade no software.
 *
 * @note
 * Vários recursos de documentação podem ser utilizados. Consulte a documentação do Doxygen para mais 
 * informações.
 *
 * @see VariavelExportada1
 */
extern INT16U VariavelExportada2;

/*************************************************************************************************************
 **                                                                                                         **
 **                                           FUNÇÕES EXPORTADAS                                            **
 **                                                                                                         **
 ************************************************************************************************************/

/************************************************************************************************************/
/** Inicialização deste módulo.
 *
 * Realiza todas as inicializações necessárias para a execução deste módulo.
 *
 * @return void
 *
 * @note Esta função deve ser chamada durante a inicialização do software caso este módulo seja utilizado.
 ************************************************************************************************************/
void InicializaTemplate(void);

/************************************************************************************************************/
/** Função exportada para os outros módulos.
 *
 * Esta função simplesmente exemplifica como codificar e documentar uma função que será visível para os outros 
 * módulos do projeto.
 *
 * @param primeiroParametro Descrição do primeiro parâmetro.
 * @param segundoParametro  Descrição do segundo parâmetro.
 *
 * @return Descrição do retorno desta função.
 * @retval TRUE  Descrição deste valor de retorno.
 * @retval FALSE Descrição deste valor de retorno.
 *
 * @note
 * As funções exportadas devem possuir a primeira letra de cada palavra em maiúsculo e as demais letras em 
 * minúsculo.
 ************************************************************************************************************/
BOOL FuncaoExportada1(INT8S primeiroParametro, INT16U segundoParametro);

/*************************************************************************************************************
 **                                                                                                         **
 **                                                   EOF                                                   **
 **                                                                                                         **
 ************************************************************************************************************/
#endif
