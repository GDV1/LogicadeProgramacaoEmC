/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo que receba 3 n�meros e mostre o menor.
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <locale.h> 

int main (){
	
	// Configura o idioma de acordo com a localiza��o
    setlocale(LC_ALL, "portuguese");
    
    // Vari�veis
    int n1, n2, n3;
    
    // Processamento
    printf("Digite um n�mero: ");
    scanf("%d", &n1);
    printf("\nDigite outro n�mero: ");
    scanf("%d", &n2);
    printf("\nDigite mais outro n�mero: ");
    scanf("%d", &n3);
    
   	if(n1 < n2){
   		if(n1 < n3){
   			printf("\nO menor n�mero �: %d\n", n1);
		}else{
		   	printf("\nO menor n�mero �: %d\n", n3);
		}
	}else{
		if(n2 < n3){
	   		printf("\nO menor n�mero �: %d\n", n2);
		}else{
		   	printf("\nO menor n�mero �: %d\n", n3);
		}
	}	   
    system ("pause");
}
