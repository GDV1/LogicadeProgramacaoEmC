/** Autor: Gabriel Dias **/

/**
*	Os oper�rios de uma f�brica s�o divididos em 4 classes, dependendo da quantidade de pe�as que
*	fazem por m�s. A classe A recebe sal�rio m�nimo, as demais recebem sal�rio m�nimo mais uma
*	comiss�o por pe�a al�m das 30 inicias. A tabela a seguir mostra a classifica��o dos oper�rios
*	bem como suas comiss�es. Fa�a um algoritmo que leia: o nome do oper�rio e o n�mero de pe�as
*	produzidas por m�s; calcule o seu sal�rio e imprima seu nome, o total de pe�as produzidas, 
*	a classe a que pertence e seu sal�rio. 
*
*		Classe 				Pe�as/M�s			Comiss�o/Pe�a
*	      A					x <= 30				     -
*		  B				  30 < x <= 35		        3%
*		  C			      35 < x <= 40			    5%
*		  D 				x > 40					10%
*
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define minimo 998

int main(){
	
	// Configura o idioma de acordo com a localiza��o
	setlocale(LC_ALL, "portuguese");
	
	
	// Vari�veis
	char nome[30];
	int numPecas, salario, comissao;
	
	// Processamento
	printf("Informe o nome do funcion�rio: \n");
	scanf("%s", &nome);
	
	printf("Informe o n�mero de pe�as produzidas por esse funcion�rio: \n");
	scanf("%d", &numPecas);
	
	
	if(numPecas <= 30){
		printf("Funcion�rio: %s\n", nome);
		printf("Pe�as produzidas: %d\n", numPecas);
		printf("O funcion�rio pertence a classe A e n�o recebe comiss�o\n");
	}else{
		if(numPecas > 30 && numPecas <= 35){
			salario = minimo + (minimo*0.03*numPecas);
			
			printf("Funcion�rio: %s\n", nome);
			printf("Pe�as produzidas: %d\n", numPecas);
			printf("O funcion�rio pertence a classe B e seu sal�rio final � de %d.\n", salario);
			
		}else{
			if(numPecas > 35 && numPecas <= 40){
				salario = minimo + (minimo*0.05*numPecas);
			
				printf("Funcion�rio: %s\n", nome);
				printf("Pe�as produzidas: %d\n", numPecas);
				printf("O funcion�rio pertence a classe C e seu sal�rio final � de %d.\n", salario);
			}else{
				if(numPecas > 40){
					salario = minimo + (minimo*0.1*numPecas);
			
					printf("Funcion�rio: %s\n", nome);
					printf("Pe�as produzidas: %d\n", numPecas);
					printf("O funcion�rio pertence a classe De seu sal�rio final � de %d.\n", salario);
				}
			}
		}
	}
	
	system("pause");
}
