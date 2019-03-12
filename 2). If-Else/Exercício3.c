/** Autor: Gabriel Dias **/

/**
* 	Faça um algoritmo que leia 3 números A, B, C e verifica se o resultado de 
*	3*(A+B)/(A*C)-C+B é maior que o produto de A, B e C.
**/


// Bibliotecas padrão
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	
	// Configura o idioma de acordo com a localização
	setlocale(LC_ALL, "portuguese");
	
	// Variáveis
    float A, B, C, EXPRESSAO, PRODUTO;

	// Processamento
    printf("Verificação do produto entre 3 números.");

    printf("\nDigite o primeiro número: \n");
    scanf("%f", &A);

    printf("\nDigite o segundo número: \n");
    scanf("%f", &B);

    printf("\nDigite o terceiro número: \n");
    scanf("%f", &C);

    EXPRESSAO = 3*(A+B)/(A*C) - C+B;

    PRODUTO = A*B*C;

    if (EXPRESSAO > PRODUTO){
        printf("\nO resultado da expressão dada e maior que o produto dos três números.");
    }else{
    	printf("\nO produto dos números inseridos NÃO e maior que a operação executada!");
    }
    system("\npause");
}
