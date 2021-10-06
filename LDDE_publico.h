struct lista typedef *pLista, **ppLista;

int criarLista(ppLista lista, int valor);
int destruirLista(ppLista lista);

int inserirInicio(ppLista lista, int valor);
int inserirFim(ppLista lista, int valor);
int inserirPosicao(ppLista lista, int valor, int posicao);

int removerInicio(ppLista lista);
int removerFim(ppLista lista);
int removerPosicao(ppLista lista, int posicao);

int buscaInicioLista(ppLista lista); 

void imprimeListaLigada(ppLista lista);