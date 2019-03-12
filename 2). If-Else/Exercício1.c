/** Autor: Gabriel Dias **/

/**
*	Fa�a um algoritmo que leia dois n�meros e imprima se o primeiro � maior que o segundo.
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

	// Configura o idioma de acordo com a localiza��o
	setlocale(LC_ALL, "portuguese");
	
	// Vari�veis
    float numero1, numero2;

	// Processamento
    printf("Verifica��o de dois n�meros");
    printf("\nDigite o primeiro n�mero: ");
    scanf("%f", &numero1);

    printf("\nDigite o segundo n�mero: ");
    scanf("%f", &numero2);

    if (numero1 > numero2){
        printf("\nO primeiro n�mero � maior que o segundo.");
    }else{
    	printf("\nO segundo n�mero � maior que o primeiro.\n");
	}
	printf("\n");
    system("pause");
}
