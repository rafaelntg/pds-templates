##############################################################################
# Makefile
#
# Comandos aceitados por este Makefile:
# - make help      : exibe estas informa��es.
# - make clean     : limpa todos os arquivos de sa�da do projeto.
# - make all       : compila os arquivos alterados do projeto, gerando um 
#                    novo arquivo ".bin".
# - make clean all : recompila todo o projeto gerando um novo arquivo de 
#                    imagem do firmware (".bin"/".hex").  
# - make program   : grava a placa com o atual arquivo de imagem do firmware 
#                    (".bin"/".hex") gerado.
# - make doxygen   : gera a documenta��o do c�digo-fonte no diret�rio 
#                    "src/docs" (necess�rio ter instalada a ferramenta 
#                    Doxygen).
#
# Obs.: para executar os comandos, basta entrar no Prompt de comandos 
#       (Windows) ou no Terminal de comandos (Linux) ir at� o diret�rio raiz 
#       do projeto e digit�-los. 
#       Por exemplo: digitando "cs-make clean"(Windows)/"make clean"(Linux), 
#       todos arquivos de sa�da do projeto ser�o apagados, permanecendo 
#       somente os arquivos-fonte.
#
# Autor: PD Solu��es <pdsolucoes@pdsolucoes.com.br>
##############################################################################


##############################################################################
# Identifica��o do sistema operacional utilizado
##############################################################################

ifndef COMSPEC
  ifdef ComSpec
    COMSPEC = $(ComSpec)
  endif
endif

ifdef COMSPEC
  WINDOWS=COMSPEC
endif

##############################################################################
# Identifica��o dos diret�rios
##############################################################################

# Diret�rio de c�digos-fonte
# Obs.: todos os arquivos com exten��o ".c" colocados neste diret�rio ser�o
#       automaticamente considerados do projeto e, portanto, compilados 
#       juntamente aos demais c�digos-fontes para gerar o arquivo "hex".
DIR_SRC = src

# Diret�rio de sa�da
# Obs.: todos os arquivos gerados durante a compila��o do projeto ser�o 
#       gravados neste diret�rio.
DIR_OUT = out

# Diret�rio de bibliotecas
# Obs.: diret�rio onde est�o os arquivos "lib*.a".
DIR_LIB = lib

# Diret�rio de arquivos do linker
DIR_LD = $(DIR_LIB)/linker

# Diret�rios de busca por arquivos inclu�dos no projeto. 
# Obs.: por exemplo: ao incluir um arquivo de cabe�alho com a seguinte linha:
#       '#include "header.h"', o arquivo incluso ser� buscado no diret�rio 
#       raiz do pr�prio arquivo e tamb�m nestes diret�rios listados abaixo.
#       Caso haja mais de um diret�rio, separe-os por espa�o.
DIR_INC = $(wildcard lib/lib*/inc) $(DIR_SRC)

# Diret�rio de cria��o dos arquivos de depend�ncia (*.d)
# Obs.: este diret�rio ser� criado dentro do diret�rio padr�o de sa�da do 
#       projeto e possuir� arquivos de depend�ncia ap�s a compila��o do proj.
DIR_DEP = dep

# Diret�rio de cria��o dos arquivos de listagem dos c�digos-fontes
# Obs.: este diret�rio ser� criado dentro do diret�rio padr�o de sa�da do 
#       projeto e possuir� arquivos de depend�ncia ap�s a compila��o do proj.
DIR_LST = lst

##############################################################################
# Defini��es sobre ferramentas de desenvolvimento
##############################################################################

# Microcontrolador utilizado
#MCU = arm7tdmi
MCU = cortex-m3

# N�vel de otimiza��o da compila��o: 
#  - 0 = sem otimiza��o;
#  - s = otimiza��o por tamanho de c�digo;
#  - 1 = otimiza��o n�vel 1;
#  - 2 = otimiza��o n�vel 2;
#  - 3 = otimiza��o n�vel 3.
# Obs.: utilize as otimiza��o com cuidado, pois a execu��o do firmware pode
#       apresentar anomalias quando se utiliza otimiza��es.
#OTIMIZACAO = s
OTIMIZACAO = 0
#OTIMIZACAO = 1
#OTIMIZACAO = 2
#OTIMIZACAO = 3

# Op��es de Warning
OPCOES_WARN = -Wall

# Op��es de Debug
OPCOES_DEBUG = -g

# Gera��o de arquivos ".lst"
GERA_LST = -Wa,-adhlns=$(addprefix $(DIR_OUT)/$(DIR_LST)/, $(notdir $(addsuffix .lst, $(basename $<))))

# Gera��o de arquivos de depend�ncia (*.d)
GERA_DEP = -MD -MP -MF $(DIR_OUT)/$(DIR_DEP)/$(*F).d

# Especifica��o de sa�da da compila��o
ESPEC_SAIDA = -o $(DIR_OUT)/$(@F)

# Par�metros que ser�o passados ao compilador
OPCOES_COMPILADOR = -mcpu=$(MCU) -mthumb $(OPCOES_WARN) $(OP_DEBUG) \
  $(OPCOES_DEBUG) -O$(OTIMIZACAO) $(OPCOES_WARN) $(OPCOES_DEBUG) $(GERA_LST) \
	$(GERA_DEP) $(ESPEC_SAIDA)
	
# Par�metros que ser�o passados ao linker
OPCOES_LINKER = -Wl,--gc-sections,-Map=$@.map,-cref,-u,Reset_Handler

# Inclus�o do arquivo de linker (*.ld)
INCLUDE_LD = -T $(wildcard $(DIR_SRC)/*.ld)

# Passagem dos diret�rios de inclus�o para o compilador
INCLUDE_DIRS = $(addprefix -I, $(DIR_INC)) -I.

# Passagem dos diret�rios de biblioteca para o compilador
LIBRARY_DIRS = -L $(DIR_LIB) -L $(DIR_LD) -L .

# Prefixo das ferramentas de desenvolvimento
# Obs.: n�o esque�a de inserir tamb�m o �ltimo h�fen.
#TCHAIN_PREFIX = arm-elf-
TCHAIN_PREFIX = arm-none-eabi-

# Compilador C
CC = $(TCHAIN_PREFIX)gcc
CFLAGS = $(OPCOES_COMPILADOR) $(INCLUDE_DIRS)

# Compilador Cxx
CXX = $(TCHAIN_PREFIX)g++
CXXFLAGS = $(OPCOES_COMPILADOR) $(INCLUDE_DIRS)

# Assembler
AS = $(TCHAIN_PREFIX)as
ASFLAGS = $(OPCOES_COMPILADOR) -c

# Linker
LD = $(TCHAIN_PREFIX)gcc
LDFLAGS = $(OPCOES_LINKER) $(INCLUDE_DIRS) $(LIBRARY_DIRS) $(INCLUDE_LD)

# Archiver
AR = $(TCHAIN_PREFIX)ar
ARFLAGS = cr

# Object Copy
OBJCOPY = $(TCHAIN_PREFIX)objcopy

#-----------------------------------------------------------------------------
ifdef WINDOWS
# Comando de remo��o dos arquivos (usado no "clean")
RM = cs-rm -f

# Comando de remo��o de diret�rio (somente remove se ele estiver vazio)
RMDIR = rmdir /S /Q

# Comando para mover arquivos e diret�rios
MV = move /Y

# Make
MAKE = cs-make

# Comando para a cria��o de uma estrutura de diret�rios
MKDIR = mkdir
#-----------------------------------------------------------------------------
else
# Comando de remo��o dos arquivos (usado no "clean")
RM = rm -f

# Comando de remo��o de diret�rio (somente remove se ele estiver vazio)
RMDIR = rmdir --ignore-fail-on-non-empty

# Comando para mover arquivos e diret�rios
MV = mv

# Make
MAKE = make

# Comando para a cria��o de uma estrutura de diret�rios
MKDIR = mkdir -p

endif
#-----------------------------------------------------------------------------

# Comando para mostrar o tamanho das se��es
ELFSIZE = $(TCHAIN_PREFIX)size -B $(TARGET).elf

##############################################################################
# Defini��es sobre os arquivos do projeto
##############################################################################

# Listagem de todos os c�digos-fonte (*.c e *.s)
ALL_SRC = $(wildcard $(DIR_SRC)/*.c) $(wildcard $(DIR_SRC)/*.s)

# Listagem de todos os c�digos-fonte sem exten��o
ALL_SRC_BASE = $(basename $(ALL_SRC))

# Listagem de todos os c�digos-fonte sem exten��o e sem diret�rio
ALL_SRC_BASE_NOTDIR = $(notdir $(ALL_SRC_BASE))

# Listagem de todos os arquivos ".o" gerados a partir dos c�digos-fonte
ALL_OBJS = $(addprefix $(DIR_OUT)/, \
           $(addsuffix .o, $(ALL_SRC_BASE_NOTDIR)))

# Listagem de todos os arquivos de bibliotecas
ALL_LIBS = $(addsuffix .a, $(basename $(wildcard $(DIR_LIB)/lib*)))

# Nome do target a ser gerado (sem exten��o)
TARGET = $(DIR_OUT)/main

##############################################################################
# Compila��o do projeto e execu��o de comandos
##############################################################################

all: cria_dirs_out $(TARGET).elf $(TARGET).bin  $(TARGET).hex tamanho

# Constru��o do arquivo ".elf"
$(TARGET).elf : $(ALL_OBJS) $(ALL_LIBS)
	@echo "Linkando..."
	@$(LD) $(LDFLAGS) $(ALL_OBJS) $(ALL_LIBS) --output $@
	
# Constru��o do arquivo ".bin"
$(TARGET).bin : $(TARGET).elf
	@echo "Gerando o .bin..."
	@$(OBJCOPY) -O binary $< $@

# Constru��o do arquivo ".hex"
$(TARGET).hex : $(TARGET).elf
	@echo "Gerando o .hex..."
	@$(OBJCOPY) -O ihex $< $@

# Direciona os arquivos compilados para o diret�rio de sa�da
$(DIR_OUT)/%.o: $(DIR_SRC)/%.c
	@echo "Compilando $<..."
	@$(CC) $(CFLAGS) -c $<

# Cria a biblioteca "libstm32.a"
$(DIR_LIB)/libstm32.a: $(DIR_SRC)/stm32f10x_conf.h 
	@echo "Construindo a biblioteca 'libstm32.a'..."
	@$(MAKE) --directory=$(DIR_LIB)/libstm32 -f Makefile all

# Limpa os arquivos gerados durante a compila��o do projeto
#-----------------------------------------------------------------------------
ifdef WINDOWS
clean:
	@echo "Limpando o projeto..."
	@$(MAKE) --directory=$(DIR_LIB)/libstm32 -f Makefile clean
	@$(RM) $(ALL_OBJS)
	@$(RM) $(patsubst %, $(DIR_OUT)/$(DIR_DEP)/%.d, $(ALL_SRC_BASE_NOTDIR))
	@$(RM) $(patsubst %, $(DIR_OUT)/$(DIR_LST)/%.lst, $(ALL_SRC_BASE_NOTDIR))
	@$(RM) $(TARGET).elf.map
	@$(RM) $(TARGET).elf
	@$(RM) $(TARGET).bin
	@$(RM) $(TARGET).hex
	@$(RM) $(DIR_OUT)\doxygen.wrn
	@-$(RMDIR) $(DIR_OUT)\$(DIR_DEP)
	@-$(RMDIR) $(DIR_OUT)\$(DIR_LST)
	@-$(RMDIR) $(DIR_OUT)\docs
	@-$(RMDIR) $(DIR_OUT)
else
#-----------------------------------------------------------------------------
clean:
	@echo "Limpando o projeto..."
	@$(MAKE) -i --directory=$(DIR_LIB)/libstm32 -f Makefile clean
	@$(RM) $(ALL_OBJS)
	@$(RM) $(patsubst %, $(DIR_OUT)/$(DIR_DEP)/%.d, $(ALL_SRC_BASE_NOTDIR))
	@$(RM) $(patsubst %, $(DIR_OUT)/$(DIR_LST)/%.lst, $(ALL_SRC_BASE_NOTDIR))
	@$(RM) $(TARGET).elf.map
	@$(RM) $(TARGET).elf
	@$(RM) $(TARGET).bin
	@$(RM) $(TARGET).hex
	@$(RM) $(DIR_OUT)/doxygen.wrn
	@-$(RMDIR) $(DIR_OUT)/$(DIR_DEP)
	@-$(RMDIR) $(DIR_OUT)/$(DIR_LST)
	@-$(RM) -R $(DIR_OUT)/docs
	@-$(RMDIR) $(DIR_OUT)
endif
#-----------------------------------------------------------------------------

# Grava��o do microcontrolador utilizando a ferramenta "STMFlashLoader.exe" 
# (Windows) ou a STM32Loader (Linux).
#-----------------------------------------------------------------------------
ifdef WINDOWS
program: $(TARGET).hex
	@echo "Gravando o dispositivo..."
	@STMFlashLoader -c --pn 1 --br 115200 --db 8 --pr EVEN --sb 1 --to 5000 \
                  -i STM32F10xxBxx \
                  -e --all \
                  -d --fn $(TARGET).hex \
                  -r --a 8000000
#-----------------------------------------------------------------------------
else
program: $(TARGET).bin
	@echo "Gravando o dispositivo..."	
	@stm32loader.py -e -w -p /dev/ttyUSB0 -b 115200 -a 0x8000000 $(TARGET).bin
endif
#-----------------------------------------------------------------------------

# Gera��o da documenta��o do projeto
#-----------------------------------------------------------------------------
ifdef WINDOWS
doxygen:
	@echo Gerando documentacao pelo Doxygen...
	@-$(RMDIR) $(DIR_OUT)\docs
	@-$(MKDIR) $(DIR_OUT)
	@cmd /c "cd $(DIR_SRC) & doxygen doxygen.cfg & $(MV) doxygen.wrn ..\$(DIR_OUT)\ & $(MV) docs ..\$(DIR_OUT)\ & cd .."
#-----------------------------------------------------------------------------
else
doxygen:
	@echo "Gerando documentacao pelo Doxygen..."
	@echo "cd $(DIR_SRC)" > doxygen_aux.sh
	@echo "doxygen doxygen.cfg" >> doxygen_aux.sh
	@chmod +x doxygen_aux.sh
	@./doxygen_aux.sh
	@$(RM) doxygen_aux.sh
	@-$(RM) -R $(DIR_OUT)/docs
	@if [ ! -d $(DIR_OUT) ]; then mkdir -p $(DIR_OUT); fi
	@$(MV) $(DIR_SRC)/docs $(DIR_OUT)/
	@$(MV) $(DIR_SRC)/doxygen.wrn $(DIR_OUT)
	@xdg-open $(DIR_OUT)/docs/html/index.html
endif
#-----------------------------------------------------------------------------

tamanho: $(TARGET).elf
	@echo "===================================================="
	@echo "=                   COMPILACAO OK                  ="
	@echo "===================================================="
	@echo "Consumo da Flash (text+data) e da RAM (data+bss):   "
	@echo "-------------------------------------------------   "
	@$(ELFSIZE)
	@echo "===================================================="
	
# Prepara��o dos diret�rios de sa�da
#-----------------------------------------------------------------------------
ifdef WINDOWS
$(DIR_OUT)/$(DIR_DEP):
	@echo "Criando diretorio $(DIR_OUT)\$(DIR_DEP)..."
	@$(MKDIR) $(DIR_OUT)\$(DIR_DEP)
	@echo "Diretorio criado com sucesso!"

$(DIR_OUT)/$(DIR_LST):
	@echo "Criando diretorio $(DIR_OUT)\$(DIR_LST)..."
	@$(MKDIR) $(DIR_OUT)\$(DIR_LST)
	@echo "Diretorio criado com sucesso!"
#-----------------------------------------------------------------------------
else
$(DIR_OUT)/$(DIR_DEP):
	@echo "Criando diretorio $(DIR_OUT)/$(DIR_DEP)..."
	@$(MKDIR) $(DIR_OUT)/$(DIR_DEP)
	@echo "Diretorio criado com sucesso!"

$(DIR_OUT)/$(DIR_LST):
	@echo "Criando diretorio $(DIR_OUT)/$(DIR_LST)..."
	@$(MKDIR) $(DIR_OUT)/$(DIR_LST)
	@echo "Diretorio criado com sucesso!"
endif	
#-----------------------------------------------------------------------------
	
cria_dirs_out: $(DIR_OUT)/$(DIR_DEP) $(DIR_OUT)/$(DIR_LST)

help:
	@echo "==============================================================="
	@echo "=                            HELP                             ="
	@echo "==============================================================="
	@echo "Sintaxe: make [Comando]                                        "
	@echo "                                                               "
	@echo "Comando:                                                       "
	@echo "  help      : exibe estas informacoes.                         "
	@echo "  clean     : limpa todos os arquivos de saida do projeto.     "
	@echo "  all       : compila somente os arquivos alterados do projeto."
	@echo "  clean all : recompila todo o projeto.                        "
	@echo "  program   : grava a placa com a atual compilacao do projeto. "
	@echo "  doxygen   : gera a documentacao do codigo-fonte.             "
	@echo "==============================================================="

# Inclus�o dos arquivos de depend�ncia (*.d)
-include -$(wildcard $(DIR_OUT)/$(DIR_DEP)/*.d)
	
.DEFAULT_GOAL := all
	
.PHONY: all clean program cria_dirs_out help doxygen 
