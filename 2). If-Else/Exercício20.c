/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo que receba os coeficientes de uma equa��o do segundo grau, 
*	determine  e imprima suas ra�zes reais, caso haja, ou uma mensagem, caso as ra�zes
*	sejam complexas. 
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <conio.h>

int main (){
	
	// Configura o idioma de acordo com a localiza��o
	setlocale(LC_ALL, "portuguese");

	// Vari�veis
	int a, b, c, delta, raiz, x1, x2;

	// Processamento
	printf("Digite o coeficiente a: ");
	scanf(" %d", &a);
	printf("Digite o coeficiente b: ");
	scanf(" %d", &b);
	printf("Digite o coeficiente c: ");
	scanf(" %d", &c);

	delta = pow(b,2) - (4*a*c);
	
	raiz = sqrt(delta);
	
	x1 = (-b + raiz)/(2*a);

	x2 = (-b - raiz)/(2*a);

	if (a == 0){
		printf("\nOpera��o inv�lida! Tente novamente.\n");
	}else{
		if(delta > 0){	
			printf("\nAs raizes da equa��o s�o %d e %d: \n", x1, x2);
		}else{
			if(delta == 0){	
				printf("\nAs raizes da equa��o s�o iguais e valem %d: \n", x1);
			}else{
				if(delta < 0 ){
					printf("\nA equa��o informada n�o possui ra�zes reais.\n");
				}
			}	
		}
	}
	system("pause");
}
