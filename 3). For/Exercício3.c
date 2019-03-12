/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo que imprime o quadrado dos n�meros compreendidos entre 1 e 20.
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	// Configura o idioma de acordo com a localiza��o
	setlocale(LC_ALL, "portuguese");
	
	// Vari�veis
	int k, quad;
	
	// Processamento
	printf("\nO quadrado dos n�meros de 1 a 20 �:\n");
	for(k = 1; k <= 20; k++){
		quad = pow(k, 2);
		printf(" %d\n", quad);
	}
	system("pause");
}
