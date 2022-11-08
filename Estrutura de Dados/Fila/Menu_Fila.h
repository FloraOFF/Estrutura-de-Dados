#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int menu_principal () {
	int op;
	//system ("cls");
	printf ("\n\n\n\tMenu");
	printf ("\n\n1 - Inserir Elemento na Fila");
	printf ("\n\n2 - Exibir Fila");
	printf ("\n\n3 - Remover Elemento da Fila");
	printf ("\n\n4 - Verificar se a Fila Está Cheia");
	printf ("\n\n5 - Verificar se a Fila Está Vazia");
	printf ("\n\n0 - Sair");
		
	printf ("\n\nInforme a opção desejada: ");
	scanf ("%d", &op);
	return op;
}
