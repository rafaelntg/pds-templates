# Arquivo de construção (all) e limpeza (clean) da biblioteca "libstm32.a"
#
# Pré-requisitos:
#   - Toolchain GNU Sourcery G++ Lite
#   - Variável de sistema PATH contendo a pasta "bin" do Sourcery G++ Lite 

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

COMPILE_OPTS = -mcpu=cortex-m3 -mthumb -Wall -g -O0
INCLUDE_DIRS = -I . -I inc -I $(PATH_PRJ_SRC) -I $(PATH_LIBSTM32_HEADERS)
LIBRARY_DIRS = -L .

#Compilador
CC = arm-none-eabi-gcc
CFLAGS = $(COMPILE_OPTS) $(INCLUDE_DIRS)

#Assembler
AS = arm-none-eabi-as
ASFLAGS = $(COMPILE_OPTS) -c

#Ferramenta utilizada para construir a biblioteca
AR = arm-none-eabi-ar
ARFLAGS = cr

#Caminho do código-fonte da biblioteca
PATH_LIBSTM32_SRC = ./src

#Caminho dos arquivos de cabeçalho da biblioteca
PATH_LIBSTM32_HEADERS = ./inc

#Diretório onde será criada a biblioteca (*.a)
LIBSTM32_OUT = ../libstm32.a

#Caminho do código-fonte do projeto que utiliza esta biblioteca
#Obs.: O diretório do projeto deve possuir o arquivo "stm32f10x_conf.h".
PATH_PRJ_SRC = ../../src

LIBSTM32_SRC = $(wildcard $(PATH_LIBSTM32_SRC)/*.c) \
               $(wildcard $(PATH_LIBSTM32_SRC)/*.s)

LIBSTM32_OBJS = $(addsuffix .o, $(basename $(LIBSTM32_SRC)))

# Compila os arquivos '.c'
$(PATH_LIBSTM32_SRC)/%.o: $(PATH_LIBSTM32_SRC)/%.c
	@echo "Compilando $<..."
	@$(CC) $(CFLAGS) -o $@ -c $<
	
$(LIBSTM32_OUT): $(LIBSTM32_OBJS)
	@echo "Construindo a biblioteca 'libstm32.a'..."
	@$(AR) $(ARFLAGS) $@ $(LIBSTM32_OBJS)

$(LIBSTM32_OBJS): $(PATH_PRJ_SRC)/stm32f10x_conf.h

#all: Constrói a biblioteca "libstm32.a"
all: $(LIBSTM32_OUT)	
  
#clean: mantém somente os códigos-fonte da biblioteca
clean:
	@echo "Limpando os arquivos da biblioteca 'libstm32.a'..."
	@-$(RM) $(PATH_LIBSTM32_SRC)/*.o $(LIBSTM32_OUT)

