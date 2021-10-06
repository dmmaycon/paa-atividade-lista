#include "Aplicacao.h"


int main() {

    Lista *lista = NULL;
    int searching;
    TipoAplicacao taInt = {INTEIRO, 10};
    TipoAplicacao taFloat = {FLOAT, 20.5};


    lista = cria(&taInt);
    lista = insere(lista, &taFloat, 1);
    
    searching = pesquisa(lista, &taFloat);
    printf("\n%d\n", searching);

    lista = retira (lista, 1);
    lista = retira (lista, 1);

    imprime(lista);
    searching = pesquisa(lista, &taFloat);
    printf("\n%d\n", searching);
    return 0;
}