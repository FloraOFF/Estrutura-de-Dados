#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//Protótipo de elemento/registro da lista
typedef struct lista_elemento {
	int id_pessoa;
	char *nome;
	float peso;
	struct lista_elemento *proximo;
	struct lista_elemento *anterior;
}Elemento; //fim do protótipo

//Protótipo de controle geral da lista
typedef struct lista_controle {
	struct lista_elemento *inicio;
	struct lista_elemento *fim;
	int tamanho;
}Lista; //fim do protótipo

//Procedimento inicializa_lista()
void lista_inicializa (Lista *lista) {
	lista->inicio = NULL;
	lista->fim = NULL;
	lista->tamanho = 0;
} //fim do procedimento inicializa_lista()

//Função para inserir na lista vazia
int inserir_lista_vazia (Lista *lista, int novo_id, char *novo_nome, float novo_peso) {
	Elemento *novo_elemento = (Elemento*)malloc(sizeof(Elemento));
	if(novo_elemento == NULL)
		return -1;
	novo_elemento->id_pessoa = novo_id;
	strcpy (novo_elemento->nome, novo_nome);
	novo_elemento->peso = novo_peso;
	//novo_elemento->anterior = NULL;
	//novo_elemento->proximo = NULL;
	
	//Lista
	lista->inicio = novo_elemento;
	lista->fim = novo_elemento;
	lista->tamanho++;
	return 0;  
} //fim da função inserir_na_lista_vazia()

//função inserir_inicio_lista()
int inserir_lista_inicio (Lista *lista, int novo_id, char *novo_nome, float novo_peso) {
	Elemento *novo_elemento = (Elemento*)malloc(sizeof(Elemento));
	if(novo_elemento == NULL)
		return -1;
	
	//Elemento
	novo_elemento->id_pessoa = novo_id;
	strcpy (novo_elemento->nome, novo_nome);
	novo_elemento->peso = novo_peso;
	novo_elemento->anterior = NULL;
	novo_elemento->proximo = lista->inicio;
	
	//Lista
	lista->inicio = novo_elemento;
	lista->tamanho++;
	return 0;  
}//fim da função inserir_inicio_lista()

//função inserir_fim_lista()
int inserir_lista_fim (Lista *lista, int novo_id, char *novo_nome, float novo_peso) {
	Elemento *novo_elemento = (Elemento*)malloc(sizeof(Elemento));
	if(novo_elemento == NULL)
		return -1;
	
	//Elemento	
	novo_elemento->id_pessoa = novo_id;
	strcpy (novo_elemento->nome, novo_nome);
	novo_elemento->peso = novo_peso;
	novo_elemento->anterior = lista->fim;
	novo_elemento->proximo = NULL;
	
	//Lista
	lista->fim = novo_elemento;
	lista->tamanho++;
	return 0;  
}//fim da função inserir_fim_lista()

//função inserir_meio_lista_antes()
int inserir_lista_meio_antes (Lista *lista, int novo_id, char *novo_nome, float novo_peso, int posterior) {
	int i;
	Elemento *novo_elemento = (Elemento*)malloc(sizeof(Elemento));
	Elemento *percorre_lista;
	if(novo_elemento == NULL)
		return -1;
	
	//Elemento	
	novo_elemento->id_pessoa = novo_id;
	strcpy (novo_elemento->nome, novo_nome);
	novo_elemento->peso = novo_peso;
	
	percorre_lista = lista->inicio;
	for (i = 1; i < posterior; i++) {
		percorre_lista = percorre_lista->proximo;	
	} 
	
	novo_elemento->proximo = percorre_lista;
	novo_elemento->anterior = percorre_lista->anterior;
	
	if (percorre_lista == NULL)
		lista->inicio = novo_elemento;
	else {
		percorre_lista->anterior->proximo = novo_elemento;
		percorre_lista->anterior = novo_elemento;
	}
		
	//Lista
	lista->tamanho++;
	return 0;  
}//fim da função inserir_meio_lista_antes()

//função inserir_meio_lista_depois()
int inserir_lista_meio_depois (Lista *lista, int novo_id, char *novo_nome, float novo_peso, int anterior) {
	int i;
	Elemento *novo_elemento = (Elemento*)malloc(sizeof(Elemento));
	Elemento *percorre_lista;
	if(novo_elemento == NULL)
		return -1;
	
	//Elemento	
	novo_elemento->id_pessoa = novo_id;
	strcpy (novo_elemento->nome, novo_nome);
	novo_elemento->peso = novo_peso;
	
	percorre_lista = lista->inicio;
	for (i = 1; i < anterior; i++) {
		percorre_lista = percorre_lista->proximo;	
	} 
	
	novo_elemento->anterior = percorre_lista;
	novo_elemento->proximo = percorre_lista->proximo;
	
	if (percorre_lista == NULL)
		lista->inicio = novo_elemento;
	else {
		percorre_lista->proximo = novo_elemento;
		percorre_lista->proximo->anterior = novo_elemento;
	}
	
	//Lista
	lista->tamanho++;
	return 0;  
}//fim da função inserir_meio_lista_antes()

//função remover_elemento_lista()
int remover_lista_elemento (Lista *lista, int posicao) {
	int i;
	Elemento *percorre_lista, *elemento_removido;
	
	if (lista->tamanho == 0)
		return -1;
	
	if (posicao == 1) { //remoção no início da lista
		elemento_removido = lista->inicio;
		lista->inicio = lista->inicio->proximo;
		
		if (lista->inicio == NULL)
			lista->fim = NULL;
		else
			lista->inicio->anterior = NULL;
	}
	else if (posicao == lista->tamanho) { //remoção no final da lista
		elemento_removido = lista->fim;
		lista->fim->anterior->proximo = NULL;
		lista->fim = lista->fim->anterior;
	}
	else { //remoção no meio da lista
		percorre_lista = lista->inicio;
		for (i = 1; i < posicao; i++)
			percorre_lista = percorre_lista->proximo;
		
		elemento_removido = percorre_lista;
		elemento_removido->anterior->proximo = elemento_removido->proximo;
		elemento_removido->proximo->anterior = elemento_removido->anterior;
	}

	free(elemento_removido->nome);
	
	free(elemento_removido);
	lista->tamanho--;
	return 0;	
}//fim da função remover_elemento_lista()

//função exibir_lista()
void lista_exibir(Lista *lista) {
	Elemento *percorre_lista;
	percorre_lista = lista->inicio;
	printf ("\n\nElementos da lista");
	while (percorre_lista->proximo != NULL){
		printf ("\n\n\nId do usuário: %d.", percorre_lista->id_pessoa);
		printf ("\n\nNome do usuário: %s.", percorre_lista->nome);
		printf ("\n\nPeso do usuário (kg): %.2f.", percorre_lista->peso);
		percorre_lista = percorre_lista->proximo;
	}
}//fim função exibir_lista()

//função exibir_lista_inversa()
void lista_exibir_reversa(Lista *lista) {
	Elemento *percorre_lista;
	percorre_lista = lista->fim;
	printf ("\n\nElementos da lista");
	while (percorre_lista->anterior != NULL){
		printf ("\n\n\nId do usuário: %d.", percorre_lista->id_pessoa);
		printf ("\n\nNome do usuário: %s.", percorre_lista->nome);
		printf ("\n\nPeso do usuário (kg): %.2f.", percorre_lista->peso);
		percorre_lista = percorre_lista->anterior;
	}
}//fim função exibir_lista_inversa()

//função liberar_lista()
void liberar_a_lista (Lista *lista) {
	while (lista->tamanho > 0) 
		remover_lista_elemento (lista, 1);	
}//fim da função liberar_lista()

//função limpar ()
void limpar () {
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");
}//fim da função limpar()

//função busca_elemento ()
Lista* elemento_busca (Lista *lista, int codigo_busca) {
	Elemento *percorre_lista;
	percorre_lista = lista->inicio;
	while (percorre_lista->proximo != NULL) {
		if (percorre_lista->id_pessoa == codigo_busca) {
			//return percorre_lista;
			printf ("\n\nElemento localizado!\n\n");
		}
	}
	printf ("\n\nElemento não localizado!\n\n");
	return NULL;
} 
//fim da função busca_elemento ()

