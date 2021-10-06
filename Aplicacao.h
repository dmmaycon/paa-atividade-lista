#include <stdio.h>
#include <stdlib.h>
#include "LDDE_publico.h"

// tipos da aplicação
#define INTEIRO 1
#define FLOAT   2

struct tipoAplicacao {
    int codigoTipo;
    union {
        int iElemento;
        float fElemento;
    } elemento;    
} typedef TipoAplicacao;

void imprime(Lista *slista);


