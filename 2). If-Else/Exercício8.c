/** Autor: Gabriel Dias **/

/**
*	Crie um algoritmo que leia um �ngulo em graus e apresente:
*       a). O seno do �ngulo, se ele pertencer a um quadrante par;
*       b). O cosseno do �ngulo, se o �ngulo pertencer a um quadrante �mpar.
**/

//	Bibliotecas padr�o
#include <stdio.h>
#include <locale.h>
#include <math.h>

// Define o valor para a constante PI
#define PI 3.14159265

int main (){

	// Configura o idioma de acordo com a localiza��o
	setlocale(LC_ALL, "portuguese");

	// Vari�veis
	double x, retorno, valorpadrao, retorno2;

	// Processamento
	printf("Fun��es Trigonom�tricas");
	printf("\nDigite o valor de um �ngulo: ");
	scanf("%lf", &x);

	if (x > 90 && x < 180 || x > 270 && x < 360){

        valorpadrao = PI/180;
        retorno = sin(x*valorpadrao);

        printf("\nO seno de %lf �: %lf", x, retorno);
	}

	if(x > 0 && x < 90 || x > 180 && x < 270){

        valorpadrao = PI/180;
        retorno2 = cos(x*valorpadrao);

        printf("\nO cosseno de %lf �: %lf", x, retorno2);
	}
	system("pause");
}
