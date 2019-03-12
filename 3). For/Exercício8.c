/** Autor: Gabriel Dias **/

/**
*	Programa que calcula um somatório de 1 a 10, de um valor k ao quadrado. 
**/

// Bibliotecas padrão
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (){
	
	// Configura o idioma de acordo com a localização
    setlocale(LC_ALL, "portuguese");

	// Variáveis
    int k, soma = 0;

	// Processamento
	for(k = 1; k <= 10; k++){
		soma = soma + pow(k, 2);
	}
    printf("\nO somatório dos números é: %d\n", soma);
    system("pause");
}
