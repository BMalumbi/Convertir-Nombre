# Syntaxe
# -------
# cible : dependances
#	commande # utiliser obligatoirement la touche TAB
CC = gcc
EXEC = program.exe
OBJ = call.o DecToBin.o DecToHexa.o BinToHexa.o
CFLAGS = -Wall

all : $(EXEC)
	./$(EXEC)

$(EXEC) : $(OBJ)
	$(CC) $(OBJ) -o program.exe

call.o : call.c
	$(CC) -c call.c

DecToBin.o : DecToBin.c
	$(CC) -c DecToBin.c

DecToHexa.o : DecToHexa.c
	$(CC) -c DecToHexa.c

BinToHexa.o : BinToHexa.c
	$(CC) -c BinToHexa.c

run : $(EXEC)
	./$(EXEC)
clean :
	rm -rf *.o

