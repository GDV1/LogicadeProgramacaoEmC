/** Autor: Gabriel Dias **/

/**
*	Faça um algoritmo que leia um valor N e imprima todos os valores inteiros entre 1 e
*	esse valor N, inclusive 1 e N. Considere que o N será sempre maior que 0. 
**/

// Bibliotecas padrão
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	// Configura o idioma de acordo com a localização
	setlocale(LC_ALL, "portuguse");
	
	// Variáveis
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
