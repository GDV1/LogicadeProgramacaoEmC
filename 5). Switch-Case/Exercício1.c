/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo para calcular as dedu��es de impostos estatuais e federais sobre o
*	sal�rio bruto de um funcion�rio. Estas dedu��es s�o calculadas de acordo com a seguint tabela:
*	
*			Dedu��es Estaduais				Dedu��es Federais
*		Sal�rio		Percentagem			Sal�rio 	Percentagem
*		< 5000			10				< 5000			4
*	   	< 15000			20				>= 5000			6
*	   >= 15000			30				  ---          ---
*
*
*	O programa deve ler o nome de um funcion�rio e seu sal�rio; calcular os descontos estadual,
*	federal bem como o sal�rio l�quido e imprimir o nome do funcion�rio, seu sal�rio bruto e l�quido.
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	// Configura o idioma de acordo com a localiza��o
	setlocale(LC_ALL, "portuguese");
	
	// Vari�veis
	int codigo, salario, salarioliq, dedEstadual, dedFederal;
	char nome[20];
	
	
	// Processamento
	printf("Informe o nome do funcion�rio:\n");
	scanf("%s", &nome);
	
	printf("Informe o sal�rio: \n");
	scanf("%d", &salario);
	
	printf("Informe o tipo de dedu��o desejada:\n");
	printf("1 - Dedu��o Estadual\n");	
	printf("2 - Dedu��o Federal\n");
	scanf("%d", &codigo);
		
	switch(codigo){
		case 1: 
			if(salario < 5000){
				dedEstadual = salario * 0.1;
				salarioliq = salario - dedEstadual;
				
				printf("Funcion�rio: %s\n", nome);
				printf("Sal�rio bruto: %d\n", salario);
				printf("Sal�rio liquido: %d\n", salarioliq);				
			}else{
				if(salario >= 5000 && salario < 15000){
					dedEstadual = salario * 0.2;
					salarioliq = salario - dedEstadual;
									
					printf("Funcion�rio: %s\n", nome);
					printf("Sal�rio bruto: %d\n", salario);
					printf("Sal�rio liquido: %d\n", salarioliq);	
				}else{
					if(salario >= 15000){
						dedEstadual = salario * 0.3;
						salarioliq = salario - dedEstadual;
					
						printf("Funcion�rio: %c\n", nome);
						printf("Sal�rio bruto: %d\n", salario);
						printf("Sal�rio liquido: %d\n", salarioliq);
					}
				}
			}
		break;
		
		case 2:
			if(salario < 5000){
				dedFederal = salario * 0.04;
				salarioliq = salario - dedFederal;
				
				printf("Funcion�rio: %s\n", nome);
				printf("Sal�rio bruto: %d\n", salario);
				printf("Sal�rio liquido: %d\n", salarioliq);				
			}else{
				dedFederal = salario * 0.06;
				salarioliq = salario - dedFederal;
				
				printf("Funcion�rio: %s\n", nome);
				printf("Sal�rio bruto: %d\n", salario);
				printf("Sal�rio liquido: %d\n", salarioliq);
			}
		break;
	}	
	system("pause");
}
