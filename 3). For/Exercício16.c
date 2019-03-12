/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo que mostra os primos existentes num conjunto de 10 valores informados.
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	
	// Configura de acordo com a localiza��o
	setlocale(LC_ALL, "portuguese");
	
	// Vari�veis  
	int n, a, cont1, cont2;
	  
	// Processamento
	for(cont1 = 1; cont1 <= 10; cont1++){
		printf("\nEntre com o %d� n�mero inteiro: ", cont1);
		scanf("%d", &n);
		
		for(a = 1; a <= n; a++){
			if(n % a == 0){
				cont2++;	
			}
		}
	
		if(cont2 == 2){
			printf("O n�mero %d � primo!", n);
		}else{
			printf("O n�mero %d N�O � primo!", n);
		}
	}
	system("pause");	
} 
