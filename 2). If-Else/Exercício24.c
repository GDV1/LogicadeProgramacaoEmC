/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo que receba um número inteiro positivo de 3 casas e imprima o algarismo
*	da casa das dezenas. Não se esqueça de testar para ver se o número informado tem realmente 3
*	casas.
**/

// Bibliotecas padrão
#include <stdio.h>
#include <locale.h>

int main(){
	
	// Configura o idioma de acordo com a localização
	setlocale(LC_ALL, "portuguese");
	
	// Variáveis
	int n1, divisao1, divisao2;
	
	// Processamento
	printf("Digite um número: ");
	scanf("%d", &n1);
	
	if(n1 >= 100 && n1 <= 999){	
		divisao1 = n1%100;
    	divisao2 = divisao1/10;
	
		printf("\nO algarismo das dezenas é: %d\n", divisao2);			
	}else{
		printf("\nO algarismo digitado é inválido! Tente novamente.\n");
	}
	system ("pause");	
}
