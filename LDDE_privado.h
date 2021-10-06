#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "LDDE_publico.h"

struct lista {
    struct tipoAplicacao *valor;               
    struct lista *proximo, *anterior;  
} typedef Lista;

