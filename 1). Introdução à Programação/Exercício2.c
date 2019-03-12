/** Autor: Gabriel Dias **/

/**
*	Algoritmo que calcula a �rea e o perimetro de uma esfera.
**/

//Bibliotecas padr�o
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	//Configura o idioma de acordo com a localiza��o
    setlocale(LC_ALL, "Portuguese");

	//Vari�veis
	float Raio, Area, Perimetro;

	//Processamento
	printf("Considerando que R = Raio, A = �rea e P = Perimetro.\n");
	printf("\nDigite o Raio [R] da esfera: ");
	scanf("%f", &Raio);

	Area = 3.14159*Raio*Raio;

	Perimetro = 2*3.14159*Raio;

	printf("\nA �rea da esfera �: %.2f", Area);

	printf("\nO Perimetro da esfera �: %.2f", Perimetro);
	
	system("pause");
}
