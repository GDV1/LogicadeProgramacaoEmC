/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo que mostra os primos existentes num conjunto de 10 valores informados.
**/

// Bibliotecas padrão
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	
	// Configura de acordo com a localização
	setlocale(LC_ALL, "portuguese");
	
	// Variáveis  
	int n, a, cont1, cont2;
	  
	// Processamento
	for(cont1 = 1; cont1 <= 10; cont1++){
		printf("\nEntre com o %d° número inteiro: ", cont1);
		scanf("%d", &n);
		
		for(a = 1; a <= n; a++){
			if(n % a == 0){
				cont2++;	
			}
		}
	
		if(cont2 == 2){
			printf("O número %d é primo!", n);
		}else{
			printf("O número %d NÃO é primo!", n);
		}
	}
	system("pause");	
} 
