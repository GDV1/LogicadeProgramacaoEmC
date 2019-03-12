/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo que receba um n�mero inteiro positivo de 3 casas e imprima o algarismo
*	da casa das dezenas. N�o se esque�a de testar para ver se o n�mero informado tem realmente 3
*	casas.
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <locale.h>

int main(){
	
	// Configura o idioma de acordo com a localiza��o
	setlocale(LC_ALL, "portuguese");
	
	// Vari�veis
	int n1, divisao1, divisao2;
	
	// Processamento
	printf("Digite um n�mero: ");
	scanf("%d", &n1);
	
	if(n1 >= 100 && n1 <= 999){	
		divisao1 = n1%100;
    	divisao2 = divisao1/10;
	
		printf("\nO algarismo das dezenas �: %d\n", divisao2);			
	}else{
		printf("\nO algarismo digitado � inv�lido! Tente novamente.\n");
	}
	system ("pause");	
}
