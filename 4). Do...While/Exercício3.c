/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo que receba uma lista de n�meros positivos ou negativos finalizada
*	com o n�mero zero e forne�a, como sa�da, a soma dos n�meros positivos, a soma dos n�meros
*	negativos e a soma das duas somas parciais.
*
**/

// Bibliocas padr�o
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	// Configura o idioma de acordo a localiza��o
    setlocale(LC_ALL, "portuguese");

	// Vari�veis
    int num, somapositivos = 0, somanegativos = 0, somatotal, cont;
    
	// Processamento
    printf("Informe um n�mero real ou digite 0 para finalizar: ");
    scanf("%d", &num);

    while(num != 0){
        if (num >  0){
            somapositivos = somapositivos + num;
        }
        if(num < 0){
            somanegativos = somanegativos + num;
        }

        printf("\nInforme mais um n�mero real ou digite 0 para finalizar: ");
        scanf("%d", &num);
    }
    
    somatotal = somapositivos + somanegativos;

    printf("\n A soma dos n�meros positivos informados �: %d", somapositivos);
    printf("\nA soma dos n�meros negativos informados �: %d", somanegativos);
    printf("\nA soma total � igual �: %d", somatotal);
    system("pause");
}
