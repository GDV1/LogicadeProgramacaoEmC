/** Autor: Gabriel Dias **/

/**
*	Programa que gera um valor a partir de um n�mero N e uma s�rie H que tem a seguinte forma
*	H = 1 + (1/2) + (1/3) + (1/4) + ... + (1/N) 
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	// Configura o idioma de acordo com a localiza��o
	setlocale(LC_ALL, "portuguese");

	// Vari�veis
	int n, i;
	float soma, h=0;

	// Processamento
	printf("Digite o  �ltimo denominador: ");
	scanf("%d", &n);

	if(n <= 0){
		printf("\nOpera��o inv�lida. Tente novamente!");
	}else{
		for (i = 1; i <= n; i++){
            soma = i;
            h = h + (1/soma);
        }
    	printf("\nO resultado da soma �: %.2f\n", h);
	}
    system("pause");
}
