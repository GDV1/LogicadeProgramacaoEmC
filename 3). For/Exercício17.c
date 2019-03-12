/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo que calcula o fatorial de um determinado n�mero. 
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	// Configura o idioma de acordo com a localiza��o
	setlocale(LC_ALL, "portuguese");

	// Vari�veis	
	int n, cont, fatorial;
	
	// Valor inicial da vari�vel. 	
	fatorial = 1; 
	
	// Processamento
	printf("Digite um n�mero e conhe�a o seu fatorial: ");
	scanf("%d", &n);
	
	for (cont = 1; cont <= n; cont++){	
		fatorial = fatorial * cont;	
	}
	
	printf("\nO fatorial do n�mero informado �: %d\n", fatorial);
	
	system("pause");
}
