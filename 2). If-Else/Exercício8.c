/** Autor: Gabriel Dias **/

/**
*	Crie um algoritmo que leia um ângulo em graus e apresente:
*       a). O seno do ângulo, se ele pertencer a um quadrante par;
*       b). O cosseno do ângulo, se o ângulo pertencer a um quadrante ímpar.
**/

//	Bibliotecas padrão
#include <stdio.h>
#include <locale.h>
#include <math.h>

// Define o valor para a constante PI
#define PI 3.14159265

int main (){

	// Configura o idioma de acordo com a localização
	setlocale(LC_ALL, "portuguese");

	// Variáveis
	double x, retorno, valorpadrao, retorno2;

	// Processamento
	printf("Funções Trigonométricas");
	printf("\nDigite o valor de um ângulo: ");
	scanf("%lf", &x);

	if (x > 90 && x < 180 || x > 270 && x < 360){

        valorpadrao = PI/180;
        retorno = sin(x*valorpadrao);

        printf("\nO seno de %lf é: %lf", x, retorno);
	}

	if(x > 0 && x < 90 || x > 180 && x < 270){

        valorpadrao = PI/180;
        retorno2 = cos(x*valorpadrao);

        printf("\nO cosseno de %lf é: %lf", x, retorno2);
	}
	system("pause");
}
