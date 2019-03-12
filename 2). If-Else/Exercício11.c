/** Autor: Gabriel Dias **/

/**
*	Crie um algoritmo para entrar com dois n�meros e imprimir o maior n�mero 
*	(supondo n�meros diferentes).
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	// Configura o idioma de acordo com a localiza��o
	setlocale(LC_ALL, "portuguese");

	// Vari�veis
	int x, y;

	// Processamento
	printf("Digite um n�mero: ");
	scanf("%d", &x);
	printf("\nDigite outro n�mero: ");
	scanf("%d", &y);

	if(x > y ){
		printf("\nO maior n�mero �: %d\n", x);
	}else{
		printf("\nO maior n�mero �: %d\n", y);
	}
	system("pause");
}
