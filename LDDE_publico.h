struct lista typedef Lista;
struct tipoAplicacao typedef TipoAplicacao;

Lista *cria(TipoAplicacao *valor);
Lista *insere(Lista *slista, TipoAplicacao *valor, int pos);
Lista *retira(Lista *slista, int pos);
int pesquisa(Lista *slista, TipoAplicacao *valor);
