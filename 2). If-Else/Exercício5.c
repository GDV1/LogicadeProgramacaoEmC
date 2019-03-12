/** Autor: Gabriel Dias **/

/**
*	Faça um algoritmo que leia um número e imprima se ele está na faixa de 
*	números entre 100 e 1000.
**/

// Bibliotecas padrão
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	
	// Configura o idioma de acordo com a localização
	setlocale(LC_ALL, "portuguese");
	
	// Variáveis
	float numero1;

	// Processamento
	printf("Digite um número: ");
	scanf("%f", &numero1);

	if(numero1 >= 100 && numero1 <= 1000){
		printf("\nO número está na faixa entre 100 e 1000.\n");
	}else{
		printf("\nO número NÃO está na faixa entre 100 e 1000.\n");
	}
	system("pause");
}
