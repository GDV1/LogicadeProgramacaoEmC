/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo que l� 10 valores. Todos os n�meros lidos com valor inferior a
*	40 devem ser somados e a soma deve ser mostrada.
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	// Configura o idioma de acordo com a localiza��o
	setlocale(LC_ALL, "portuguese"); 
	
	// Vari�veis
	int num, cont, soma;
	
	// Inicializa��o de vari�vel
	soma = 0;
	
	// Processamento
	for(cont = 1; cont <= 10; cont++){	
		printf("Informe o %d� n�mero: ", cont);
		scanf(" %d", &num);
		if(num < 40){
			soma = soma + num;
		}
	}
	printf("\nO valor da soma dos n�meros menores que 40 �: %d\n", soma);
	system("pause");
}
