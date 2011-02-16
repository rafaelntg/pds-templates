##############################################################################
# Makefile
#
# Comandos aceitados por este Makefile:
# - make help      : exibe estas informações.
# - make clean     : limpa todos os arquivos de saída do projeto.
# - make all       : compila os arquivos alterados do projeto, gerando um 
#                    novo arquivo ".bin".
# - make clean all : recompila todo o projeto gerando um novo ".bin".
# - make program   : grava a placa com o atual ".bin" gerado.
# - make doxygen   : gera a documentação do código fonte no diretório 
#                    "src/docs".
#
# Obs.: para executar os comandos, basta entrar no Prompt de comandos 
#       (Windows) ou no Terminal de comandos (Linux) ir até o diretório raiz 
#       do projeto e digitá-los. 
#       Por exemplo: digitando "make clean", todos arquivos de saída do 
#       projeto serão apagados, permanecendo somente os arquivos-fonte.
#
# Autor           : Rafael Noronha <rafael@pdsolucoes.com.br>
# Data de criação : 14/02/2011
##############################################################################


##############################################################################
# Identificação do sistema operacional utilizado
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
# Identificação dos diretórios
##############################################################################

# Diretório de códigos-fonte
# Obs.: todos os arquivos com extenção ".c" colocados neste diretório serão
#       automaticamente considerados do projeto e, portanto, compilados 
#       juntamente aos demais códigos-fontes para gerar o arquivo "hex".
DIR_SRC = src

# Diretório de saída
# Obs.: todos os arquivos gerados durante a compilação do projeto serão 
#       gravados neste diretório.
DIR_OUT = out

# Diretório de bibliotecas
# Obs.: diretório onde estão os arquivos "lib*.a".
DIR_LIB = lib

# Diretório de arquivos do linker
DIR_LD = $(DIR_LIB)/linker

# Diretórios de busca por arquivos incluídos no projeto. 
# Obs.: por exemplo: ao incluir um arquivo de cabeçalho com a seguinte linha:
#       '#include "header.h"', o arquivo incluso será buscado no diretório 
#       raiz do próprio arquivo e também nestes diretórios listados abaixo.
#       Caso haja mais de um diretório, separe-os por espaço.
DIR_INC = $(wildcard lib/lib*/inc) $(DIR_SRC)

# Diretório de criação dos arquivos de dependência (*.d)
# Obs.: este diretório será criado dentro do diretório padrão de saída do 
#       projeto e possuirá arquivos de dependência após a compilação do proj.
DIR_DEP = dep

# Diretório de criação dos arquivos de listagem dos códigos-fontes
# Obs.: este diretório será criado dentro do diretório padrão de saída do 
#       projeto e possuirá arquivos de dependência após a compilação do proj.
DIR_LST = lst

##############################################################################
# Definições sobre ferramentas de desenvolvimento
##############################################################################

# Microcontrolador utilizado
#MCU = arm7tdmi
MCU = cortex-m3

# Nível de otimização da compilação: 
#  - 0 = sem otimização;
#  - s = otimização por tamanho de código;
#  - 1 = otimização nível 1;
#  - 2 = otimização nível 2;
#  - 3 = otimização nível 3.
# Obs.: utilize as otimização com cuidado, pois a execução do firmware pode
#       apresentar anomalias quando se utiliza otimizações.
#OTIMIZACAO = s
OTIMIZACAO = 0
#OTIMIZACAO = 1
#OTIMIZACAO = 2
#OTIMIZACAO = 3

# Opções de Warning
OPCOES_WARN = -Wall

# Opções de Debug
OPCOES_DEBUG = -g

# Geração de arquivos ".lst"
GERA_LST = -Wa,-adhlns=$(addprefix $(DIR_OUT)/$(DIR_LST)/, $(notdir $(addsuffix .lst, $(basename $<))))

# Geração de arquivos de dependência (*.d)
GERA_DEP = -MD -MP -MF $(DIR_OUT)/$(DIR_DEP)/$(*F).d

# Especificação de saída da compilação
ESPEC_SAIDA = -o $(DIR_OUT)/$(@F)

# Parâmetros que serão passados ao compilador
OPCOES_COMPILADOR = -mcpu=$(MCU) -mthumb $(OPCOES_WARN) $(OP_DEBUG) \
  $(OPCOES_DEBUG) -O$(OTIMIZACAO) $(OPCOES_WARN) $(OPCOES_DEBUG) $(GERA_LST) \
	$(GERA_DEP) $(ESPEC_SAIDA)
	
# Parâmetros que serão passados ao linker
OPCOES_LINKER = -Wl,--gc-sections,-Map=$@.map,-cref,-u,Reset_Handler

# Inclusão do arquivo de linker (*.ld)
INCLUDE_LD = -T $(wildcard $(DIR_SRC)/*.ld)

# Passagem dos diretórios de inclusão para o compilador
INCLUDE_DIRS = $(addprefix -I, $(DIR_INC)) -I.

# Passagem dos diretórios de biblioteca para o compilador
LIBRARY_DIRS = -L $(DIR_LIB) -L $(DIR_LD) -L .

# Prefixo das ferramentas de desenvolvimento
# Obs.: não esqueça de inserir também o último hífen.
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
# Comando de remoção dos arquivos (usado no "clean")
RM = cs-rm -f

# Comando de remoção de diretório (somente remove se ele estiver vazio)
RMDIR = rmdir 

# Comando para mover arquivos e diretórios
MV = move

# Make
MAKE = cs-make
#-----------------------------------------------------------------------------
else
# Comando de remoção dos arquivos (usado no "clean")
RM = rm -f

# Comando de remoção de diretório (somente remove se ele estiver vazio)
RMDIR = rmdir --ignore-fail-on-non-empty

# Comando para mover arquivos e diretórios
MV = mv

# Make
MAKE = make
endif
#-----------------------------------------------------------------------------

# Comando para mostrar o tamanho das seções
ELFSIZE = $(TCHAIN_PREFIX)size -B $(TARGET).elf

##############################################################################
# Definições sobre os arquivos do projeto
##############################################################################

# Listagem de todos os códigos-fonte (*.c e *.s)
ALL_SRC = $(wildcard $(DIR_SRC)/*.c) $(wildcard $(DIR_SRC)/*.s)

# Listagem de todos os códigos-fonte sem extenção
ALL_SRC_BASE = $(basename $(ALL_SRC))

# Listagem de todos os códigos-fonte sem extenção e sem diretório
ALL_SRC_BASE_NOTDIR = $(notdir $(ALL_SRC_BASE))

# Listagem de todos os arquivos ".o" gerados a partir dos códigos-fonte
ALL_OBJS = $(addprefix $(DIR_OUT)/, \
           $(addsuffix .o, $(ALL_SRC_BASE_NOTDIR)))

# Listagem de todos os arquivos de bibliotecas
ALL_LIBS = $(addsuffix .a, $(basename $(wildcard $(DIR_LIB)/lib*)))

# Nome do target a ser gerado (sem extenção)
TARGET = $(DIR_OUT)/main

##############################################################################
# Compilação do projeto e execução de comandos
##############################################################################

all: cria_dirs_out $(TARGET).elf $(TARGET).bin  $(TARGET).hex tamanho

# Construção do arquivo ".elf"
$(TARGET).elf : $(ALL_OBJS) $(ALL_LIBS)
	@echo "Linkando..."
	@$(LD) $(LDFLAGS) $(ALL_OBJS) $(ALL_LIBS) --output $@
	
# Construção do arquivo ".bin"
$(TARGET).bin : $(TARGET).elf
	@echo "Gerando o .bin..."
	@$(OBJCOPY) -O binary $< $@

# Construção do arquivo ".hex"
$(TARGET).hex : $(TARGET).elf
	@echo "Gerando o .hex..."
	@$(OBJCOPY) -O ihex $< $@

# Direciona os arquivos compilados para o diretório de saída
$(DIR_OUT)/%.o: $(DIR_SRC)/%.c
	@echo "Compilando $<..."
	@$(CC) $(CFLAGS) -c $<

# Cria a biblioteca "libstm32.a"
$(DIR_LIB)/libstm32.a: $(DIR_SRC)/stm32f10x_conf.h 
	@echo "Construindo a biblioteca 'libstm32.a'..."
	@$(MAKE) --directory=$(DIR_LIB)/libstm32 -f Makefile all

# Limpa os arquivos gerados durante a compilação do projeto
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
	@$(RM) $(DIR_OUT)/doxygen.wrn
	@-echo "@rmdir /S /Q %1 > NUL 2>&1" > rmdir_aux.bat 
	@-rmdir_aux.bat $(DIR_OUT)\docs
	@-echo "@rmdir %1 > NUL 2>&1" > rmdir_aux.bat 
	@-rmdir_aux.bat $(DIR_OUT)\$(DIR_DEP)
	@-rmdir_aux.bat $(DIR_OUT)\$(DIR_LST)
	@-rmdir_aux.bat $(DIR_OUT)\docs
	@-rmdir_aux.bat $(DIR_OUT)
	@-$(RM) rmdir_aux.bat
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

# Gravação do microcontrolador utilizando a ferramenta "STMFlashLoader.exe" 
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

# Geração da documentação do projeto
#-----------------------------------------------------------------------------
ifdef WINDOWS
doxygen:
	@echo "Gerando documentacao pelo Doxygen..."
	@-echo "@cd $(DIR_SRC) & @doxygen doxygen.cfg " > doxygen_aux.bat 
	@-echo "@xcopy /E /I /Y docs ..\\$(DIR_OUT)\\docs " >> doxygen_aux.bat 
	@-echo "@rmdir /S /Q docs " >> doxygen_aux.bat 
	@-echo "@move /Y doxygen.wrn ..\\$(DIR_OUT) " >> doxygen_aux.bat 
	@doxygen_aux.bat
	@-$(RM) doxygen_aux.bat
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
	
# Preparação dos diretórios de saída
#-----------------------------------------------------------------------------
ifdef WINDOWS
# Obs.: foi necessario criar um arquivo auxiliar para conseguir executar o 
#       comando "mkdir" corretamente no Windows.
$(DIR_OUT)/$(DIR_DEP):
	@echo "Criando diretorio $(DIR_OUT)/$(DIR_DEP)..."
	@-echo "@mkdir %1 > NUL 2>&1" > mkdir_aux.bat 
	@-mkdir_aux.bat $(DIR_OUT)\$(DIR_DEP)
	@-$(RM) mkdir_aux.bat
	@echo "Diretorio criado com sucesso!"

$(DIR_OUT)/$(DIR_LST):
	@echo "Criando diretorio $(DIR_OUT)/$(DIR_LST)..."
	@-echo "@mkdir %1 > NUL 2>&1" > mkdir_aux.bat 
	@-mkdir_aux.bat $(DIR_OUT)\$(DIR_LST)
	@-$(RM) mkdir_aux.bat
	@echo "Diretorio criado com sucesso!"
#-----------------------------------------------------------------------------
else
$(DIR_OUT)/$(DIR_DEP):
	@echo "Criando diretorio $(DIR_OUT)/$(DIR_DEP)..."
	@mkdir -p $(DIR_OUT)/$(DIR_DEP)
	@echo "Diretorio criado com sucesso!"

$(DIR_OUT)/$(DIR_LST):
	@echo "Criando diretorio $(DIR_OUT)/$(DIR_LST)..."
	@mkdir -p $(DIR_OUT)/$(DIR_LST)
	@echo "Diretorio criado com sucesso!"
endif	
#-----------------------------------------------------------------------------
	
cria_dirs_out: $(DIR_OUT)/$(DIR_DEP) $(DIR_OUT)/$(DIR_LST)

help:
	@echo "===============================================================" 
	@echo "=                            HELP                             =" 
	@echo "===============================================================" 
	@echo "Sintaxe: \"make [Comando]\" "
	@echo " " 
	@echo "Comando:"
	@echo "  help      : exibe estas informacoes."
	@echo "  clean     : limpa todos os arquivos de saida do projeto."
	@echo "  all       : compila somente os arquivos alterados do projeto."
	@echo "  clean all : recompila todo o projeto."
	@echo "  program   : grava a placa com a atual compilacao do projeto."
	@echo "  doxygen   : gera a documentacao do codigo-fonte."	
	@echo "===============================================================" 

# Inclusão dos arquivos de dependência (*.d)
#-include $(shell mkdir $(DIR_OUT)\dep > NUL &>1 ) $(wildcard $(DIR_OUT)/$(DIR_DEP)/*.d)

# Include the dependency files.
-include -$(wildcard $(DIR_OUT)/$(DIR_DEP)/*.d)
	
.DEFAULT_GOAL := all
	
.PHONY: all clean program cria_dirs_out help doxygen 
