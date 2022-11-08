#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

//Struct Fila
struct Fila {
	int primeiro_elemento;
	int ultimo_elemento;
	int quant_elementos;
	int tamanho_fila;
	int *fila_completa;
}; //Fim da Struct Fila

//Procedimento criar_fila()
void criar_fila (struct Fila *fila, int tam_fila) {
	fila->primeiro_elemento = 0; 
	fila->ultimo_elemento = -1;
	fila->tamanho_fila = tam_fila;
	fila->quant_elementos = 0;
	fila->fila_completa = (int*) malloc (fila->tamanho_fila * sizeof(int));
} //Fim do procedimento criar_fila() 

//Procedimento inserir_elemento_fila()
void inserir_elemento_fila (struct Fila *fila, int novo_elemento) {
	if (fila->ultimo_elemento == fila->tamanho_fila - 1)
		fila->ultimo_elemento = -1;
	
	fila->ultimo_elemento++; //fila->ultimo_elemento = fila->ultimo_elemento + 1
	fila->fila_completa[fila->ultimo_elemento] = novo_elemento;
	fila->quant_elementos++;	
}//Fim do procedimento inserir_elemento_fila()

//Procedimento remover_elemento_fila ()
int remover_elemento_fila(struct Fila *fila) {
	int novo_prim_elemento = fila->fila_completa[fila->primeiro_elemento++];
	
	if (fila->primeiro_elemento == fila->tamanho_fila)
		fila->primeiro_elemento = 0;
	
	fila->quant_elementos--;
	return novo_prim_elemento;			
}//Fim do procedimento remover_elemento_fila()

//Função verifica_fila_vazia()
int verifica_fila_vazia(struct Fila *fila) {
	return (fila->quant_elementos == 0);
}//Fim da função verifica_fila_vazia()

//Procedimento exibir_lista()
void exibir_fila (struct Fila *fila) {
	int cont_tam, cont_quant;
	printf ("\n\nFila: ");
	for (cont_quant = 0, cont_tam = fila->primeiro_elemento; cont_quant < fila->quant_elementos; cont_quant++) {
		printf ("\t%d", fila->fila_completa[cont_tam++]);
		
		if (cont_tam == fila->tamanho_fila)
			cont_tam = 0;
	}
	printf ("\n\n\n"); 
}//Procedimento exibir_lista()


//Função verifica_fila_cheia()
int verifica_fila_cheia (Fila *fila) {
	return (fila->quant_elementos == fila->tamanho_fila);
}//fim da função verifica_fila_cheia()
