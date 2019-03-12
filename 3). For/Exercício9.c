/** Autor: Gabriel Dias **/

/**
*	Crie um algoritmo que leia um número inteiro e calcule o seu fatorial. 
**/

// Bibliotecas padrão
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (){
	
	// Configura o idioma de acordo com a localização
	setlocale(LC_ALL, "portuguese");
	
	// Variáveis
	int n, cont, fatorial;
	
	// Processamento
	printf("Digite um número e conheça o seu fatorial: ");
	scanf("%d", &n);
	
	fatorial = 1;
	
	for (cont = 1; cont <= n; cont++){	
		fatorial = fatorial * cont;	
	}
	
	printf("\nO fatorial do número informado é: %d\n", fatorial);
	system("pause");	
}
