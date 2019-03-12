/** Autor: Gabriel Dias **/

/**
*	A convers�o de graus Farenheit para Cent�grados � obtida por c=(5/9)*(f-32). Fa�a
*	um programa que calcule e escreva uma tabela de graus Cent�graados e graus Fahrenheit
*	que variam de 50 a 65 de 1 em 1.
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	
	// Configura o idioma de acordo com a localiza��o
	setlocale(LC_ALL, "portuguese");

	// Vari�veis
	float celsius, fahr;
	
	// Processamento
	for(fahr = 50; fahr <= 65; fahr++){
		celsius = 5.0/9 * (fahr-32);
		printf("Valor de �F = %.2f -> Valor de �C = %.2f\n", fahr, celsius); 
	}
	system("pause");	
}
