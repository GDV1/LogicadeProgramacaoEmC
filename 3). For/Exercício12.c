/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo que receba um n�mero inteiro, calcule e imprima a tabuada 
*	desse n�mero. 
*
*	Obs.: Gerar as tabuadas de soma, subtra��o, multiplica��o e divis�o deste n�mero.
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	
	// Configura o idioma de acordo com a localiza��o
	setlocale(LC_ALL, "portuguese");
	
	// Vari�veis
	int numero, resultado, i, multiplo;
	
	// Processamento
	printf("Informe um n�mero e veja a sua tabuada: ");
	scanf("%d", &numero);
	
	printf("TABUADA DE SOMA\n");
	for(i = 0; i <= 10; i++){
		resultado = numero + i;
		printf("%d + %d = %d\n", numero, i, resultado);
	}
	
	printf("\n");
	
	printf("TABUADA DE SUBTRA��O\n");
	for(i = numero; i <= (numero+10); i++){
		resultado = i - numero;
		printf("%d - %d = %d\n", i, numero, resultado);
	}
	
	printf("\n");

	printf("TABUADA DE MULTIPLICA��O\n");
	for(i = 0; i <= 10; i++){
		resultado = i * numero;
		printf("%d * %d = %d\n", i, numero, resultado);
	}
	
	printf("\n");	
	
	printf("TABUADA DE DIVIS�O\n");
	for(i = 1; i <=10; i++){
		multiplo = i * numero;
		resultado = multiplo/numero;	
		printf("%d / %d = %d\n", multiplo, numero, resultado);
	}	
	system("pause");
}
