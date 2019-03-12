/** Autor: Gabriel Dias **/

/**
*	Programa que gera um valor a partir de um número N e uma série H que tem a seguinte forma
*	H = 1 + (1/2) + (1/3) + (1/4) + ... + (1/N) 
**/

// Bibliotecas padrão
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	// Configura o idioma de acordo com a localização
	setlocale(LC_ALL, "portuguese");

	// Variáveis
	int n, i;
	float soma, h=0;

	// Processamento
	printf("Digite o  último denominador: ");
	scanf("%d", &n);

	if(n <= 0){
		printf("\nOperação inválida. Tente novamente!");
	}else{
		for (i = 1; i <= n; i++){
            soma = i;
            h = h + (1/soma);
        }
    	printf("\nO resultado da soma é: %.2f\n", h);
	}
    system("pause");
}
