#ifndef _STDDEFS_H
#define _STDDEFS_H
/*                          **********************
****************************** HEADER: STDDEFS  ******************************
                            **********************
*/
/** @file stddefs.h
 *
 *  Arquivo de defini��es padr�es.
 *
 *  Este arquivo de cabe�alho � constituido de v�rias defini��es gen�ricas
 *  �teis para qualquer projeto.
 *
 *  @note
 *  Qualquer nova defini��o gen�rica � bem-vinda a este arquivo.
 *
 *  @warning
 *  - Ao incluir alguma defini��o neste arquivo, verifique se realmente a
 *    defini��o a ser inclu�da � gen�rica para qualquer software.
 *  - As defini��es de tipo podem mudar de acordo com o compilador utilizado
 *    para compilar o projeto.
 *
 *  @author PD Solu��es <pdsolucoes@pdsolucoes.com.br>
 ****************************************************************************/
 
/*****************************************************************************
**                                                                          **
**                          ARQUIVOS DE CABE�ALHO                           **
**                                                                          **
*****************************************************************************/
 
/**** Sistema ****/
/*
** Inclus�o de arquivos de cabe�alho da ferramenta de desenvolvimento.
** Por exemplo: '#include <stdlib.h>'.
*/
 
/**** Gen�ricos ****/
/*
** Inclus�o de arquivos de cabe�alho sem um arquivo ".c" correspondente.
** Por exemplo: '#include "stddefs.h"'.
*/
 
/**** Outros ****/
/*
** Inclus�o de arquivos de cabe�alho de outros m�dulos utilizados por este.
** Por exemplo: '#include "serial.h"'.
*/
 
/*****************************************************************************
**                                                                          **
**                           DEFINI��ES E MACROS                            **
**                                                                          **
*****************************************************************************/
 
#define FALSE (0) //!< Valor booleano @b false
#define TRUE  (1) //!< Valor booleano @b true
 
/** Ponteiro NULL */
#define NULL ((void *)0)
 
/****************************************************************************/
/** @defgroup CARACTERES_CONTROLE_ASCII Caracteres de controle ASCII
 *  Caracteres de controle da tabela ASCII.
 *  Os caracteres de controle da tabela ASCII s�o caracteres n�o-imprim�veis
 *  utilizados para realizar funcionalidades especiais quando interpretados.
 *  Por exemplo: o caractere #LF indica avan�o de linha para uma impressora.
 *  @{
 ****************************************************************************/
#define NUL   (0x00) //!< Null
#define SOH   (0x01) //!< Start of Heading
#define STX   (0x02) //!< Start of Text
#define ETX   (0x03) //!< End of Text
#define EOT   (0x04) //!< End of Transmission
#define ENQ   (0x05) //!< Enquiry
#define ACK   (0x06) //!< Acknowledge
#define BEL   (0x07) //!< Bell
#define BS    (0x08) //!< Backspace
#define HT    (0x09) //!< Horizontal Tab
#define LF    (0x0A) //!< Line Feed
#define VT    (0x0B) //!< Vertical Tab
#define FF    (0x0C) //!< Form Feed
#define CR    (0x0D) //!< Carriage Return
#define SO    (0x0E) //!< Shift Out
#define SI    (0x0F) //!< Shift In
#define DLE   (0x10) //!< Data Link Escape
#define DC1   (0x11) //!< Device Control 1
#define DC2   (0x12) //!< Device Control 2
#define DC3   (0x13) //!< Device Control 3
#define DC4   (0x14) //!< Device Control 4
#define NAK   (0x15) //!< Negative Acknowledge
#define SYN   (0x16) //!< Synchronous Idle
#define ETB   (0x17) //!< End Transmission Block
#define CAN   (0x18) //!< Cancel
#define EM    (0x19) //!< End of Media
#define SUB   (0x1A) //!< Substitute
#define ESC   (0x1B) //!< Escape
#define FS    (0x1C) //!< File Separator
#define GS    (0x1D) //!< Group Separator
#define RS    (0x1E) //!< Record Separator
#define US    (0x1F) //!< Unit Separator
#define ESP   (0x20) //!< Espace
#define DEL   (0x7F) //!< Delete
/** @} *///CARACTERES_ASCII
/****************************************************************************/
 
/****************************************************************************/
/** @defgroup VALORES_LIMITES Valores limites dos tipos de dados
 *  @{
 ****************************************************************************/
#define VAL_MAX_INT8U  (+255) //!< Valor m�ximo do tipo #INT8U
#define VAL_MIN_INT8U  (0)    //!< Valor m�nimo do tipo #INT8U
#define VAL_MAX_INT8S  (+127) //!< Valor m�ximo do tipo #INT8S
#define VAL_MIN_INT8S  (-128) //!< Valor m�nimo do tipo #INT8S
 
#define VAL_MAX_INT16U (+65535) //!< Valor m�ximo do tipo #INT16U
#define VAL_MIN_INT16U (0)      //!< Valor m�nimo do tipo #INT16U
#define VAL_MAX_INT16S (+32767) //!< Valor m�ximo do tipo #INT16S
#define VAL_MIN_INT16S (-32768) //!< Valor m�nimo do tipo #INT16S
 
#define VAL_MAX_INT32U (+4294967295) //!< Valor m�ximo do tipo #INT32U
#define VAL_MIN_INT32U (0)           //!< Valor m�nimo do tipo #INT32U
#define VAL_MAX_INT32S (+2147483647) //!< Valor m�ximo do tipo #INT32S
#define VAL_MIN_INT32S (-2147483648) //!< Valor m�nimo do tipo #INT32S
/** @} *///VALORES_LIMITES
/****************************************************************************/
 
#define KB    (1024) //!< 1 KByte
 
/** Identifica se o @a valor � �mpar ou par.
 *  Esta � a forma mais eficaz de verificar se um valor � impar ou par, pois
 *  esta macro simplesmente verifica se o bit menos significativo est� ou n�o
 *  setado.
 */
#define IMPAR(valor) ((valor) & 1)
#define PAR(valor)   (!IMPAR(valor))
 
/** Seta bit para m�scara.
 *  Esta macro � bastante �til para a cria��o de m�scaras para an�lise de 1
 *  bit.
 *  Se o par�metro @a X for 0 (zero), a mascar� referenciar� o bit 0 (menos
 *  significativo).
 *
 *  Exemplo de uso:
 *  @code
 *  #define MASK_ESTOURO_BUFFER 1
 *  ...
 *  if (controleBloqueio & SETA_BIT(MASK_ESTOURO_BUFFER))
 *  {
 *    ...
 *  }
 *  @endcode
 */
#define SETA_BIT(X) (1 << (X))
 
/** Loop infinito.
 *  Todo firmware deve incluir esta macro em sua fun��o @b main para controlar
 *  o funcionamento do mesmo.
 */
#define LOOP_INFINITO()  for(;;)
 
/*****************************************************************************
**                                                                          **
**                     ESTRUTURAS E DEFINI��ES DE TIPOS                     **
**                                                                          **
*****************************************************************************/
 
/** Tipo booleano.
 *  Uma vari�vel deste tipo deve receber apenas os valores #TRUE ou #FALSE.
 */
typedef unsigned       char   BOOL;
 
/** Inteiro n�o-sinalizado de 8 bits.
 *  @see VAL_MIN_INT8U
 *  @see VAL_MAX_INT8U
 */
typedef unsigned       char   INT8U;
 
/** Inteiro sinalizado de 8 bits.
 *  @see VAL_MIN_INT8S
 *  @see VAL_MAX_INT8S
 */
typedef signed         char   INT8S;
 
/** Inteiro n�o-sinalizado de 16 bits.
 *  @see VAL_MIN_INT16U
 *  @see VAL_MAX_INT16U
 */
typedef unsigned short int    INT16U;
 
/** Inteiro sinalizado de 16 bits.
 *  @see VAL_MIN_INT16S
 *  @see VAL_MAX_INT16S
 */
typedef signed   short int    INT16S;
 
/** Inteiro n�o-sinalizado de 32 bits.
 *  @see VAL_MIN_INT32U
 *  @see VAL_MAX_INT32U
 */
typedef unsigned       int    INT32U;
 
/** Inteiro sinalizado de 32 bits.
 *  @see VAL_MIN_INT32S
 *  @see VAL_MAX_INT32S
 */
typedef signed         int    INT32S;
 
/*****************************************************************************
**                                                                          **
**                                   EOF                                    **
**                                                                          **
*****************************************************************************/
#endif
