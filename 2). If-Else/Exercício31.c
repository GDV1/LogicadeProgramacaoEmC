/** Autor: Gabriel Dias **/

/**
*	Fa�a um algoritmo que receba a idade e o peso de uma pessoa e, de acordo com a tabela
*	a seguir, verifique em qual grupo de risco ela se encaixa.
*
*		Idade				Peso
*							At� 60 KG		Entre 60 e 90		Acima de 90
*		Menores que 20			9				   8				7
*		De 20 a 50				6				   5				4
*		Maiores que 50			3				   2				1
*
**/

// Bibliotecas padr�o
#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	
	// Configura o idioma de acordo com a localiza��o
	setlocale(LC_ALL, "portuguese");

	// Vari�veis
	int idade, peso;
	printf("Digite a sua idade: ");
	scanf(" %d", &idade);
	printf("\nDigite o seu peso: ");
	scanf(" %d", &peso);

	// Processamento
	if(idade < 20){
        if (peso < 60){
    		printf("\nVoc� est� no grupo de risco n�mero 9.\n");
        }else {
        	if(peso >= 60 && peso <= 90){
        		printf("\nVoc� est� no grupo de risco n�mero 8.\n");
        	}else{
        		printf("\nVoc� est� no grupo de risco n�mero 7.\n");
        	}
        }
	}else{
    	if(idade < 50){
        	if(peso < 60){
        		printf("\nVoc� est� no grupo de risco n�mero 6.\n");
        	}else{
        		if(peso >= 60 && peso <= 90){
        			printf("\nVoc� est� no grupo de risco n�mero 5.\n");
        		}else{
        			printf("\nVoc� est� no grupo de risco n�mero 4.\n");
        		}
        	}
    	}else{ 
            if(peso < 60){
                printf("\nVoc� est� no grupo de risco n�mero 3.\n");
            }else{
          		if(peso >= 60 && peso <= 90){
            		printf("\nVoc� est� no grupo de risco n�mero 2.\n");
            	}else{
            		printf("\nVoc� est� no grupo de risco n�mero 1.\n");
            	}
            }
        }
    }
	system("pause");
}
