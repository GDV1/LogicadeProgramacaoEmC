/** Autor: Gabriel Dias **/

/**
*	Fa�a um algoritmo que leia um valor N e imprima todos os valores inteiros entre 1 e
*	esse valor N, inclusive 1 e N. Considere que o N ser� sempre maior que 0. 
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	// Configura o idioma de acordo com a localiza��o
	setlocale(LC_ALL, "portuguse");
	
	// Vari�veis
	int cont, n;
	
	// Processamento
	printf("Digite um valor inteiro: ");
	scanf(" %d", &n);
	
	for (cont = 1; cont <= n; cont++){
		printf(" %d", cont);
	}
	printf("\n");
	system("pause");
}
