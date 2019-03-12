/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo que receba 3 n�meros inteiros obrigatoriamente em ordem crescente
*	(considere que o usu�rio ir� informar os n�meros nessa ordem) e um quarto n�mero que n�o
*	necessariamente siga esta regra. Mostre, em seguida, os 4 n�meros em ordem decrescente.
*	Considere que os n�meros informados s�o diferentes. 
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	// Configura o idioma de acordo de localiza��o 
    setlocale(LC_ALL, "portuguese");

	// Vari�veis
    int a, b, c, d;

	// Processamento
    printf("Digite tr�s n�meros em ordem crescente!");

    printf("\nN�mero 1: ");
    scanf("%d", &a);
    printf("\nN�mero 2: ");
    scanf("%d", &b);
    printf("\nN�mero 3: ");
    scanf("%d", &c);

    printf("\nAgora, digite um n�mero aleat�rio: ");
    scanf("%d", &d);

    if(d < a){
        printf("A ordem decrescente dos n�meros �: %d, %d, %d, %d\n", c, b, a, d);
    }else{
        if(d < b){
            printf("A ordem decrescente dos n�meros �: %d, %d, %d, %d\n", c, b, d, a);
        }else{
            if(d < c){
                printf("A ordem decrescente dos n�meros �: %d, %d, %d, %d\n", c, d, a, b);
            }else{
                printf("A ordem decrescente dos n�meros �: %d, %d, %d, %d\n", d, c, b, a);

            }
        }
    system("pause");
	}
}
