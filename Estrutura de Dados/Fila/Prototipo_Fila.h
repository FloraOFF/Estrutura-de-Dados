#include "Fila.h"

struct Fila;

void criar_fila (struct Fila *fila, int tam_fila);

void inserir_elemento_fila (struct Fila *fila, int novo_elemento);

int remover_elemento_fila(struct Fila *fila);

int verifica_fila_vazia(struct Fila *fila);

void exibir_fila (struct Fila *fila);

int verifica_fila_cheia (Fila *fila);
