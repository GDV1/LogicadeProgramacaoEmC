/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo para calcular e imprimir o sal�rio de um vendedor que trabalha na se��o de
*	TV'S de uma loja de eletrodom�sticos. Este vendedor recebe um sal�rio fixo e comiss�es sobre a quantidade
*	de pe�as vendidas, de acordo com a tabela abaixo. Sabe-se que ele tem um desconto de 8% sobre seu sal�rio
*	fixo para o INSS e, se seu sal�rio total (fixo + comiss�o) for maior que R$ 1.300,00 ele ainda ter� um 
*	desconto de 5% sobre o sal�rio total. O algoritmo deve: 
*		
*		1). Ler o nome do funcion�rio, seu sal�rio fixo, o n�mero de TV'S de 29 e 42 polegadas vendidas no m�s;
*		2). Calcular os sal�rios total e l�quido e imprimir o nome do funcion�rio e seu sal�rio l�quido.
*
*		Tamanho			  Total de TV'S vendidas 		     Comiss�o/TV
*		  42					>= 10							20,00
*	   polegadas				< 10							10,00
*
*		  29					>= 20							5,00
*	   polegadas				< 20 							3,00
*
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	// Configura o idioma de acordo com a localiza��o
	setlocale(LC_ALL, "portuguese");
	
	// Vari�veis
	int salario_fixo, salario_total, comissao, numTv29, numTv42; 
	int desconto_inss, inss, total_29, total_42, desconto_salario, salario;
	char nome[30];
	
	// Processamento
	printf("Informe o nome do funcion�rio: \n");
	scanf("%s", &nome);
	
	printf("Informe o sal�rio: \n");
	scanf("%d", &salario_fixo);
	
	printf("Informe a quantidade de Televisores de 29 polegadas vendidos: \n");
	scanf("%d", &numTv29);
	
	printf("Informe a quantidade de Televisores de 42 polegadas vendidos: \n");
	scanf("%d", &numTv42);
	
	if(numTv29 >= 20){
		total_29 = 5 * numTv29;
	}else{
		total_29 = 3 * numTv29;
	}
	
	if(numTv42 >= 10){
		total_42 = 20 * numTv42;
	}else{
		total_42 = 10 * numTv42;
	}
	
	comissao = total_29 + total_42;
	
	inss = salario_fixo * 0.08;
	
	desconto_inss = salario_fixo - inss;
	
	salario_total = desconto_inss + comissao;
	
	if(salario_total > 1300){
		desconto_salario = salario_total * 0.05;
		salario = salario_total - desconto_salario;
	}
	
	printf("Nome: %s\n\n", nome);
	printf("Sal�rio Fixo: %d\n\n", salario_fixo);
	printf("TV 29: %d\n\n", numTv29);
	printf("TV 42: %d\n\n", numTv42);
	printf("INSS: %d\n\n", inss);
	printf("Desconto INSS: %d\n\n", desconto_inss);
	printf("Comiss�o: %d\n\n", comissao);
	printf("Sal�rio Total (fixo + comiss�o): %d\n\n", salario_total);
	printf("Desconto 5%%: %d\n\n", desconto_salario);
	printf("Sal�rio Liquido: %d\n\n", salario);
		
	system("pause");
}
