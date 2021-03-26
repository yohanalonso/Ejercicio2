# Objetivo predeterminado
all: main

# Objetivos que no son archivos.
.PHONY: all clean


# directorios
HDIR    = include
CPPDIR  = src
ODIR    = obj

#MODULOS = dtpartida dtvideojuego dtfechahora jugador partida sistema tipojuego videojuego
MODULOS = classA classB classC

# lista de archivos, con directorio y extensión
HS   = $(MODULOS:%=$(HDIR)/%.h)
CPPS = $(MODULOS:%=$(CPPDIR)/%.cpp)
OS   = $(MODULOS:%=$(ODIR)/%.o)

PRINCIPAL=main
EJECUTABLE=main


# compilador
CC = g++
# opciones de compilación
CCFLAGS = -Wall -Werror -I$(HDIR) -g
# -g debuggers

$(ODIR)/$(PRINCIPAL).o:$(PRINCIPAL).cpp 
	$(CC) $(CCFLAGS) -c $< -o $@

# cada .o depende de su .cpp
# $@ se expande para tranformarse en el objetivo
# $< se expande para tranformarse en la primera dependencia
$(ODIR)/%.o: $(CPPDIR)/%.cpp $(HDIR)/%.h
	$(CC) $(CCFLAGS) -c $< -o $@

# $^ se expande para tranformarse en todas las dependencias
$(EJECUTABLE): $(ODIR)/$(PRINCIPAL).o $(MODULOS:%=$(ODIR)/%.o)
	$(CC) $(CCFLAGS) $^ -o $@

# borra binarios
clean:
	rm -f $(EJECUTABLE) $(ODIR)/$(PRINCIPAL).o $(OS)
	#@rm -f *~ $(HDIR)/*~ $(CPPDIR)/*~ $(TESTDIR)/*~ 
