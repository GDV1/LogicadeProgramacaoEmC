/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo para calcular as deduções de impostos estatuais e federais sobre o
*	salário bruto de um funcionário. Estas deduções são calculadas de acordo com a seguint tabela:
*	
*			Deduções Estaduais				Deduções Federais
*		Salário		Percentagem			Salário 	Percentagem
*		< 5000			10				< 5000			4
*	   	< 15000			20				>= 5000			6
*	   >= 15000			30				  ---          ---
*
*
*	O programa deve ler o nome de um funcionário e seu salário; calcular os descontos estadual,
*	federal bem como o salário líquido e imprimir o nome do funcionário, seu salário bruto e líquido.
**/

// Bibliotecas padrão
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	// Configura o idioma de acordo com a localização
	setlocale(LC_ALL, "portuguese");
	
	// Variáveis
	int codigo, salario, salarioliq, dedEstadual, dedFederal;
	char nome[20];
	
	
	// Processamento
	printf("Informe o nome do funcionário:\n");
	scanf("%s", &nome);
	
	printf("Informe o salário: \n");
	scanf("%d", &salario);
	
	printf("Informe o tipo de dedução desejada:\n");
	printf("1 - Dedução Estadual\n");	
	printf("2 - Dedução Federal\n");
	scanf("%d", &codigo);
		
	switch(codigo){
		case 1: 
			if(salario < 5000){
				dedEstadual = salario * 0.1;
				salarioliq = salario - dedEstadual;
				
				printf("Funcionário: %s\n", nome);
				printf("Salário bruto: %d\n", salario);
				printf("Salário liquido: %d\n", salarioliq);				
			}else{
				if(salario >= 5000 && salario < 15000){
					dedEstadual = salario * 0.2;
					salarioliq = salario - dedEstadual;
									
					printf("Funcionário: %s\n", nome);
					printf("Salário bruto: %d\n", salario);
					printf("Salário liquido: %d\n", salarioliq);	
				}else{
					if(salario >= 15000){
						dedEstadual = salario * 0.3;
						salarioliq = salario - dedEstadual;
					
						printf("Funcionário: %c\n", nome);
						printf("Salário bruto: %d\n", salario);
						printf("Salário liquido: %d\n", salarioliq);
					}
				}
			}
		break;
		
		case 2:
			if(salario < 5000){
				dedFederal = salario * 0.04;
				salarioliq = salario - dedFederal;
				
				printf("Funcionário: %s\n", nome);
				printf("Salário bruto: %d\n", salario);
				printf("Salário liquido: %d\n", salarioliq);				
			}else{
				dedFederal = salario * 0.06;
				salarioliq = salario - dedFederal;
				
				printf("Funcionário: %s\n", nome);
				printf("Salário bruto: %d\n", salario);
				printf("Salário liquido: %d\n", salarioliq);
			}
		break;
	}	
	system("pause");
}
