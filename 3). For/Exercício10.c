/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo que gere a s�rie de Fibonacci at� o n-�simo termo. 
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	// Configura o idioma de acordo com a localiza��o
	setlocale(LC_ALL, "portuguese");

	// Vari�veis
	int a, b, auxiliar, i, n;

	// Inicializa��o de vari�veis
	a = 1;
	b = 0;

	// Processamento
	printf("Digite o n�mero do termo desejado: ");
	scanf("%d", &n);
	printf("\nS�rie de Fibonacci:\n");

	for(i = 1; i <= n; i++){
		auxiliar = a + b;
		a = b;
		b = auxiliar;

		printf("%d, ", auxiliar);
	}
	system("pause");
}
