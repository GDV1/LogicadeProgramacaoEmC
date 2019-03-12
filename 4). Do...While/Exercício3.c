/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo que receba uma lista de números positivos ou negativos finalizada
*	com o número zero e forneça, como saída, a soma dos números positivos, a soma dos números
*	negativos e a soma das duas somas parciais.
*
**/

// Bibliocas padrão
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	// Configura o idioma de acordo a localização
    setlocale(LC_ALL, "portuguese");

	// Variáveis
    int num, somapositivos = 0, somanegativos = 0, somatotal, cont;
    
	// Processamento
    printf("Informe um número real ou digite 0 para finalizar: ");
    scanf("%d", &num);

    while(num != 0){
        if (num >  0){
            somapositivos = somapositivos + num;
        }
        if(num < 0){
            somanegativos = somanegativos + num;
        }

        printf("\nInforme mais um número real ou digite 0 para finalizar: ");
        scanf("%d", &num);
    }
    
    somatotal = somapositivos + somanegativos;

    printf("\n A soma dos números positivos informados é: %d", somapositivos);
    printf("\nA soma dos números negativos informados é: %d", somanegativos);
    printf("\nA soma total é igual à: %d", somatotal);
    system("pause");
}
