#include "Prototipo_Fila.h"
#include "Menu_Fila.h"

int main (int argc, char *argv[]) {
	setlocale (LC_ALL, "Portuguese");
	int op, tam_fila, numero, controle = 1, novo_elemento, i, contador;
	struct Fila nova_fila;

	printf ("\n\nCriando Nova Fila");
	printf ("\n\nInforme a quantidade de elementos da fila: ");
	scanf ("%d", &tam_fila);
	criar_fila(&nova_fila, tam_fila);
	
	while (controle == 1) {
		op = menu_principal();
		system ("cls");

		switch (op) {
			case 0:
				controle = 0;
				printf ("\n\nVocê escolheu encerrar o programa");
			break;
							
			case 1:
				printf ("\n\nInserindo Elemento na Fila: ");
				for(i = 0; i < tam_fila; i++) {
				if (verifica_fila_cheia(&nova_fila))
					printf ("\n\nFila cheia!");
				else {
					printf ("\n\nInforme um número para inserção na fila: ");
					scanf ("%d", &novo_elemento);
					inserir_elemento_fila (&nova_fila, novo_elemento);
				}				
			} 
			break;
			
			case 2:
				system ("cls");
				printf ("\n\nExibindo Fila");
				if (verifica_fila_vazia(&nova_fila))
					printf ("\n\nA fila está vazia!");
				else {
					printf ("\n\nFila: ");
					exibir_fila (&nova_fila);
				}
				break;
			
			case 3:
				system ("cls");
				do {
					printf ("\n\nRemovendo Elemento da Fila");
					remover_elemento_fila(&nova_fila);
					printf ("\n\nElemento removido da fila!\n\n");
					printf ("Deseja remover mais um? SIM = 1 || NÃO = 0: ");
					scanf ("%d", &contador);					
					if (verifica_fila_vazia(&nova_fila))
						contador++;
				} while (contador == 1);
			break;
			
			case 4:
				if(verifica_fila_cheia(&nova_fila))
					printf ("\n\nA fila está cheia!");
				else 
					printf ("\n\nA fila não está cheia");				
			break;
			
			case 5: 
				if (verifica_fila_vazia(&nova_fila))
					printf ("\n\nA fila está vazia!");
				else
					printf ("\n\nA fila não está vazia");
			break;		
		}
	}
	
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}

/*Tarefinha
1 - Dividir o arquivo em filas.h, main.cpp e um arquivo de protótipos OK!
2 - Implementar funções para manipular várias listas
3 - Finalizar a implementação do menu na main()
4 - Criar uma arquivo .h para as mensagens de menu*/
