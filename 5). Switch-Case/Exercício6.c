/** Autor: Gabriel Dias **/

/**
*	Fa�a um algoritmo que realize a leitura do saldo de uma conta. Em seguida, o algoritmo
*	dever� apresentar um menu ao usu�rio com as seguintes op��es:
*
*		1. Exibir saldo;
*		2. Realizar saque;
* 		3. Realizar dep�sito;
*
*	-> A op��o 1 dever� apresentar o saldo digitado pelo usu�rio;
*
*	-> A op��o 2 dever� simular uma opera��o de saque da conta. Caso o valor do saque seja
*	   maior ao saldo do cliente, o programa n�o dever� permitir a realiza��o da opera��o;
*
*	-> A op��o 3 dever� simular uma opera��o de dep�sito na conta.
*
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	// Configura o idioma de acordo com a localiza��o
	setlocale(LC_ALL, "portuguese");
	
	// Vari�veis
	int opcao;
	float saldo, deposito, saque, resto, novo_saldo;
	
	// Processamento
	printf("Informe o saldo: ");
	scanf("%f", &saldo);
	
	printf("\nEscolha uma op��o: \n");
	printf("\n1 - Exibir saldo\n");
	printf("2 - Realizar saque\n");
	printf("3 - Realizar dep�sito\n");
	scanf("%d", &opcao);
		
	
	switch(opcao){
		case 1: 
			printf("O saldo informado � de %.2f: \n", saldo);
		break;
		
		case 2:
			printf("Informe o valor que deseja sacar: ");
			scanf("%f", &saque);
			
			if(saque > saldo){
				printf("N�o � poss�vel realizar essa opera��o! Seu saldo � insuficiente.\n");
			}else{
				resto = saldo - saque; 
				printf("Seu saldo atual �: %.2f\n", resto);
			}		
		break;
		
		case 3: 
			printf("Informe o valor que deseja depositar: ");
			scanf("%f", &deposito);
			
			novo_saldo = saldo + deposito; 
			printf("Seu saldo atual �: %.2f\n", novo_saldo);
			
		break;
	}
	system("pause");	
}
