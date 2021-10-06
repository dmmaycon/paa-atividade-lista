#include "LDDE_privado.h"

Lista *cria(TipoAplicacao *valor)
{
    Lista *nova_Lista = (Lista *)malloc(sizeof(Lista));
    nova_Lista->valor = valor;
    nova_Lista->proximo = NULL;
    nova_Lista->anterior = NULL;
    return nova_Lista;
}

Lista *insere(Lista *lista, TipoAplicacao *valor, int posicao)
{
    if (lista == NULL)
    {
        lista = cria(valor);
        return lista;
    }

    if (posicao > 0)
    {
        Lista *copia = lista, *temporario = copia;
        int flag = 1, index = 1, size = 0;

        while (temporario != NULL)
        {
            size++;
            temporario = temporario->proximo;
        }

        if (posicao == 1)
        {
            Lista *novo_no = cria(valor);
            novo_no->proximo = copia;
            copia->anterior = novo_no;
            lista = novo_no;
            return lista;
        }

        if (size + 2 > posicao)
        {
            while (copia->proximo != NULL && index < posicao)
            {
                flag++;
                index++;
                copia = copia->proximo;
            }

            Lista *novo_no = (Lista *)malloc(sizeof(Lista));
            novo_no->valor = valor;

            if (flag == posicao)
            {
                copia->anterior->proximo = novo_no;
                novo_no->proximo = copia;
                novo_no->anterior = copia->anterior;
                copia->anterior = novo_no;
            }

            if (flag < posicao)
            {
                novo_no->proximo = copia->proximo;
                novo_no->anterior = copia;
                copia->proximo = novo_no;
            }
        }
        return lista;
    }
}

Lista *retira(Lista *lista, int posicao)
{
    if (lista == NULL)
        return lista;

    if (posicao > 0)
    {
        Lista *copia = lista, *temporario = copia;
        int flag = 1, index = 1, size = 0;

        while (temporario != NULL)
        {
            size++;
            temporario = temporario->proximo;
        }

        if (posicao == 1)
        {
            if (size == 1)
                return NULL;
            copia = copia->proximo;
            copia->anterior = NULL;
            return copia;
        }

        if (size + 2 > posicao)
        {
            while (copia->proximo != NULL && index < posicao)
            {
                flag++;
                index++;
                copia = copia->proximo;
            }

            if (flag == posicao)
            {
                if (copia->proximo != NULL)
                {
                    copia->anterior->proximo = copia->proximo;
                    copia->proximo->anterior = copia->anterior;
                }

                else
                    copia->anterior->proximo = NULL;
            }
        }
        return lista;
    }
}

int pesquisa(Lista *lista, TipoAplicacao *valor)
{
    if (lista == NULL)
        return 0;
    if (lista->valor == valor)
        return 1;
    pesquisa(lista->proximo, valor);
}
