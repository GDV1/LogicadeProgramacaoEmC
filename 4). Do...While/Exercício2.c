/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo que verifica se o n�mero informado � ou n�o um n�mero primo e
*	imprima uma mensagem.
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	//Configura o idioma de acordo com a localiza��o
	setlocale(LC_ALL, "portuguese");
	
	// Vari�veis
	int x, n;
	int cont = 0;
	
	// Processamento
	do{
		printf("Digite um n�mero inteiro e positivo: ");
		scanf("%d", &x);
	}while(x <= 0);
	
	for(n = 1; n <= x; n++){
		if(x % n == 0){
			cont++;	
		}
	}
	
	if(cont == 2){
		printf("O n�mero %d � primo!", x);
	}else{
		printf("O n�mero %d N�O � primo!", x);
	}
	printf("\n");
	system("pause");	
}
