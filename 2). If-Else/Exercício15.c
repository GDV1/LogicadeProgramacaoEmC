/** Autor: Gabriel Dias **/

/**
*	Crie um algoritmo para entrar com 3 n�meros e imprimi-los em ordem crescente 
*	(suponha n�meros diferentes).
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	// Configura o idioma de acordo com a localiza��o
	setlocale(LC_ALL, "portuguese");

	// Vari�veis
	int x, y, z;

	// Processamento
	printf("Digite um n�mero: ");
	scanf("%d", &x);
	printf("\nDigite outro n�mero: ");
	scanf("%d", &y);
	printf("\nDigite mais um n�mero: ");
	scanf("%d", &z);

	if(x > y && y > z){
		printf("\nA organiza��o dos algarismos em ordem crescente �: %d, %d, %d", z, y, x);
	}
	if (x < y && y < z){
		printf("\nA organiza��o dos algarismos em ordem crescente �: %d, %d, %d", x, y, z);
	}
	if (y < x && x < z){
		printf("\nA organiza��o dos algarismos em ordem crescente �: %d, %d, %d", y, x, z);
	}
	if (y > x && x > z){
		printf("\nA organiza��o dos algarismos em ordem crescente �: %d, %d, %d", z, x, y);
	}
	system("pause");
}
