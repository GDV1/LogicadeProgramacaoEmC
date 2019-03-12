/** Autor: Gabriel Dias **/

/**
*	Crie um algoritmo que exiba um cardápio com as opções:
*		1. Pizza
*		2. Picanha
*		3. Peixe
*
*	Ao selecionar uma das opções, o algoritmo deverá exibir a mensagem: 
*	"Opção escolhida: (número)-(nome do prato). Pedido realizado com sucesso!"
*
**/

// Bibliotecas padrão
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	// Configura o idioma de acordo com a localização
	setlocale(LC_ALL, "portuguese");
	
	int opcao;
	
	printf("Escolha uma opção do cardápio: \n");
	printf("\n1 - Pizza");
	printf("\n2 - Picanha");
	printf("\n3 - Peixe\n");
	scanf("\n%d", &opcao);
	
	switch(opcao){
		case 1:
			printf("\nOpção escolhida: 1 - Pizza. Pedido realizado com sucesso!\n");
		break;
		
		case 2:
			printf("\nOpção escolhida: 2 - Picanha. Pedido realizado com sucesso!\n");
		break;
		
		case 3: 
			printf("\nOpção escolhida: 3 - Peixe. Pedido realizado com sucesso!\n");
		break;
	}
	printf("\n");	
	system("pause");	
}
