todos: hi memory punteros fizzbuzz array sort

sort: sort.o fsort.o
	gcc -o sort sort.o fsort.o

sort.o: sort.c fsort.h
	gcc -c sort.c

fsort.o: fsort.c fsort.h
	gcc -c fsort.c

%: %.o
	gcc -o $@ $<

%.o: %.c
	gcc -c $<

limpiar:
	rm -f *.o

limpiar_mucho: limpiar
	rm -f hi memory

# Delete the default suffixes
.SUFFIXES:

# Do not delete intermediate files
.SECONDARY:
