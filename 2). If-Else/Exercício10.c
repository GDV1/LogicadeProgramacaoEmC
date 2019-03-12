/** Autor: Gabriel Dias **/

/**
*	Crie um algoritmo que leia dois números e imprima uma mensagem dizendo
* 	se são iguais ou diferentes.
**/

// Bibliotecas padrão
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	
	// Configura o idioma de acordo com a localização
	setlocale(LC_ALL, "portuguese");

	// Variáveis
	float x, y;
	
	// Processamento
	printf("Digite um número: ");
	scanf("%f", &x);
	printf("Digite outro número: ");
	scanf("%f", &y);

	if (x == y){
		printf("\nOs números informados são iguais.\n");
	}else {
		printf("\nOs números informados são diferentes.\n");
	}
	system("pause");
}
