/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo que imprima todos os n�meros inteiros do intervalo de 1 a 100.
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	// Configura o idioma de acordo com a localiza��o
    setlocale(LC_ALL, "portuguese");

	// Vari�veis
    int k;

	// Processamento
    printf("Algoritmo dos n�meros inteiros.");

    for(k = 1; k <= 100; k++){
        printf(" %d ", k);
	}    
	printf("\n");
	system("pause");
}
