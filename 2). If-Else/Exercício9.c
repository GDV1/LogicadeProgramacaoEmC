/** Autor: Gabriel Dias **/

/**
*	Crie um algoritmo que permita entrar com dois números e imprimir o quadrado
*	do menor número e a raiz quadrada do maior número, se for possível.
**/

//Bibliotecas padrão
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	
	//Configura o idioma de acordo com a localização
	setlocale(LC_ALL, "portuguese");

	//Variáveis
	float x, y;

	//Processamento
	printf("Digite o primeiro número: \n");
	scanf("%f", &x);

	printf("\nDigite o segundo número: \n");
	scanf("%f", &y);

	if (x > y){
		printf("\nO valor do menor número ao quadrado é: %.2f\n", pow(y, 2));
		printf("\nO valor da raiz quadrada do maior número é: %.2f\n", sqrt(x));
	}else{
        if (x < y){
            printf("\nO valor do menor número ao quadrado é: %.2f\n", pow(x, 2));
            printf("\nO valor da raiz quadrada do maior número é: %.2f\n", sqrt(y));
        }
	}
	system("pause");
}
