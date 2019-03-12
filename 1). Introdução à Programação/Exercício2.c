/** Autor: Gabriel Dias **/

/**
*	Algoritmo que calcula a área e o perimetro de uma esfera.
**/

//Bibliotecas padrão
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	//Configura o idioma de acordo com a localização
    setlocale(LC_ALL, "Portuguese");

	//Variáveis
	float Raio, Area, Perimetro;

	//Processamento
	printf("Considerando que R = Raio, A = Área e P = Perimetro.\n");
	printf("\nDigite o Raio [R] da esfera: ");
	scanf("%f", &Raio);

	Area = 3.14159*Raio*Raio;

	Perimetro = 2*3.14159*Raio;

	printf("\nA área da esfera é: %.2f", Area);

	printf("\nO Perimetro da esfera é: %.2f", Perimetro);
	
	system("pause");
}
