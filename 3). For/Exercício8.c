/** Autor: Gabriel Dias **/

/**
*	Programa que calcula um somat�rio de 1 a 10, de um valor k ao quadrado. 
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (){
	
	// Configura o idioma de acordo com a localiza��o
    setlocale(LC_ALL, "portuguese");

	// Vari�veis
    int k, soma = 0;

	// Processamento
	for(k = 1; k <= 10; k++){
		soma = soma + pow(k, 2);
	}
    printf("\nO somat�rio dos n�meros �: %d\n", soma);
    system("pause");
}
