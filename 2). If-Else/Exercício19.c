/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo que receba um n�mero inteiro N, verifique se este � �mpar ou par
*	e imprima uma mensagem.
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	
	// Configura o idioma de acordo com a localiza��o
	setlocale(LC_ALL, "portuguese");

	// Vari�veis
	int num, resto;
	
	// Processamento
	printf("Digite um n�mero: ");
	scanf("%d", &num);

	resto = num%2;

	if(resto == 0){
		printf("\nO n�mero informado � par.\n");
	}else{
		printf("\nOn�mero informado � �mpar.\n");
	}
	system ("pause");
}
