/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo que calcula, num conjunto de 15 pessoas:
*
*		1. A maior e a menor altura do grupo
*		2. A m�dia de altura das mulheres
*		3. N�mero de homens
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
	int cont;
	char sexo; 
	float altura, soma, media, maior, menor, numHomens, numMulheres;
	
	// Inicializa��o de vari�veis
	maior = 0;
	menor = 0;
	soma = 0;
	
	// Processamento
	for(cont = 1; cont <= 15; cont++){
		printf("\nInforme o sexo (M ou F) da %d� pessoa: ", cont);
		scanf(" %c", &sexo);
		printf("Informe a altura (em metros) da %d� pessoa: ", cont);
		scanf("%f", &altura);	
		
		// Verifica a maior altura
		if(altura > maior){
			maior = altura;
		}
		
		// Verifica a menor altura
		if(menor == 0){
			menor = altura;
		}else{
			if(altura < menor){
				menor = altura;
			}
		}
		
		//Conta o n�mero de homens de mulheres
		if(sexo == 'M' || sexo == 'm'){
			numHomens++;
		}else{
			if(sexo == 'F' || sexo == 'f'){
				numMulheres++;
				soma = soma + altura;
			}
		}		
	}
	
	// M�dia de altura das mulheres	
	media = soma/numMulheres;
	
	printf("\nA maior altura �: %.2f", maior);
	printf("\nA menor altura �: %.2f", menor);
	printf("\nA m�dia de altura das mulheres �: %.2f", media);
	printf("\nO n�mero de homens �: %.2f\n", numHomens);
	
	system("pause");
}
