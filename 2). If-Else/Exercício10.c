/** Autor: Gabriel Dias **/

/**
*	Crie um algoritmo que leia dois n�meros e imprima uma mensagem dizendo
* 	se s�o iguais ou diferentes.
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	
	// Configura o idioma de acordo com a localiza��o
	setlocale(LC_ALL, "portuguese");

	// Vari�veis
	float x, y;
	
	// Processamento
	printf("Digite um n�mero: ");
	scanf("%f", &x);
	printf("Digite outro n�mero: ");
	scanf("%f", &y);

	if (x == y){
		printf("\nOs n�meros informados s�o iguais.\n");
	}else {
		printf("\nOs n�meros informados s�o diferentes.\n");
	}
	system("pause");
}
