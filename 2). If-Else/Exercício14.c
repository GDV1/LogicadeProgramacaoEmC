/** Autor: Gabriel Dias **/

/**
*	Crie um algoritmo para entrar com 2 números e imprimi-los em ordem decrescente 
*	(suponha números diferentes).
**/

// Bibliotecas padrão
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

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

	if(x > y ){
		printf("\nA organização dos algarismos em ordem decrescente é: %d, %d", x, y);
	}else{
		printf("\nA organização dos algarismos em ordem decrescente é: %d, %d", y, x);
	}
	system("pause");
}
