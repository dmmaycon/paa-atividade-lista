#include "Aplicacao.h"


int main() {

    pLista lista = NULL;

    int validacao = criarLista(&lista, 100);
    printf("\nCriando a lista duplamente ligada. Retorno da operacação: %d", validacao);

    imprimeListaLigada(&lista);

    validacao = inserirInicio(&lista, 200);
    printf("\nInserindo um valor no inicio. Retorno da operacação: %d", validacao);

    // destruirLista(&lista);
    imprimeListaLigada(lista);
}