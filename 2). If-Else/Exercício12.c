/** Autor: Gabriel Dias **/

/**
*	Crie um algoritmo para entrar com 2 números e imprimir o menor número 
*	(supondo valores diferentes).
**/

// Bibliotecas padrao
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (){
	
	// Configura o idioma de acordo com a localização
	setlocale(LC_ALL, "portuguese");

	// Variáveis
	int x, y;
	
	// Processamento
	printf("Digite um número: ");
	scanf("%d", &x);
	printf("\nDigite outro número: ");
	scanf("%d", &y);

	if (x > y){
		printf("\nO menor número é: %d\n", y);
	}else{
		printf("\nO menor número é: %d\n", x);
	}
	system("pause");
}
