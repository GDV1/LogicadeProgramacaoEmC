/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo que receba 3 números e mostre o menor.
**/

// Bibliotecas padrão
#include <stdio.h>
#include <locale.h> 

int main (){
	
	// Configura o idioma de acordo com a localização
    setlocale(LC_ALL, "portuguese");
    
    // Variáveis
    int n1, n2, n3;
    
    // Processamento
    printf("Digite um número: ");
    scanf("%d", &n1);
    printf("\nDigite outro número: ");
    scanf("%d", &n2);
    printf("\nDigite mais outro número: ");
    scanf("%d", &n3);
    
   	if(n1 < n2){
   		if(n1 < n3){
   			printf("\nO menor número é: %d\n", n1);
		}else{
		   	printf("\nO menor número é: %d\n", n3);
		}
	}else{
		if(n2 < n3){
	   		printf("\nO menor número é: %d\n", n2);
		}else{
		   	printf("\nO menor número é: %d\n", n3);
		}
	}	   
    system ("pause");
}
