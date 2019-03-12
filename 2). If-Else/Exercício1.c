/** Autor: Gabriel Dias **/

/**
*	Faça um algoritmo que leia dois números e imprima se o primeiro é maior que o segundo.
**/

// Bibliotecas padrão
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

	// Configura o idioma de acordo com a localização
	setlocale(LC_ALL, "portuguese");
	
	// Variáveis
    float numero1, numero2;

	// Processamento
    printf("Verificação de dois números");
    printf("\nDigite o primeiro número: ");
    scanf("%f", &numero1);

    printf("\nDigite o segundo número: ");
    scanf("%f", &numero2);

    if (numero1 > numero2){
        printf("\nO primeiro número é maior que o segundo.");
    }else{
    	printf("\nO segundo número é maior que o primeiro.\n");
	}
	printf("\n");
    system("pause");
}
