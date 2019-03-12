/** Autor: Gabriel Dias **/

/**
*	Os operários de uma fábrica são divididos em 4 classes, dependendo da quantidade de peças que
*	fazem por mês. A classe A recebe salário mínimo, as demais recebem salário mínimo mais uma
*	comissão por peça além das 30 inicias. A tabela a seguir mostra a classificação dos operários
*	bem como suas comissões. Faça um algoritmo que leia: o nome do operário e o número de peças
*	produzidas por mês; calcule o seu salário e imprima seu nome, o total de peças produzidas, 
*	a classe a que pertence e seu salário. 
*
*		Classe 				Peças/Mês			Comissão/Peça
*	      A					x <= 30				     -
*		  B				  30 < x <= 35		        3%
*		  C			      35 < x <= 40			    5%
*		  D 				x > 40					10%
*
**/

// Bibliotecas padrão
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define minimo 998

int main(){
	
	// Configura o idioma de acordo com a localização
	setlocale(LC_ALL, "portuguese");
	
	
	// Variáveis
	char nome[30];
	int numPecas, salario, comissao;
	
	// Processamento
	printf("Informe o nome do funcionário: \n");
	scanf("%s", &nome);
	
	printf("Informe o número de peças produzidas por esse funcionário: \n");
	scanf("%d", &numPecas);
	
	
	if(numPecas <= 30){
		printf("Funcionário: %s\n", nome);
		printf("Peças produzidas: %d\n", numPecas);
		printf("O funcionário pertence a classe A e não recebe comissão\n");
	}else{
		if(numPecas > 30 && numPecas <= 35){
			salario = minimo + (minimo*0.03*numPecas);
			
			printf("Funcionário: %s\n", nome);
			printf("Peças produzidas: %d\n", numPecas);
			printf("O funcionário pertence a classe B e seu salário final é de %d.\n", salario);
			
		}else{
			if(numPecas > 35 && numPecas <= 40){
				salario = minimo + (minimo*0.05*numPecas);
			
				printf("Funcionário: %s\n", nome);
				printf("Peças produzidas: %d\n", numPecas);
				printf("O funcionário pertence a classe C e seu salário final é de %d.\n", salario);
			}else{
				if(numPecas > 40){
					salario = minimo + (minimo*0.1*numPecas);
			
					printf("Funcionário: %s\n", nome);
					printf("Peças produzidas: %d\n", numPecas);
					printf("O funcionário pertence a classe De seu salário final é de %d.\n", salario);
				}
			}
		}
	}
	
	system("pause");
}
