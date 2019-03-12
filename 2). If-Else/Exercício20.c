/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo que receba os coeficientes de uma equação do segundo grau, 
*	determine  e imprima suas raízes reais, caso haja, ou uma mensagem, caso as raízes
*	sejam complexas. 
**/

// Bibliotecas padrão
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <conio.h>

int main (){
	
	// Configura o idioma de acordo com a localização
	setlocale(LC_ALL, "portuguese");

	// Variáveis
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
		printf("\nOperação inválida! Tente novamente.\n");
	}else{
		if(delta > 0){	
			printf("\nAs raizes da equação são %d e %d: \n", x1, x2);
		}else{
			if(delta == 0){	
				printf("\nAs raizes da equação são iguais e valem %d: \n", x1);
			}else{
				if(delta < 0 ){
					printf("\nA equação informada não possui raízes reais.\n");
				}
			}	
		}
	}
	system("pause");
}
