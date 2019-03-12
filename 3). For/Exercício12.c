/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo que receba um número inteiro, calcule e imprima a tabuada 
*	desse número. 
*
*	Obs.: Gerar as tabuadas de soma, subtração, multiplicação e divisão deste número.
**/

// Bibliotecas padrão
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	
	// Configura o idioma de acordo com a localização
	setlocale(LC_ALL, "portuguese");
	
	// Variáveis
	int numero, resultado, i, multiplo;
	
	// Processamento
	printf("Informe um número e veja a sua tabuada: ");
	scanf("%d", &numero);
	
	printf("TABUADA DE SOMA\n");
	for(i = 0; i <= 10; i++){
		resultado = numero + i;
		printf("%d + %d = %d\n", numero, i, resultado);
	}
	
	printf("\n");
	
	printf("TABUADA DE SUBTRAÇÃO\n");
	for(i = numero; i <= (numero+10); i++){
		resultado = i - numero;
		printf("%d - %d = %d\n", i, numero, resultado);
	}
	
	printf("\n");

	printf("TABUADA DE MULTIPLICAÇÃO\n");
	for(i = 0; i <= 10; i++){
		resultado = i * numero;
		printf("%d * %d = %d\n", i, numero, resultado);
	}
	
	printf("\n");	
	
	printf("TABUADA DE DIVISÃO\n");
	for(i = 1; i <=10; i++){
		multiplo = i * numero;
		resultado = multiplo/numero;	
		printf("%d / %d = %d\n", multiplo, numero, resultado);
	}	
	system("pause");
}
