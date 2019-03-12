/** Autor: Gabriel Dias **/

/**
*	Faça um algoritmo que leia um número e se ele for maior 30, então imprima metade 
*	do número, caso contrário, imprima o dobro do número.
**/

// Bibliotecas padrão
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

	// Configura o idioma de acordo com a localização
    setlocale(LC_ALL, "portuguese");
    
    // Variáveis
    float numero1, resultado;

	// Processamento
    printf("Digite um número: ");
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
