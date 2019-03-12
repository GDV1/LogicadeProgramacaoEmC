/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo que verifica se o número informado é ou não um número primo e
*	imprima uma mensagem.
**/

// Bibliotecas padrão
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	//Configura o idioma de acordo com a localização
	setlocale(LC_ALL, "portuguese");
	
	// Variáveis
	int x, n;
	int cont = 0;
	
	// Processamento
	do{
		printf("Digite um número inteiro e positivo: ");
		scanf("%d", &x);
	}while(x <= 0);
	
	for(n = 1; n <= x; n++){
		if(x % n == 0){
			cont++;	
		}
	}
	
	if(cont == 2){
		printf("O número %d é primo!", x);
	}else{
		printf("O número %d NÃO é primo!", x);
	}
	printf("\n");
	system("pause");	
}
