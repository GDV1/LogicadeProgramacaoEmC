/** Autor: Gabriel Dias **/

/**
*	Elabore um algoritmo que receba um n�mero inteiro e imprima uma das mensagens:
*		. "� m�ltiplo de 3";
*		. "N�o � m�ltiplo de 3".
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	// Configura o idioma de acordo com a localiza��o
	setlocale(LC_ALL, "portuguese");
	
	// Vari�veis
	int numero;
	
	// Processamento
	printf("Informe um n�mero: \n");
	scanf("%d", &numero);
	
	if(numero % 3 == 0){
		printf("O n�mero informado � divis�vel por 3\n");
	}else{
		printf("O n�mero informado n�o � divis�vel por 3\n");
	}
	system("pause");
}
