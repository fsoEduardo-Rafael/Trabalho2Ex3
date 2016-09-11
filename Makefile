matriz: main.o
	g++ $(CFLAGS) -o matriz main.o -lpthread 
main.o: main.c 
	gcc $(CFLAGS) -c main.c
clean:
	rm -f *.o matriz