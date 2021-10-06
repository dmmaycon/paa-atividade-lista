SHELL=/bin/sh
CC=gcc
CFLAGS= -O3

default:	aplicacao

LDDE.o:	LDDE.c LDDE_publico.h LDDE_privado.h
			$(CC) $(CFLAGS) -c LDDE.c -o LDDE.o

aplicacao:	Aplicacao.c  Aplicacao.h LDDE.o
	$(CC) $(CFLAGS) Aplicacao.c LDDE.o -o aplicacao

clean:
	rm -f aplicacao LDDE.o  *.*~ Makefile~

all: aplicacao
