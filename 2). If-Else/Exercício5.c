/** Autor: Gabriel Dias **/

/**
*	Fa�a um algoritmo que leia um n�mero e imprima se ele est� na faixa de 
*	n�meros entre 100 e 1000.
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	
	// Configura o idioma de acordo com a localiza��o
	setlocale(LC_ALL, "portuguese");
	
	// Vari�veis
	float numero1;

	// Processamento
	printf("Digite um n�mero: ");
	scanf("%f", &numero1);

	if(numero1 >= 100 && numero1 <= 1000){
		printf("\nO n�mero est� na faixa entre 100 e 1000.\n");
	}else{
		printf("\nO n�mero N�O est� na faixa entre 100 e 1000.\n");
	}
	system("pause");
}
