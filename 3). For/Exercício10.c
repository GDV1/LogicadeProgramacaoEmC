/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo que gere a série de Fibonacci até o n-ésimo termo. 
**/

// Bibliotecas padrão
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	// Configura o idioma de acordo com a localização
	setlocale(LC_ALL, "portuguese");

	// Variáveis
	int a, b, auxiliar, i, n;

	// Inicialização de variáveis
	a = 1;
	b = 0;

	// Processamento
	printf("Digite o número do termo desejado: ");
	scanf("%d", &n);
	printf("\nSérie de Fibonacci:\n");

	for(i = 1; i <= n; i++){
		auxiliar = a + b;
		a = b;
		b = auxiliar;

		printf("%d, ", auxiliar);
	}
	system("pause");
}
