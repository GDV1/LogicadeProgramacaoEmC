/** Autor: Gabriel Dias **/

/**
*	Crie um algoritmo para entrar com 2 números e imprimi-los em ordem crescente 
*	(suponha números diferentes).
**/

// Bibliotecas padrão
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	// Configura o idioma de acordo com a localização
	setlocale(LC_ALL, "portuguese");
	
	// Variáveis
	int x, y;

	// Processamento
	printf("Digite um número: ");
	scanf("%d", &x);
	printf("Digite outro número: ");
	scanf("%d", &y);

	if(x > y){
		printf("\nA organização dos algarismos em ordem crescente é: %d, %d", y, x);
	}else{
		printf("\nA organização dos algarismos em ordem crescente é: %d, %d", x, y);
	}
	system("pause");
}
