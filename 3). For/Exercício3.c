/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo que imprime o quadrado dos números compreendidos entre 1 e 20.
**/

// Bibliotecas padrão
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	// Configura o idioma de acordo com a localização
	setlocale(LC_ALL, "portuguese");
	
	// Variáveis
	int k, quad;
	
	// Processamento
	printf("\nO quadrado dos números de 1 a 20 é:\n");
	for(k = 1; k <= 20; k++){
		quad = pow(k, 2);
		printf(" %d\n", quad);
	}
	system("pause");
}
