/** Autor: Gabriel Dias **/

/**
*	Desenvolva um algoritmo que calcule o sal�rio bruto e o sal�rio l�quido de um funcion�rio.
*	O algoritmo deve receber a matricula do funcion�rio e a quantidade de horas-extras trabalhadas.
*	Como constantes, defina o Sal�rio m�nimo em R$ 788,00 e o valor da Hora-extra em R$ 15,00/hora.
*
*	Sabe-se que: 
*
*			-> hora-extra = hora-extra*valor da hora-extra;
*
*			-> sal�rio bruto = 3*sal�rio m�nimo + salario hora-extra;
*
*			-> desconto INSS = 12% do sal�rio bruto;
*
*			-> desconto Imposto de Renda = 22% do sal�rio bruto;
*
*			-> sal�rio l�quido = sal�rio bruto - dedu��es;
* 		
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Constantes
#define salario_minimo 788.00
#define valor_hora_extra 15.00

int main(){
	
	// Configura o idioma de acordo com a localiza��o
	setlocale(LC_ALL, "portuguese");	
	
	// Vari�veis
	int matricula, hora_extra_trabalhada, hora_extra_final; 
	float salario_bruto, salario_liquido, desconto_IR, desconto_INSS, descontos;

	// Inser��o dos dados
	printf("Informe a matr�cula do funcion�rio: \n");
	scanf("%d", &matricula);
	
	printf("Informe a quantidade de horas-extras que o funcion�rio %d trabalhou (em horas): \n", matricula);
	scanf("%d", &hora_extra_trabalhada);
	
	// C�lculos
	
	// Hora Extra
	hora_extra_final = hora_extra_trabalhada*valor_hora_extra;
	
	// Sal�rio Bruto
	salario_bruto = (3*salario_minimo)+hora_extra_final;
	
	// Desconto INSS
	desconto_INSS = 0.12*salario_bruto;
	
	// Desconto IR
	desconto_IR = 0.22*salario_bruto;
	
	// Total de descontos
	descontos = desconto_INSS + desconto_IR;
		
	salario_liquido = salario_bruto - descontos;
	
	printf("\nHora extra final: %d", hora_extra_final);
	printf("\nSal�rio Bruto: %.2f", salario_bruto);
	printf("\nDesconto INSS: %.2f", desconto_INSS);
	printf("\nDesconto IR: %.2f", desconto_IR);
	printf("\nDescontos: %.2f", descontos);
	printf("\nSal�rio L�quido: %.2f", salario_liquido);
	printf("\n");
	system("pause");	
}
