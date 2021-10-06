#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "LDDE_publico.h"

#define FRACASSO 0
#define SUCESSO 1

struct lista {
    int valor;               
    struct lista *anterior, *proximo;  
};