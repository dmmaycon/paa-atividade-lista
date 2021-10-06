#include "LDDE_privado.h"

/**
 * Cria uma lista (um no inicial) e retorna para a aplicação
 */
int criarLista(ppLista lista, int valor) {

    (*lista) = (pLista*) malloc(sizeof(pLista));
    (*lista)->valor = valor;
    (*lista)->anterior = NULL;
    (*lista)->proximo  = NULL;
    
    return SUCESSO;
}


int destruirLista(ppLista lista) {
    if (lista != NULL) {
        // guarda a referencia do proximo
        pLista* proximo = (*lista)->proximo;
        // limpa o no atual
        free(lista);    
        destruirLista(proximo);    
    }
}

int inserirInicio(ppLista lista, int valor) {
    
    if ((*lista)->anterior == NULL) {
        pLista listaTemp = NULL;
        if (!criarLista(&listaTemp, valor)) {
            return FRACASSO;
        }
        listaTemp->proximo = lista;
        (*lista)->anterior = listaTemp;
        return SUCESSO;
    }
    inserirInicio((*lista)->anterior, valor);
}


int inserirFim(ppLista lista, int valor);
int inserirPosicao(ppLista lista, int valor, int posicao);

int removerInicio(ppLista lista);
int removerFim(ppLista lista);
int removerPosicao(ppLista lista, int posicao);

void imprimeListaLigada(ppLista lista) {
    buscaInicioLista(&lista);
}

int buscaInicioLista(ppLista lista) {
   
   if ((*lista)->anterior == NULL) {
       return SUCESSO;
   }


   while ((*lista)->anterior != NULL)
   {
       (*lista)->anterior;
   }
    
   
}