##CFLAGS=-std=c99

all: app

app:
	gcc sort.c get_opt.c array.c main.c -o app.out 

run: build
	./app

clean:
	rm -f *.o
	rm -f app
