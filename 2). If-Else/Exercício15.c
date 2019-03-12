/** Autor: Gabriel Dias **/

/**
*	Crie um algoritmo para entrar com 3 números e imprimi-los em ordem crescente 
*	(suponha números diferentes).
**/

// Bibliotecas padrão
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	// Configura o idioma de acordo com a localização
	setlocale(LC_ALL, "portuguese");

	// Variáveis
	int x, y, z;

	// Processamento
	printf("Digite um número: ");
	scanf("%d", &x);
	printf("\nDigite outro número: ");
	scanf("%d", &y);
	printf("\nDigite mais um número: ");
	scanf("%d", &z);

	if(x > y && y > z){
		printf("\nA organização dos algarismos em ordem crescente é: %d, %d, %d", z, y, x);
	}
	if (x < y && y < z){
		printf("\nA organização dos algarismos em ordem crescente é: %d, %d, %d", x, y, z);
	}
	if (y < x && x < z){
		printf("\nA organização dos algarismos em ordem crescente é: %d, %d, %d", y, x, z);
	}
	if (y > x && x > z){
		printf("\nA organização dos algarismos em ordem crescente é: %d, %d, %d", z, x, y);
	}
	system("pause");
}
