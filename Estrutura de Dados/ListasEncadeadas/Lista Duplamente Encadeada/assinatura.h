#include "Lista_Duplamente_Encadeada.h"

struct lista_elemento;

struct lista_controle;

void lista_inicializa (Lista *lista);

int inserir_lista_vazia (Lista *lista, int novo_id, char *novo_nome, float novo_peso);

int inserir_lista_inicio (Lista *lista, int novo_id, char *novo_nome, float novo_peso);

int inserir_lista_fim (Lista *lista, int novo_id, char *novo_nome, float novo_peso);

int inserir_lista_meio_antes (Lista *lista, int novo_id, char *novo_nome, float novo_peso, int posterior);

int inserir_lista_meio_depois (Lista *lista, int novo_id, char *novo_nome, float novo_peso, int anterior);

int remover_lista_elemento (Lista *lista, int posicao);

void lista_exibir(Lista *lista);

void lista_exibir_inversa(Lista *lista);

void liberar_a_lista (Lista *lista);

void limpar ();

Lista* elemento_busca (Lista *lista, int codigo_busca);


