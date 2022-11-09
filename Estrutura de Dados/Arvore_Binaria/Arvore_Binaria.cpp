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
		no *auxiliar = NULL;
		auxiliar = doisFilhos((*raiz)->direita);
		(*raiz)->numero = auxiliar->numero;
		removerNo(&(*raiz)->direita, (*raiz)->numero); 
	}
	else {
		no *auxiliar = (*raiz);
		if ((*raiz)->esquerda == NULL) {
			(*raiz) = (*raiz)->direita;
		}
		else {
			(*raiz) = (*raiz)->esquerda;
		}
		free (auxiliar);
		system ("cls");
		printf ("\n\nNúmero removido com sucesso!\n\n");
		system ("Pause");
	}
} //Fim do procedimento removerNo()

//Procedimento pesquisaOrdemSimetrica()
//Pesquisando e imprimindo em ordem simétrica
void pesquisaOrdemSimetrica(no *raiz) { //Suposição: usuário encaminha raiz da árvore
	if (raiz == NULL)
		return;
	pesquisaOrdemSimetrica(raiz->esquerda);
	printf ("\n%d", raiz->numero);
	pesquisaOrdemSimetrica(raiz->direita);
} //Fim do procedimento pesquisaOrdemSimetrica()

//Procedimento pesquisaPreOrdem()
//Pesquisando e imprimindo em pré-ordem
void pesquisaPreOrdem (no *raiz) {
	if (raiz == NULL)
		return;
	printf ("\n%d", raiz->numero);
	pesquisaPreOrdem(raiz->esquerda);
	pesquisaPreOrdem(raiz->direita);
} //Fim do procedimento pesquisaPreOrdem()

//Procedimento pesquisaPosOrdem()
//Pesquisando e imprimindo em pré-ordem
void pesquisaPosOrdem (no *raiz) {
	if (raiz == NULL)
		return;
	pesquisaPreOrdem(raiz->esquerda);
	pesquisaPreOrdem(raiz->direita);
	printf ("\n%d", raiz->numero);
} //Fim do procedimento pesquisaPosOrdem()

//Função imprimirArvOrdemSimetrica()

int main (int argc, char *argv[]) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0; 
}

