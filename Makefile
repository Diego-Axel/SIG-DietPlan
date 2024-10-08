
OBJS = main.o \

default: sigDiet

sigDiet: $(OBJS)
	gcc -o sigDiet $(OBJS)

main.o: main.c 
	gcc -c main.c
	
