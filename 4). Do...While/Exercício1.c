/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo que receba um conjunto de valores inteiros e positivos, calcule
*	e imprima o maior e o menor valor do conjunto.	
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	// Configura o idioma de acordo com a localiza��a
	setlocale(LC_ALL, "portuguese");

	// Vari�veis
	int num, maior, menor;

	// Inicializa��o de vari�veis
	maior = 0;
	menor = 0;

	// Processamento
	do{
		printf("Informe o n�mero inteiro e positivo ou digite 0 para finalizar: ");
		scanf("%d", &num);
		
		if(num > 0){
			if(num > maior){
				maior = num;
			}else{
				if(num < 0){
					menor = num;
				}
			}
		}
	}while(num != 0);
	
    printf("\nO maior n�mero informado �: %d", maior);
	printf("\nO menor n�mero informado �: %d", menor);
	printf("\n");
    system("pause");
}
