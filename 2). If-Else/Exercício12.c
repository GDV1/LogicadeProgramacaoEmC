/** Autor: Gabriel Dias **/

/**
*	Crie um algoritmo para entrar com 2 n�meros e imprimir o menor n�mero 
*	(supondo valores diferentes).
**/

// Bibliotecas padrao
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (){
	
	// Configura o idioma de acordo com a localiza��o
	setlocale(LC_ALL, "portuguese");

	// Vari�veis
	int x, y;
	
	// Processamento
	printf("Digite um n�mero: ");
	scanf("%d", &x);
	printf("\nDigite outro n�mero: ");
	scanf("%d", &y);

	if (x > y){
		printf("\nO menor n�mero �: %d\n", y);
	}else{
		printf("\nO menor n�mero �: %d\n", x);
	}
	system("pause");
}
