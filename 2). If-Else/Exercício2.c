/** Autor: Gabriel Dias **/

/**
*	Dado um par de valores (x, y) que representam as coordenadas de um ponto
* 	no plano, determinar o quadrante ao qual pertence o ponto ou se este está
* 	sobre um dos eixos cartesianos.
**/

// Bibliotecas padrão
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	
	// Configura o idioma de acordo com a localização
	setlocale (LC_ALL, "portuguese");
	
	// Variáveis
	float x, y;

	// Processamento
	printf("Digite um valor para X: ");
	scanf("%f", &x);
	printf("Digite um valor para Y: ");
	scanf("%f", &y);

	if (x > 0 && y == 0 || x < 0 && y == 0 ){
		printf("\nO ponto está sobre o eixo das abscissas (eixo X).");
	}
	if (x == 0 && y > 0 || x == 0 && y < 0){
		printf("\nO ponto está sobre o eixo das ordenadas (eixo Y).");
	}
	if (x > 0 && y >0){
		printf("\nO ponto está no primeiro quadrante.\n");
	}
	if (x < 0 && y > 0){
		printf("\nO ponto está no segundo quadrante.\n");
	}
	if (x < 0 && y < 0){
		printf("\nO ponto está no terceiro quadrante.\n");
	}
	if (x > 0 && y < 0){
		printf("\nO ponto está no quarto quadrante.\n");
	}
	if (x == 0 && y == 0){
		printf("\nO ponto está na origem das posições.\n");
	}
	system("Pause");
}
