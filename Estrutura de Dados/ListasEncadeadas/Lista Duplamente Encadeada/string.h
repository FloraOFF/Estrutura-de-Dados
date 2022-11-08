#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//função menu_principal()
int menu_principal () {
	int op1;
	system ("cls");
	printf ("\n\nEste programa manipula uma lista duplamente encadeada!");
	printf ("\n\nMENU");
	printf ("\n\n1 - Inserir na Início da Lista Duplamente Encadeada");
	printf ("\n\n2 - Exibir Todos os Elementos da Lista Duplamente Encadeada");
	printf ("\n\n3 - Exibir Um Elemento Específico da Lista Duplamente Encadeada!");
	printf ("\n\n4 - Remover Um Elemento da Lista Duplamente Encadeada");
	printf ("\n\n5 - Liberar a Lista Duplamente Encadeada");
	printf ("\n\n0 - Fechar o Programa");
		
	printf ("\n\n\nInforme a opção desejada: ");
	scanf ("%d", &op1);
	return op1;
}//fim função menu_principal

//função menu_inserir ()
int menu_inserir () {
	printf ("\n\nInserindo Elementos na Lista Duplamente Encadeada!");
	int op2;
	printf ("\n\n6 - Inserir no Início da Lista");
	printf ("\n\n7 - Inserir no Meio da Lista");
	printf ("\n\n8 - Inserir no Final da Lista");
	printf ("\n\n9 - Retornar ao Menu Anterior");
	printf ("\n\n\nInforme a opção desejada: ");
	scanf ("%d", &op2);
	return op2;
}//fim da função menu_inserir()

//função menu_remover()
int menu_remover () {
	int op3;
	printf ("\n\nRemovendo Elementos na Lista Duplamente Encadeada!");
	printf ("\n\n10 - Removendo no Início da Lista");
	printf ("\n\n11 - Removendo no Meio da Lista");
	printf ("\n\n12 - Removendo no Final da Lista");
	printf ("\n\n13 - Retornar ao Menu Anterior");
	printf ("\n\n\nInforme a opção desejada: ");
	scanf ("%d", &op3);
	return op3;
}//função menu_remover()

