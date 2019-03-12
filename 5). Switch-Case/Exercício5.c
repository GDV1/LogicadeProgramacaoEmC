/** Autor: Gabriel Dias **/

/**
*	Crie um algoritmo que exiba um card�pio com as op��es:
*		1. Pizza
*		2. Picanha
*		3. Peixe
*
*	Ao selecionar uma das op��es, o algoritmo dever� exibir a mensagem: 
*	"Op��o escolhida: (n�mero)-(nome do prato). Pedido realizado com sucesso!"
*
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	// Configura o idioma de acordo com a localiza��o
	setlocale(LC_ALL, "portuguese");
	
	int opcao;
	
	printf("Escolha uma op��o do card�pio: \n");
	printf("\n1 - Pizza");
	printf("\n2 - Picanha");
	printf("\n3 - Peixe\n");
	scanf("\n%d", &opcao);
	
	switch(opcao){
		case 1:
			printf("\nOp��o escolhida: 1 - Pizza. Pedido realizado com sucesso!\n");
		break;
		
		case 2:
			printf("\nOp��o escolhida: 2 - Picanha. Pedido realizado com sucesso!\n");
		break;
		
		case 3: 
			printf("\nOp��o escolhida: 3 - Peixe. Pedido realizado com sucesso!\n");
		break;
	}
	printf("\n");	
	system("pause");	
}
