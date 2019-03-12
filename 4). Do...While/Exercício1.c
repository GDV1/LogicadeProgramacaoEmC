/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo que receba um conjunto de valores inteiros e positivos, calcule
*	e imprima o maior e o menor valor do conjunto.	
**/

// Bibliotecas padrão
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	// Configura o idioma de acordo com a localizaçõa
	setlocale(LC_ALL, "portuguese");

	// Variáveis
	int num, maior, menor;

	// Inicialização de variáveis
	maior = 0;
	menor = 0;

	// Processamento
	do{
		printf("Informe o número inteiro e positivo ou digite 0 para finalizar: ");
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
	
    printf("\nO maior número informado é: %d", maior);
	printf("\nO menor número informado é: %d", menor);
	printf("\n");
    system("pause");
}
