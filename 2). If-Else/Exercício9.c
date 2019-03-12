/** Autor: Gabriel Dias **/

/**
*	Crie um algoritmo que permita entrar com dois n�meros e imprimir o quadrado
*	do menor n�mero e a raiz quadrada do maior n�mero, se for poss�vel.
**/

//Bibliotecas padr�o
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	
	//Configura o idioma de acordo com a localiza��o
	setlocale(LC_ALL, "portuguese");

	//Vari�veis
	float x, y;

	//Processamento
	printf("Digite o primeiro n�mero: \n");
	scanf("%f", &x);

	printf("\nDigite o segundo n�mero: \n");
	scanf("%f", &y);

	if (x > y){
		printf("\nO valor do menor n�mero ao quadrado �: %.2f\n", pow(y, 2));
		printf("\nO valor da raiz quadrada do maior n�mero �: %.2f\n", sqrt(x));
	}else{
        if (x < y){
            printf("\nO valor do menor n�mero ao quadrado �: %.2f\n", pow(x, 2));
            printf("\nO valor da raiz quadrada do maior n�mero �: %.2f\n", sqrt(y));
        }
	}
	system("pause");
}
