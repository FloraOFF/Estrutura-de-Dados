#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int ordena (int tam, int A[])
{
	int lsup, bolha, aux, i;
	lsup = tam - 1;
	
	while (lsup > 0) {
		bolha = 0;
		for (i = 0; i < lsup; i++) {
			if (A[i] > A[i+1]) {
				aux = A[i];
				A[i] = A[i + 1];
				A[i + 1] = aux;
				bolha = i;
			}
		}	
		lsup = bolha;
	}
}

//Função buscaBinaria()
int buscaBinaria (int n, int num, int A[]) 
{
	int esquerda = -1, direita = n;
	while (esquerda < direita - 1) {
		int medio = (esquerda + direita)/2;
		if (A[medio] < num)
			esquerda = medio;
		else
			direita = medio;
	}
	return direita;
} //Fim da função buscaBinaria


int main (void)
{
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int tam, i, busca;
	printf ("\n\nEste programa localiza um número em um vetor A (em ordem crescente)!");
	printf ("\n\nInforme o tamanho de A: ");
	scanf ("%d", &tam);
	int A[tam];
	if (tam > 0) {
		printf ("\n\n\n");
		system ("Pause");
		system ("cls");
		printf ("\n\nInforme os elementos de A!");
		for (i = 0; i < tam; i++) {
			printf ("\n\nInforme o elemento na posição A[%d]: ", i);
			scanf ("%d", &A[i]);
		}
		printf ("\n\n\n");
		system ("Pause");
		system ("cls");
		
		ordena(tam, A);
		
		printf ("\n\nA = [");
		for (i = 0; i < tam; i++) 
			printf (" %d ", A[i]);
		printf("]");
		
		printf ("\n\nInforme um número para busca: ");
		scanf ("%d", &busca);
		
		printf ("\n\nO número %d foi localizado na posição %d!", busca, buscaBinaria(tam, busca, A));	
	}
	else
		printf ("\n\nInforme um tamanho válido para A!");
	
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}
