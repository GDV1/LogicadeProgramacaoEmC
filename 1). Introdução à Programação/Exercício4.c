/** Autor: Gabriel Dias **/

/**
*	Desenvolva um algoritmo que calcule o salário bruto e o salário líquido de um funcionário.
*	O algoritmo deve receber a matricula do funcionário e a quantidade de horas-extras trabalhadas.
*	Como constantes, defina o Salário mínimo em R$ 788,00 e o valor da Hora-extra em R$ 15,00/hora.
*
*	Sabe-se que: 
*
*			-> hora-extra = hora-extra*valor da hora-extra;
*
*			-> salário bruto = 3*salário mínimo + salario hora-extra;
*
*			-> desconto INSS = 12% do salário bruto;
*
*			-> desconto Imposto de Renda = 22% do salário bruto;
*
*			-> salário líquido = salário bruto - deduções;
* 		
**/

// Bibliotecas padrão
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Constantes
#define salario_minimo 788.00
#define valor_hora_extra 15.00

int main(){
	
	// Configura o idioma de acordo com a localização
	setlocale(LC_ALL, "portuguese");	
	
	// Variáveis
	int matricula, hora_extra_trabalhada, hora_extra_final; 
	float salario_bruto, salario_liquido, desconto_IR, desconto_INSS, descontos;

	// Inserção dos dados
	printf("Informe a matrícula do funcionário: \n");
	scanf("%d", &matricula);
	
	printf("Informe a quantidade de horas-extras que o funcionário %d trabalhou (em horas): \n", matricula);
	scanf("%d", &hora_extra_trabalhada);
	
	// Cálculos
	
	// Hora Extra
	hora_extra_final = hora_extra_trabalhada*valor_hora_extra;
	
	// Salário Bruto
	salario_bruto = (3*salario_minimo)+hora_extra_final;
	
	// Desconto INSS
	desconto_INSS = 0.12*salario_bruto;
	
	// Desconto IR
	desconto_IR = 0.22*salario_bruto;
	
	// Total de descontos
	descontos = desconto_INSS + desconto_IR;
		
	salario_liquido = salario_bruto - descontos;
	
	printf("\nHora extra final: %d", hora_extra_final);
	printf("\nSalário Bruto: %.2f", salario_bruto);
	printf("\nDesconto INSS: %.2f", desconto_INSS);
	printf("\nDesconto IR: %.2f", desconto_IR);
	printf("\nDescontos: %.2f", descontos);
	printf("\nSalário Líquido: %.2f", salario_liquido);
	printf("\n");
	system("pause");	
}
