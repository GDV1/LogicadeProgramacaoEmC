/** Autor: Gabriel Dias **/

/**
*	Crie um algoritmo para entrar com 2 n�meros e imprimi-los em ordem decrescente 
*	(suponha n�meros diferentes).
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	
	// Configura o idioma de acordo com a localiza��o
	setlocale(LC_ALL, "portuguese");

	// Vari�veis
	int x, y;

	// Processamento
	printf("Digite um n�mero: ");
	scanf("%d", &x);
	printf("Digite outro n�mero: ");
	scanf("%d", &y);

	if(x > y ){
		printf("\nA organiza��o dos algarismos em ordem decrescente �: %d, %d", x, y);
	}else{
		printf("\nA organiza��o dos algarismos em ordem decrescente �: %d, %d", y, x);
	}
	system("pause");
}
