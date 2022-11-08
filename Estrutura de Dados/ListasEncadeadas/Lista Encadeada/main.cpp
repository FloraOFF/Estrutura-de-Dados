#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include "menu.h"
#include "Prototipo.h"

int main (int argc, char* argv[]) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	Lista* lista;
	Lista* lista1;
	Lista* list;
	int novo_id, repet_id, op1, op2, op3, op4, op5, controle = 1, controle1, cod_busca, contador, contador1;
	char novo_nome[80];
	float peso;
	printf ("\n\nEste programa manipula uma lista encadeada!\n\n");
	
	while (controle != 0){
		if (controle == 1) {
			lista = criar_lista(); //chamada da função criar_lista() - Criação da lista encadeada;
			lista1 = criar_lista();			
		}
		op1 = menu_principal ();
		switch (op1) {
			case 0:
				controle = 0;
				printf ("\n\nVocê escolheu encerrar o programa");
				return 0;
			break;
			
			case 1 : //Inserir elemento na Lista Encadeada
			do {
				system ("cls");
				fflush (stdin);
				printf ("\n\nINSERINDO NA LISTA!\n");
				printf ("\n\nInforme a ID: ");
				scanf ("%d", &novo_id);
				printf ("\n\nInforme o Nome: ");
				fflush (stdin);
				fgets (novo_nome,80,stdin);
				printf ("\n\nInforme o Peso: ");
				scanf ("%f", &peso);
				fflush (stdin);
				lista = inserir_lista(lista, novo_id, novo_nome, peso);
				printf ("\n\nDeseja inserir outros dados (SIM = 1 || NÃO = 0): ");
				scanf ("%d", &contador);				
			}while (contador != 0);
			
			printf ("\n\n");
			system ("Pause");
			system ("cls");	
				
			break;
			
			//controle = 1;
			case 2 :
				op2 = exibir_menu ();
				fflush (stdin);
					switch (op2) {
						case 1:
							if (lista_vazia (lista)) 
								printf ("\n\nA lista está vazia");
							else 
								printf ("\n\nExibindo a lista encadeada\n");
								Exibir(lista);
						break;
							
						case 2: 
							printf ("\n\nExibindo elemento da lista: \n");
							printf ("\n\nDigite o código de busca: ");
							scanf ("%d", &cod_busca);
							printf ("\n\n");
							imprimir_elemento_lista (lista, cod_busca);
						break;
						
						case 3:
							printf ("\n\n");
							system ("Pause");
							system ("cls");	
							menu_principal();
						break;
					}
					
			printf ("\n\n");		
			system ("Pause");
			system ("cls");	
			
			break;
				
			case 3:
				op3 = menu_remover ();
				switch (op3) {
					case 1: 
						printf ("\n\nRemover elemento da lista encadeada\n");
						printf ("\nDigite o código de busca da lista: ");
						scanf ("%d", &cod_busca);
						lista = remover_elemento_lista (lista, cod_busca);
						printf ("\n\nO elemento com código busca %d foi removido!", cod_busca);
					break;
					
					case 2:
						printf ("\n\nRemover a lista encadeada\n");
						lista = liberar_lista (lista);
						printf ("\n\nA lista foi removida!");
					break;
					
					case 3:
						printf ("\n\n");
						system ("Pause");
						system ("cls");	
						menu_principal();
				}
			printf ("\n\n");
			system ("Pause");
			system ("cls");	
			
			break;
			
			case 4:
				op4 = menu_busca ();
				switch (op4) {
					case 1:
						printf ("\n\nBuscando Elemento na Lista Encadeada\n");
						printf ("\nDigite o código de busca: ");
						scanf ("%d", &cod_busca);
						fflush (stdin);
						printf ("\n\n");
						list = busca_elemento (lista, cod_busca);
					break;
					
					case 2:
						printf ("\n\nBuscando Elemento de Repetição na Lista Encadeada\n");
						printf ("\nDigite o código para verificar repetição: ");
						scanf ("%d", &cod_busca);
						repet_id = busca_elemento_repeticao (lista, cod_busca);
						if (repet_id == 0)
							printf ("\n\nNão existe repitação de id na lista encadeada!");
						else
							printf ("\n\nO id possui %d repetições na lista encadeada!", repet_id);
					break;
					
					case 3:
						printf ("\n\n");
						system ("Pause");
						system ("cls");	
						menu_principal ();
				}
				
			printf ("\n\n");
			system ("Pause");
			system ("cls");	
			
			break;
			
			case 5:
				if (lista_vazia (lista) == 1) 
					printf ("\n\nA lista está vazia");
				else 
					printf ("\n\nA lista não está vazia");
					
			printf ("\n\n");
			system ("Pause");
			system ("cls");
					
			break;
			
			case 6:
				while (controle1 != 0) {
					op5 = menu_L1 ();
					switch (op5) {
					case 0:
						controle = 0;
						printf ("\n\nVocê escolheu encerrar o programa");
						return 0;
					break;
					
					case 1:
						do {
							system ("cls");
							fflush (stdin);
							printf ("\n\nINSERINDO NA LISTA!\n");
							printf ("\n\nInforme a ID: ");
							scanf ("%d", &novo_id);
							printf ("\n\nInforme o Nome: ");
							fflush (stdin);
							fgets (novo_nome,80,stdin);
							printf ("\n\nInforme o Peso: ");
							scanf ("%f", &peso);
							fflush (stdin);
							lista1 = inserir_lista(lista1, novo_id, novo_nome, peso);
							printf ("\n\nDeseja inserir outros dados (SIM = 1 || NÃO = 0): ");
							scanf ("%d", &contador1);				
						}while (contador1 != 0);
					
					printf ("\n\n");
					system ("Pause");
					system ("cls");	

					break;	
						
					case 2 :
						op2 = exibir_menu ();
						fflush (stdin);
							switch (op2) {
								case 1:
									if (lista_vazia (lista1)) 
										printf ("\n\nA lista está vazia");
									else 
										printf ("\n\nExibindo a lista encadeada\n");
										Exibir(lista1);
								break;
									
								case 2: 
									printf ("\n\nExibindo elemento da lista: \n");
									printf ("\n\nDigite o código de busca: ");
									scanf ("%d", &cod_busca);
									printf ("\n\n");
									imprimir_elemento_lista (lista1, cod_busca);
								break;
								
								case 3:
									printf ("\n\n");
									system ("Pause");
									system ("cls");	
									menu_L1 ();
								break;
							}
							
					printf ("\n\n");		
					system ("Pause");
					system ("cls");	
					
					break;
				
					case 3:
						op3 = menu_remover ();
						switch (op3) {
							case 1: 
								printf ("\n\nRemover elemento da lista encadeada\n");
								printf ("\nDigite o código de busca da lista: ");
								scanf ("%d", &cod_busca);
								lista1 = remover_elemento_lista (lista1, cod_busca);
								printf ("\n\nO elemento com código busca %d foi removido!", cod_busca);
							break;
							
							case 2:
								printf ("\n\nRemover a lista encadeada\n");
								lista1 = liberar_lista (lista1);
								printf ("\n\nA lista foi removida!");
							break;
							
							case 3:
								printf ("\n\n");
								system ("Pause");
								system ("cls");	
								menu_L1 ();
						}
					printf ("\n\n");
					system ("Pause");
					system ("cls");	
					
					break;
					
					case 4:
						op4 = menu_busca ();
						switch (op4) {
							case 1:
								printf ("\n\nBuscando Elemento na Lista Encadeada\n");
								printf ("\nDigite o código de busca: ");
								scanf ("%d", &cod_busca);
								fflush (stdin);
								printf ("\n\n");
								list = busca_elemento (lista1, cod_busca);
							break;
							
							case 2:
								printf ("\n\nBuscando Elemento de Repetição na Lista Encadeada\n");
								printf ("\nDigite o código para verificar repetição: ");
								scanf ("%d", &cod_busca);
								repet_id = busca_elemento_repeticao (lista1, cod_busca);
								if (repet_id == 0)
									printf ("\n\nNão existe repitação de id na lista encadeada!");
								else
									printf ("\n\nO id possui %d repetições na lista encadeada!", repet_id);
							break;
							
							case 3:
								printf ("\n\n");
								system ("Pause");
								system ("cls");	
								menu_L1 ();
						}
						
					printf ("\n\n");
					system ("Pause");
					system ("cls");	
					
					break;
					
					case 5:
						if (lista_vazia (lista1) == 1) 
							printf ("\n\nA lista está vazia");
						else 
							printf ("\n\nA lista não está vazia");
							
					printf ("\n\n");
					system ("Pause");
					system ("cls");
					
					break;
					
					case 6 :
					printf ("\n\nVoltando para o menu principal!");
					printf ("\n\n");
					system ("Pause");
					system ("cls");
					
					menu_principal ();
					controle1 = 0;	
					
					break;	
					
					case 7:			
						if (listas_iguais (lista,lista1)) 
							printf ("\n\nAs listas são iguais!");
						else
							printf ("\n\nAs listas são diferentes!");
							
						printf ("\n\n");
						system ("Pause");
						system ("cls");	
					
					break;
										
					}	
					controle1++;				
				}
				
			case 7:			
				if (listas_iguais (lista,lista1)) 
					printf ("\n\nAs listas são iguais!");
				else
					printf ("\n\nAs listas são diferentes!");
					
				printf ("\n\n");
				system ("Pause");
				system ("cls");	
					
			break;
			
			case 8:
				//printf ("\n\nOrdenando a lista!");
				//ordenar_lista (lista);
				printf ("\n\nBUSCA BINÁRIA");
				//printf ("\n\nDigite o ID para busca: ");
				//scanf ("%d", cod_busca);
				printf ("\n\n");
				
				lista = inserir_lista (lista, 01, "Flora", 56);
				buscaBinaria (cod_busca, lista);
			break;	
		}
	/*
	//Verificando se a lista está vazia
	if (lista_vazia(lista)) {
		printf ("\n\nA lista está vazia!\n\n");
	}else
		printf ("\n\nA lista não está vazia!\n\n");
	
	// Inserir um elemento na lista
	lista = inserir_lista (lista, 01, "Jorgenho", 85);
	lista = inserir_lista (lista, 02, "Will", 50);
	lista = inserir_lista (lista, 03, "Breno", 85);
	lista = inserir_lista (lista, 04, "Alice", 90);
	
	lista1 = inserir_lista (lista1, 01, "Jorgenho", 85);
	lista1 = inserir_lista (lista1, 02, "Will", 50);
	lista1 = inserir_lista (lista1, 03, "Breno", 85);
	lista1 = inserir_lista (lista1, 04, "Alice", 90);	
	
	//Imprimir lista
	imprimir (lista);
	
	//Verificando se as listas são iguais
	if (listas_iguais (lista, lista1)) {
		printf ("\n\nAs listas são iguais!");
	}else{
		printf ("\n\nAs listas são diferentes!");
	}
	
	printf ("\n\n\n");

	repet_id = busca_elemento_repeticao(lista, 02);
	if (repet_id == 0){
		printf ("\n\nNão existe repitação de id na lista encadeada!\n\n");
	}else{
		printf ("\n\nO id possui %d repetições na lista encadeada!\n\n", repet_id);
	}
	
	//Imprimir um elemento da lista
	//imprimir_elemento_lista (lista, 01);
	
	printf ("\n\n\n");
	
	//Busca elemento com base em id - retornando p
	list = busca_elemento (lista, 02);
	printf ("\n\nElemento localizado!");
	printf ("\n\nId: %d", list->id);
	printf ("\n\nNome: %s", list->nome);
	printf ("\n\nPeso (kg): %2.f", list->peso);
	printf ("\n\n\n");
	
	//Remover elemento da lista ------ ?????????
	remover_elemento_lista (lista, 03);

	imprimir (lista);	
	
	//Liberando a lista
	lista = liberar_lista(lista);
	
	if (lista_vazia(lista)) {
		printf ("\n\nA lista está vazia!");
	}else
		printf ("\n\nA lista não está vazia!");
	*/
	controle++;
	}
	
	printf ("\n\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}

//Tarefinha
//1 - Verificar erros de referência
//2 - Tentar implementar as funções de manipulação de lista
