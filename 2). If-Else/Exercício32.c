/** Autor: Gabriel Dias **/

/**
*	Uma empresa decidiu dar uma gratificação a seus funcionários, baseada no número de horas
*	extras e no número de horas que o funcionário faltou ao trabalho. O valor do prêmio é obtido
*	pela consulta à tabela que segue, na qual: H=n° de horas extras-(2/3*(n° de horas falta)).
*	Faça um algoritmo que leia a quantidade de horas extras e de falta (dadas em minutos), determine
*	e imprima a gratificação do funcionário.
*
*			H(minutos) 				Prêmio(R$)
*			 x > 2400				   500
*		 1800 < x <= 2400			   400
*		1200 <= x <= 1800			   300
*		 600 <= x < 1200			   200
*		 	 < 600					   100
*
**/

// Bibliotecas padrão
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){

	// Configura o idioma de acordo com a localização
	setlocale(LC_ALL, "portuguese");

	// Variáveis
	int falta, extra, H;

	// Processamento
	printf("Digite a quantidade de horas extras do funcionário (em minutos): ");
	scanf("%d", &extra);
	printf("Digite a quantidade de horas que o funcionário faltou ao trabalho (em minutos): ");
	scanf("%d", &falta);

	H = extra - (2/3 *(falta));

	if(H > 2400){
	    printf("\nO funcionário receberá um bônus de R$ 500.");
	}else{
	    if(H > 1800 && H <= 2400){
	        printf("\nO funcionário receberá um bônus de R$ 400.");
	    }else{
	        if(H >= 1200 && H <= 1800){
	            printf("\nO funcionário receberá um bônus de R$ 300.");
	        }else{
	            if(H >= 600 && H < 1200){
	                printf("\nO funcionário receberá um bônus de R$ 200.");
	            }else{
	                if(H < 600){
	                    printf("\nO funcionário receberá um bônus de R$ 100.");
	                }
	            }
	        }
	    }
	}
	system ("pause");
}
