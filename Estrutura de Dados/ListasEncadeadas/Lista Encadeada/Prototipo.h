#include "lista.h"

struct lista;

typedef struct lista Lista;

Lista* criar_lista();

Lista* inserir_lista(Lista* l, int novo_id, char* novo_nome, float novo_peso);

void Exibir(Lista* l);

void imprimir_elemento_lista (Lista *l, int codigo_busca);

Lista* busca_elemento (Lista* l, int codigo_busca);

int lista_vazia (Lista* l);

Lista* remover_elemento_lista (Lista* l, int codigo_busca);

Lista* liberar_lista (Lista* l);

int listas_iguais (Lista* l1, Lista* l2);

int busca_elemento_repeticao (Lista* l, int codigo_busca);
