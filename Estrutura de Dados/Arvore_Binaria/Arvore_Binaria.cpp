#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Struct no
typedef struct no {
	struct no *esquerda;
	struct no *direita;
	int numero;
} No; //Fim da struct no

//Função *doisFilhos ()
no *doisFilhos (no *root) {
	if (root == NULL)
		return NULL;
	else if (root->esquerda == NULL) 
		return root;
	else 
		return root->esquerda;
} //Fim *doisFilhos()

//Procedimento inserirNo ()
void inserirNo (No **raiz, int num) {
	if (*raiz == NULL) {
		No *aux = (No *) malloc(sizeof(No));
		aux->numero = num;
		aux->esquerda = NULL;
		aux->direita = NULL;
		*raiz = aux;
		printf ("\n\nO número %d foi inserirdo com sucesso na árvore binária!\n\n", num);
		system ("Pause");
		system ("cls");
		return;
	}
	
	if (num < (*raiz)->numero) { //esquerda
		inserirNo(&(*raiz)->esquerda, num);
		printf ("\n\nO número %d foi inserirdo com sucesso na árvore binária!\n\n", num);
		system ("Pause");
		system ("cls");
		return;
	}
	
	if (num > (*raiz)->numero) { //direita
		inserirNo(&(*raiz)->direita, num);
		printf ("\n\nO número %d foi inserirdo com sucesso na árvore binária!\n\n", num);
		system ("Pause");
		system ("cls");
		return;
	}
	
	printf ("\n\nO número %d já foi inserido anteriormente na árvore binária!\n\n");		
} //Fim do procedimento inserirNo()

//Procedimento removerNo()
void removerNo (no **raiz, int num) {
	if (num < (*raiz)->numero) {
		removerNo(&(*raiz)->esquerda, num);	
	}
	else if (num > (*raiz)->numero) {
		removerNo(&(*raiz)->direita, num);
	}
	else if ((*raiz)->esquerda != NULL && (*raiz)->direita != NULL) {
		
	}
} //Fim do procedimento removerNo()

int main (int argc, char *argv[]) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0; 
}

