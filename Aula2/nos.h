typedef struct lista ListaInteiros;

ListaInteiros* lista_cria();

ListaInteiros* lista_insere(ListaInteiros* l, int i);

void lista_imprime(ListaInteiros* l);

int lista_vazia(ListaInteiros* l);

ListaInteiros* lista_busca(ListaInteiros* l, int i);

ListaInteiros* lista_insere_ordenado(ListaInteiros* l, int i);

ListaInteiros* lista_remove_elemento(ListaInteiros* l, int i);

void lista_exclui(ListaInteiros*l);