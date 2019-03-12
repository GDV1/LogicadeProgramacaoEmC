/** Autor: Gabriel Dias **/

/**
*	Fa�a um algoritmo que leia um n�mero e se ele for maior 30, ent�o imprima metade 
*	do n�mero, caso contr�rio, imprima o dobro do n�mero.
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

	// Configura o idioma de acordo com a localiza��o
    setlocale(LC_ALL, "portuguese");
    
    // Vari�veis
    float numero1, resultado;

	// Processamento
    printf("Digite um n�mero: ");
    scanf("%f", &numero1);

    if (numero1 > 30) {
        resultado = numero1/2;
        printf("\nA metade do numero e: %.2f",resultado);
    }else{
        resultado = numero1*2;
        printf("\nO dobro do numero e: %.2f",resultado);
    }
    system ("PAUSE");
}
