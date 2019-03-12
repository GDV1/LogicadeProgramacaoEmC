/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo que imprima todos os números inteiros do intervalo de 1 a 100.
**/

// Bibliotecas padrão
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	// Configura o idioma de acordo com a localização
    setlocale(LC_ALL, "portuguese");

	// Variáveis
    int k;

	// Processamento
    printf("Algoritmo dos números inteiros.");

    for(k = 1; k <= 100; k++){
        printf(" %d ", k);
	}    
	printf("\n");
	system("pause");
}
