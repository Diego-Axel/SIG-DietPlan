# Makefile

# Compiler
CC := gcc

# Compiler flags
CFLAGS := -Wall -Wextra -pedantic

# Source files
SRCS := main.c interfacePrincipal/interfaces.c clientes/clientes.c dietas/dietas.c profissional/profissional.c relatorio/relatorio.c utilitarios/utis.c validadores/validadores.c

# Object files
OBJS := $(SRCS:.c=.o)

# Header files
HDRS := interfacePrincipal/interfaces.h clientes/clientes.h dietas/dietas.h profissional/profissional.h relatorio/relatorio.h utilitarios/utis.h validadores/validadores.h

# Executable name
TARGET := main

# Windows-specific settings
ifeq ($(OS),Windows_NT)
    RM := del /Q
    TARGET := $(TARGET).exe
else
    RM := rm -f
endif

# Default target
all: $(TARGET)

# Compile object files
%.o: %.c $(HDRS)
	$(CC) $(CFLAGS) -c $< -o $@

# Link object files to create executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

# Run the executable
run: $(TARGET)
	./$(TARGET)

# Clean up object files and executable
clean:
	$(RM) $(OBJS) $(TARGET)

# Reference: https://github.com/Lleusxam/c-recipes/blob/main/makefile