/** Autor: Gabriel Dias **/

/**
*	Fa�a um algoritmo que determine o maior entre N n�meros. A condi��o de parada � a entrada
*	de um valor 0, ou seja, o algoritmo deve ficar calculando o maior at� que a entrada seja
*	igual a 0. 
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	//Configura o idioma de acordo com a localiza��o
	setlocale(LC_ALL, "portuguese");
	
	// Vari�veis
	int n, cont, maior;
	
	// Inicializa��o de vari�vel
	maior = 0;
	
	// Processamento
	printf("Digite um n�mero inteiro ou 0 para finalizar: \n");
	scanf(" %d", &n);
	
	maior = n;
	
	for(cont = 1; cont <= n; cont++){
		printf("Digite um n�mero inteiro ou 0 para finalizar: \n");
		scanf(" %d", &n);
		if(n > maior){
			maior = n; 
			printf("\nO maior n�mero informado �: %d\n", n);
		}
	}
	system("pause");
}
