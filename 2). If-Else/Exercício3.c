/** Autor: Gabriel Dias **/

/**
* 	Fa�a um algoritmo que leia 3 n�meros A, B, C e verifica se o resultado de 
*	3*(A+B)/(A*C)-C+B � maior que o produto de A, B e C.
**/


// Bibliotecas padr�o
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	
	// Configura o idioma de acordo com a localiza��o
	setlocale(LC_ALL, "portuguese");
	
	// Vari�veis
    float A, B, C, EXPRESSAO, PRODUTO;

	// Processamento
    printf("Verifica��o do produto entre 3 n�meros.");

    printf("\nDigite o primeiro n�mero: \n");
    scanf("%f", &A);

    printf("\nDigite o segundo n�mero: \n");
    scanf("%f", &B);

    printf("\nDigite o terceiro n�mero: \n");
    scanf("%f", &C);

    EXPRESSAO = 3*(A+B)/(A*C) - C+B;

    PRODUTO = A*B*C;

    if (EXPRESSAO > PRODUTO){
        printf("\nO resultado da express�o dada e maior que o produto dos tr�s n�meros.");
    }else{
    	printf("\nO produto dos n�meros inseridos N�O e maior que a opera��o executada!");
    }
    system("\npause");
}
