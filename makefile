CC = gcc
CFLAGS = -Wall

OBJS = game.o \
display.o \
move.o

all :
	make stand_off

stand_off : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

.c.o:
	$(CC) $(CFLAGS) -c $*.c

clean : 
	rm -f *.o
