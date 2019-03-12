/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo que receba 3 números inteiros obrigatoriamente em ordem crescente
*	(considere que o usuário irá informar os números nessa ordem) e um quarto número que não
*	necessariamente siga esta regra. Mostre, em seguida, os 4 números em ordem decrescente.
*	Considere que os números informados são diferentes. 
**/

// Bibliotecas padrão
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	// Configura o idioma de acordo de localização 
    setlocale(LC_ALL, "portuguese");

	// Variáveis
    int a, b, c, d;

	// Processamento
    printf("Digite três números em ordem crescente!");

    printf("\nNúmero 1: ");
    scanf("%d", &a);
    printf("\nNúmero 2: ");
    scanf("%d", &b);
    printf("\nNúmero 3: ");
    scanf("%d", &c);

    printf("\nAgora, digite um número aleatório: ");
    scanf("%d", &d);

    if(d < a){
        printf("A ordem decrescente dos números é: %d, %d, %d, %d\n", c, b, a, d);
    }else{
        if(d < b){
            printf("A ordem decrescente dos números é: %d, %d, %d, %d\n", c, b, d, a);
        }else{
            if(d < c){
                printf("A ordem decrescente dos números é: %d, %d, %d, %d\n", c, d, a, b);
            }else{
                printf("A ordem decrescente dos números é: %d, %d, %d, %d\n", d, c, b, a);

            }
        }
    system("pause");
	}
}
