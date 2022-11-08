#include "string.h"
#include "assinatura.h"

int main (int argc, char* argv[]) {
	setlocale (LC_ALL, "Portuguese");
	int op1, op2, op3, controle = 1;
	char *novo_nome;
	int novo_id;
	float novo_peso;
	Elemento *elemento_novo;
	Lista *lista_nova;
	
	while (controle != 0) {
		limpar ();
		
		if (controle == 1){
			lista_nova = (Lista*) malloc(sizeof(Lista));
			lista_inicializa (lista_nova);
			inserir_lista_vazia (lista_nova, novo_id, novo_nome, novo_peso);	
		}
			
		op1 = menu_principal();
		
		switch (op1) {
			case 1: //Inserir
				system ("cls");
				op2 = menu_inserir();
				switch (op2) {
					case 6:
						inserir_lista_inicio (lista_nova, 01, "Flora", 56);
						break;
					
					case 7:
						
						break;
					
					case 8:
						inserir_lista_fim (lista_nova, 03, "Alice", 52);
						break;
					
					case 9:
						break;
					
					default:
						printf ("\n\nDigite uma opção válida!");
				}
				break;
			
			case 2: //Exibir lista completa
				
				break;
			
			case 3: //Exibir elemento da lista
				
				break;
			
			case 4: //Remover elemento da lista
				system ("cls");
				op3 = menu_remover();
				switch (op3) {
					case 10:
						break;
					
					case 11:
						break;
					
					case 12:
						break;
					
					case 13:
						break;
					
					default:
						printf ("\n\nDigite uma opção válida!");
				}
				break;
			
			case 5: //Liberar a lista 
				
				break;
			
			case 0:
				printf ("\n\nVocê optou em sair do programa!");
				controle = 0;
				break;
			
			default:
				printf ("\n\nDigite uma opção válida!");
		}
		
	}
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}
