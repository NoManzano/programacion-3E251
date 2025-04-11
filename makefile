PROYECTO = programa
LIB := -lftxui-component -lftxui-dom -lftxui-screen
CXX := -std=c++17
SRC := src
INCLUDE := include
BIN := bin
EXE := $(BIN)/$(PROYECTO)

$(EXE) : $(SRC)/memoria.cpp
	c++ $< -o $@ $(LIB) $(CXX) -I$(INCLUDE)

clean : 
	rm $(BIN)/*

run : $(EXE)
	./$<
#Practica de archivo
archivo: bin/archivo
	./$<

bin/archivo: src/archivo.cpp
	c++ $< -o $@ -I$(INCLUDE)
#Practica de binario
binario: bin/binario
	./$<

bin/binario: src/binario.cpp
	c++ $< -o $@ -I$(INCLUDE)