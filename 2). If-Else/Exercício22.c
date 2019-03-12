/** Autor: Gabriel Dias **/

/**
*	Elabore um algoritmo que receba um número inteiro e imprima uma das mensagens:
*		. "É múltiplo de 3";
*		. "Não é múltiplo de 3".
**/

// Bibliotecas padrão
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	// Configura o idioma de acordo com a localização
	setlocale(LC_ALL, "portuguese");
	
	// Variáveis
	int numero;
	
	// Processamento
	printf("Informe um número: \n");
	scanf("%d", &numero);
	
	if(numero % 3 == 0){
		printf("O número informado é divisível por 3\n");
	}else{
		printf("O número informado não é divisível por 3\n");
	}
	system("pause");
}
