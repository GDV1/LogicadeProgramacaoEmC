/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo que calcula o fatorial de um determinado número. 
**/

// Bibliotecas padrão
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	// Configura o idioma de acordo com a localização
	setlocale(LC_ALL, "portuguese");

	// Variáveis	
	int n, cont, fatorial;
	
	// Valor inicial da variável. 	
	fatorial = 1; 
	
	// Processamento
	printf("Digite um número e conheça o seu fatorial: ");
	scanf("%d", &n);
	
	for (cont = 1; cont <= n; cont++){	
		fatorial = fatorial * cont;	
	}
	
	printf("\nO fatorial do número informado é: %d\n", fatorial);
	
	system("pause");
}
