/** Autor: Gabriel Dias **/

/**
*	Uma empresa decidiu dar uma gratifica��o a seus funcion�rios, baseada no n�mero de horas
*	extras e no n�mero de horas que o funcion�rio faltou ao trabalho. O valor do pr�mio � obtido
*	pela consulta � tabela que segue, na qual: H=n� de horas extras-(2/3*(n� de horas falta)).
*	Fa�a um algoritmo que leia a quantidade de horas extras e de falta (dadas em minutos), determine
*	e imprima a gratifica��o do funcion�rio.
*
*			H(minutos) 				Pr�mio(R$)
*			 x > 2400				   500
*		 1800 < x <= 2400			   400
*		1200 <= x <= 1800			   300
*		 600 <= x < 1200			   200
*		 	 < 600					   100
*
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){

	// Configura o idioma de acordo com a localiza��o
	setlocale(LC_ALL, "portuguese");

	// Vari�veis
	int falta, extra, H;

	// Processamento
	printf("Digite a quantidade de horas extras do funcion�rio (em minutos): ");
	scanf("%d", &extra);
	printf("Digite a quantidade de horas que o funcion�rio faltou ao trabalho (em minutos): ");
	scanf("%d", &falta);

	H = extra - (2/3 *(falta));

	if(H > 2400){
	    printf("\nO funcion�rio receber� um b�nus de R$ 500.");
	}else{
	    if(H > 1800 && H <= 2400){
	        printf("\nO funcion�rio receber� um b�nus de R$ 400.");
	    }else{
	        if(H >= 1200 && H <= 1800){
	            printf("\nO funcion�rio receber� um b�nus de R$ 300.");
	        }else{
	            if(H >= 600 && H < 1200){
	                printf("\nO funcion�rio receber� um b�nus de R$ 200.");
	            }else{
	                if(H < 600){
	                    printf("\nO funcion�rio receber� um b�nus de R$ 100.");
	                }
	            }
	        }
	    }
	}
	system ("pause");
}
