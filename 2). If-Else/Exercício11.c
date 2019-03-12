/** Autor: Gabriel Dias **/

/**
*	Crie um algoritmo para entrar com dois números e imprimir o maior número 
*	(supondo números diferentes).
**/

// Bibliotecas padrão
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	// Configura o idioma de acordo com a localização
	setlocale(LC_ALL, "portuguese");

	// Variáveis
	int x, y;

	// Processamento
	printf("Digite um número: ");
	scanf("%d", &x);
	printf("\nDigite outro número: ");
	scanf("%d", &y);

	if(x > y ){
		printf("\nO maior número é: %d\n", x);
	}else{
		printf("\nO maior número é: %d\n", y);
	}
	system("pause");
}
