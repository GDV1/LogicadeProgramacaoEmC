/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo que receba um número inteiro N, verifique se este é ímpar ou par
*	e imprima uma mensagem.
**/

// Bibliotecas padrão
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	
	// Configura o idioma de acordo com a localização
	setlocale(LC_ALL, "portuguese");

	// Variáveis
	int num, resto;
	
	// Processamento
	printf("Digite um número: ");
	scanf("%d", &num);

	resto = num%2;

	if(resto == 0){
		printf("\nO número informado é par.\n");
	}else{
		printf("\nOnúmero informado é ímpar.\n");
	}
	system ("pause");
}
