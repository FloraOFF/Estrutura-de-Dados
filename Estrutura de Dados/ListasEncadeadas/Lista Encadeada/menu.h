#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Função menu_principal()
int menu_principal () {
	int op1;
	//system ("cls");
	printf ("\n\nMENU");
	printf ("\n\n0 - Encerrar o programa");
	printf ("\n\n1 - Inserir elemento na Lista Encadeada");
	printf ("\n\n2 - Exibir Lista Encadeada");
	printf ("\n\n3 - Remover lista");
	printf ("\n\n4 - Busca elemento na lista");
	printf ("\n\n5 - Verificar se a lista está vazia");
	printf ("\n\n6 - Iniciar outra Lista Encadeada");
	printf ("\n\n7 - Verificar se as duas Listas Encadeadas são iguais");
	printf ("\n\n8 - Busca Binária");
	//Não esquecer de colocar para listas iguais
	printf ("\n\n\nInforme a opção desejada: ");
	scanf ("%d", &op1);
	return op1;
}

int exibir_menu () {
	int op2;
	system ("cls");
	printf ("\n\nMENU EXIBIR");
	printf ("\n\n1 - Imprimir Lista Encadeada");
	printf ("\n\n2 - Imprimir um elemento da Lista");
	printf ("\n\n3 - Voltar para o menu anterior");
	printf ("\n\n\nInforme a opção desejada: ");
	scanf ("%d", &op2);
	return op2;
}

int menu_remover () {
	int op3;
	system ("cls");
	printf ("\n\nMENU REMOVER");
	printf ("\n\n1 - Remover elemento da Lista Encadeada");
	printf ("\n\n2 - Remover Lista Encadeada");
	printf ("\n\n3 - Voltar para o menu anterior");
	printf ("\n\n\nInforme a opção desejada: ");
	scanf ("%d", &op3);
	return op3;
}

int menu_busca () {
	int op4;
	system ("cls");
	printf ("\n\nBUSCA ELEMENTO NA LISTA");
	printf ("\n\n1 - Busca elemento na Lista Encadeada");
	printf ("\n\n2 - Busca elemento de repetição");
	printf ("\n\n3 - Voltar para o menu anterior");
	printf ("\n\n\nInforme a opção desejada: ");
	scanf ("%d", &op4);
	return op4;
}

int menu_L1 () {
	int op5;
	system ("cls");
	printf ("\n\nMENU NOVA LISTA");
	printf ("\n\n0 - Encerrar o programa");
	printf ("\n\n1 - Inserir elemento na Lista Encadeada");
	printf ("\n\n2 - Exibir Lista Encadeada");
	printf ("\n\n3 - Remover lista");
	printf ("\n\n4 - Busca elemento na lista");
	printf ("\n\n5 - Verificar se a lista está vazia");
	printf ("\n\n6 - Voltar para o menu principal");
	printf ("\n\n7 - Verificar se as duas Listas Encadeadas são iguais");
	printf ("\n\n\nInforme a opção desejada: ");
	scanf ("%d", &op5);
	return op5;
}
