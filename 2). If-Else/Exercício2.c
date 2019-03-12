/** Autor: Gabriel Dias **/

/**
*	Dado um par de valores (x, y) que representam as coordenadas de um ponto
* 	no plano, determinar o quadrante ao qual pertence o ponto ou se este est�
* 	sobre um dos eixos cartesianos.
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	
	// Configura o idioma de acordo com a localiza��o
	setlocale (LC_ALL, "portuguese");
	
	// Vari�veis
	float x, y;

	// Processamento
	printf("Digite um valor para X: ");
	scanf("%f", &x);
	printf("Digite um valor para Y: ");
	scanf("%f", &y);

	if (x > 0 && y == 0 || x < 0 && y == 0 ){
		printf("\nO ponto est� sobre o eixo das abscissas (eixo X).");
	}
	if (x == 0 && y > 0 || x == 0 && y < 0){
		printf("\nO ponto est� sobre o eixo das ordenadas (eixo Y).");
	}
	if (x > 0 && y >0){
		printf("\nO ponto est� no primeiro quadrante.\n");
	}
	if (x < 0 && y > 0){
		printf("\nO ponto est� no segundo quadrante.\n");
	}
	if (x < 0 && y < 0){
		printf("\nO ponto est� no terceiro quadrante.\n");
	}
	if (x > 0 && y < 0){
		printf("\nO ponto est� no quarto quadrante.\n");
	}
	if (x == 0 && y == 0){
		printf("\nO ponto est� na origem das posi��es.\n");
	}
	system("Pause");
}
