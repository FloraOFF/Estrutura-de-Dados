#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Struct no
typedef struct no {
	struct no *esquerda;
	struct no *direita;
	int numero;
} No; //Fim da struct no

//FunÃ§Ã£o *doisFilhos ()
no *doisFilhos (no *root) {
	if (root == NULL)
		return NULL;
	else if (root->esquerda == NULL) 
		return root;
	else 
		return root->esquerda;
} //Fim *doisFilhos()

//Função *criarNo()
No *criarNo () {
	return NULL;
} //Fim da Função *criarNo()

//Procedimento inserirNo ()
void inserirNo (No **raiz, int num) {
	if (*raiz == NULL) {
		No *aux = (No *) malloc(sizeof(No));
		aux->numero = num;
		aux->esquerda = NULL;
		aux->direita = NULL;
		*raiz = aux;
		printf ("\n\nO número %d já foi inserido anteriormente na Árvore Binária!\n\n", num);
		system ("Pause");
		system ("cls");
		return;
	}
	
	if (num < (*raiz)->numero) { //esquerda
		inserirNo(&(*raiz)->esquerda, num);
		printf ("\n\nO número %d já foi inserido anteriormente na Árvore Binária!\n\n", num);
		system ("Pause");
		system ("cls");
		return;
	}
	
	if (num > (*raiz)->numero) { //direita
		inserirNo(&(*raiz)->direita, num);
		printf ("\n\nO número %d já foi inserido anteriormente na Árvore Binária!\n\n", num);
		system ("Pause");
		system ("cls");
		return;
	}
	
	printf ("\n\nO número %d já foi inserido anteriormente na Árvore Binária!\n\n", num);		
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
//Pesquisando e imprimindo em ordem simÃ©trica
void pesquisaOrdemSimetrica(no *raiz) { //SuposiÃ§Ã£o: usuÃ¡rio encaminha raiz da Ã¡rvore
	if (raiz == NULL)
		return;
	pesquisaOrdemSimetrica(raiz->esquerda);
	printf ("\n%d", raiz->numero);
	pesquisaOrdemSimetrica(raiz->direita);
} //Fim do procedimento pesquisaOrdemSimetrica()

//Procedimento pesquisaPreOrdem()
//Pesquisando e imprimindo em prÃ©-ordem
void pesquisaPreOrdem (no *raiz) {
	if (raiz == NULL)
		return;
	printf ("\n%d", raiz->numero);
	pesquisaPreOrdem(raiz->esquerda);
	pesquisaPreOrdem(raiz->direita);
} //Fim do procedimento pesquisaPreOrdem()

//Procedimento pesquisaPosOrdem()
//Pesquisando e imprimindo em prÃ©-ordem
void pesquisaPosOrdem (no *raiz) {
	if (raiz == NULL)
		return;
	pesquisaPreOrdem(raiz->esquerda);
	pesquisaPreOrdem(raiz->direita);
	printf ("\n%d", raiz->numero);
} //Fim do procedimento pesquisaPosOrdem()

//FunÃ§Ã£o imprimirArvOrdemSimetrica()


int main (int argc, char *argv[]) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int op, op1, valor;
	No *no = criarNo();

	while (1){
	printf ("\n\nEste programa manipula uma árvore binária!\n\n");
	printf ("\n\nMENU\n\n");
	printf ("\n\n0 - Encerrar o programa");
	printf ("\n\n1 - Inserir nó");
	printf ("\n\n2 - Remover nó\n\n");
	//printf ("\n\n3 - Pesquisa na árvore binária\n\n");
	printf ("\n\nInforme a opção desejada: ");
	scanf ("%d", &op);
	
	printf ("\n\n");
	system ("Pause");
	system ("cls");
	
	switch (op) {
		case 1:
			printf ("\n\nInforme um número a ser inserido na árvore binária: ");
			scanf ("%d", &valor);
			inserirNo (&no, valor);
			printf ("\n\n");
			system ("Pause");
			system ("cls");
			break;
		
		case 2:
			printf ("\n\nInforme qual o número que deseja ser removido: ");
			scanf ("%d", &valor);
			removerNo (&no, valor);
			printf ("\n\n");
			system ("Pause");
			system ("cls");
			break;
			
		case 3: 
			printf("\n\nMENU\n\n");
			printf ("")
			break;
			
		default:
			system ("cls");
			printf ("\n\nObrigado por utilizar nosso programa!\n\n");
			system ("Pause");
			exit(0);
	}
}
	return 0;
}
