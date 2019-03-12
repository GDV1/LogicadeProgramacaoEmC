/** Autor: Gabriel Dias **/

/**
*	A conversão de graus Farenheit para Centígrados é obtida por c=(5/9)*(f-32). Faça
*	um programa que calcule e escreva uma tabela de graus Centígraados e graus Fahrenheit
*	que variam de 50 a 65 de 1 em 1.
**/

// Bibliotecas padrão
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	
	// Configura o idioma de acordo com a localização
	setlocale(LC_ALL, "portuguese");

	// Variáveis
	float celsius, fahr;
	
	// Processamento
	for(fahr = 50; fahr <= 65; fahr++){
		celsius = 5.0/9 * (fahr-32);
		printf("Valor de °F = %.2f -> Valor de °C = %.2f\n", fahr, celsius); 
	}
	system("pause");	
}
