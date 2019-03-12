/** Autor: Gabriel Dias **/

/**
*	Faça um algoritmo que realize a leitura do saldo de uma conta. Em seguida, o algoritmo
*	deverá apresentar um menu ao usuário com as seguintes opções:
*
*		1. Exibir saldo;
*		2. Realizar saque;
* 		3. Realizar depósito;
*
*	-> A opção 1 deverá apresentar o saldo digitado pelo usuário;
*
*	-> A opção 2 deverá simular uma operação de saque da conta. Caso o valor do saque seja
*	   maior ao saldo do cliente, o programa não deverá permitir a realização da operação;
*
*	-> A opção 3 deverá simular uma operação de depósito na conta.
*
**/

// Bibliotecas padrão
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	// Configura o idioma de acordo com a localização
	setlocale(LC_ALL, "portuguese");
	
	// Variáveis
	int opcao;
	float saldo, deposito, saque, resto, novo_saldo;
	
	// Processamento
	printf("Informe o saldo: ");
	scanf("%f", &saldo);
	
	printf("\nEscolha uma opção: \n");
	printf("\n1 - Exibir saldo\n");
	printf("2 - Realizar saque\n");
	printf("3 - Realizar depósito\n");
	scanf("%d", &opcao);
		
	
	switch(opcao){
		case 1: 
			printf("O saldo informado é de %.2f: \n", saldo);
		break;
		
		case 2:
			printf("Informe o valor que deseja sacar: ");
			scanf("%f", &saque);
			
			if(saque > saldo){
				printf("Não é possível realizar essa operação! Seu saldo é insuficiente.\n");
			}else{
				resto = saldo - saque; 
				printf("Seu saldo atual é: %.2f\n", resto);
			}		
		break;
		
		case 3: 
			printf("Informe o valor que deseja depositar: ");
			scanf("%f", &deposito);
			
			novo_saldo = saldo + deposito; 
			printf("Seu saldo atual é: %.2f\n", novo_saldo);
			
		break;
	}
	system("pause");	
}
