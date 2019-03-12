/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo que calcula, num conjunto de 15 pessoas:
*
*		1. A maior e a menor altura do grupo
*		2. A média de altura das mulheres
*		3. Número de homens
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
	int cont;
	char sexo; 
	float altura, soma, media, maior, menor, numHomens, numMulheres;
	
	// Inicialização de variáveis
	maior = 0;
	menor = 0;
	soma = 0;
	
	// Processamento
	for(cont = 1; cont <= 15; cont++){
		printf("\nInforme o sexo (M ou F) da %dª pessoa: ", cont);
		scanf(" %c", &sexo);
		printf("Informe a altura (em metros) da %dª pessoa: ", cont);
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
		
		//Conta o número de homens de mulheres
		if(sexo == 'M' || sexo == 'm'){
			numHomens++;
		}else{
			if(sexo == 'F' || sexo == 'f'){
				numMulheres++;
				soma = soma + altura;
			}
		}		
	}
	
	// Média de altura das mulheres	
	media = soma/numMulheres;
	
	printf("\nA maior altura é: %.2f", maior);
	printf("\nA menor altura é: %.2f", menor);
	printf("\nA média de altura das mulheres é: %.2f", media);
	printf("\nO número de homens é: %.2f\n", numHomens);
	
	system("pause");
}
