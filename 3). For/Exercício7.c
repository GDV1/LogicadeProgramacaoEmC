/** Autor: Gabriel Dias **/

/**
*	Faça um algoritmo que determine o maior entre N números. A condição de parada é a entrada
*	de um valor 0, ou seja, o algoritmo deve ficar calculando o maior até que a entrada seja
*	igual a 0. 
**/

// Bibliotecas padrão
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	//Configura o idioma de acordo com a localização
	setlocale(LC_ALL, "portuguese");
	
	// Variáveis
	int n, cont, maior;
	
	// Inicialização de variável
	maior = 0;
	
	// Processamento
	printf("Digite um número inteiro ou 0 para finalizar: \n");
	scanf(" %d", &n);
	
	maior = n;
	
	for(cont = 1; cont <= n; cont++){
		printf("Digite um número inteiro ou 0 para finalizar: \n");
		scanf(" %d", &n);
		if(n > maior){
			maior = n; 
			printf("\nO maior número informado é: %d\n", n);
		}
	}
	system("pause");
}
