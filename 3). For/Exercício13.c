/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo que receba a idade de 10 pessoas, calcule e imprima a quantidade
*	pessoas maiores de idade.
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	// Configura o idioma de acordo com a localiza��o
	setlocale(LC_ALL, "portuguese");
	
	// Vari�veis
	int cont, idade, num = 0;
	
	//Processamento
	for(cont = 0; cont <10; cont++){
		printf("Informe a idade da %d� pessoa: ", cont+1);
		scanf("%d", &idade);
		
		if(idade >= 18) num++;
	}
	printf("\n%d pessoas s�o maiores de 18 anos.\n", num);
	system("pause");
}
