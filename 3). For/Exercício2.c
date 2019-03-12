/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo que imprime todos os números inteiros de 1 a 100 em ordem decrescente
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
    printf("Algoritmo dos números inteiros.\n");
    for(k = 100; k >= 1; k--){
        printf(" %d ", k);
	}
	printf("\n");
    system("pause");
}
