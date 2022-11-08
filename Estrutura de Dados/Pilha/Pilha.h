#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Struct Pilha
struct Pilha {
	int topo_pilha;
	int capacidade_pilha;
	int *elemento_pilha;
}; //fim struct Pilha

//procedimento criar_pilha()
void criar_pilha(struct Pilha *pilha, int capacidade) {
	pilha->topo_pilha = -1;
	pilha->capacidade_pilha = capacidade;
	pilha->elemento_pilha = (int*)malloc(capacidade* sizeof(int));
} //fim do procedimento criar_pilha

//função pilha_vazia()
int pilha_vazia(struct Pilha *pilha) {
	if (pilha->topo_pilha == -1)
		return 1; 
	else
		return 0;
}//fim da função pilha_vazia()

//função pilha_cheia()
int pilha_cheia(struct Pilha *pilha) {
	if (pilha->topo_pilha == pilha->capacidade_pilha - 1)
		return 1;
	else
		return 0;
}//fim da função pilha_cheia()

//procedimento empilhar ()
int empilhar (struct Pilha *pilha, int novo_elemento) {
	pilha->topo_pilha++;
	pilha->elemento_pilha[pilha->topo_pilha] = novo_elemento;
	return novo_elemento;
}//fim do procedimento empilhar()

//função desempilhar()
int desempilhar(struct Pilha *pilha) {
	int aux = pilha->elemento_pilha[pilha->topo_pilha];
	pilha->topo_pilha--;
	return aux;
}//fim da função desempilhar()

//Função exibir_pilha()
int exibir_pilha (struct Pilha *pilha) {
	int cont_capacidade, cont_topo;
	printf ("\n\nPilha: ");
	for (cont_capacidade, cont_topo = pilha->topo_pilha = 0; cont_topo < pilha->capacidade_pilha; cont_topo++) {
		printf ("\t%d", pilha->elemento_pilha[cont_capacidade++]);
		
		if (cont_capacidade == pilha->capacidade_pilha)
			cont_capacidade = 0;
	}
	printf ("\n\n\n");
	return cont_capacidade;
} //Fim da função exibir_pilha()


//Função retornar_topo_pilha()
int retornar_topo_pilha (struct Pilha *pilha) {	
	int topo_P = pilha->elemento_pilha[pilha->topo_pilha];
	printf("\n\nRetornando o topo da pilha: %d", topo_P);
		
	return topo_P;
} //Fim da função retornar_topo_pilha()


//função retornar_topo_pilha()
//função retornar_base_pilha()
//função buscar_elemento_pilha() - busca linear
//função de ordenação (crescente, decrescente e randômica) da pilha -> nova pilha -> comparar as duas pilhas
//função para comparar_pilhas()
//função para transformar pilha em fila e vice-versa????????
//Posso criar pilhas e filas de maneira dinâmica?????????????????????????? ALICE
//Os tamanhos das pilhas e das filas podem ser dinâmicos??????? IGOR
//Função exibir_pilha(); OK!
//Função liberar_pilha();
//Função liberar_elemento_pilha()
