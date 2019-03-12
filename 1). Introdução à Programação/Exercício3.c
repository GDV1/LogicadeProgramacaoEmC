/** Autor: Gabriel Dias **/

/**
*	Fa�a um algoritmo que calcula a velocidade m�dia, o tempo gasto, a dist�ncia percorrida
*	e a quantidade de litros gastos em uma viagem de carro. Os dados ser�o informados pelo usu�rio. 
**/

//Bibliotecas padr�o
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 int main(){
 	
	// Configura o idioma de acordo com a localiza��o
    setlocale(LC_ALL, "Portuguese");
    
    // Vari�veis
	float tempo, velocidade, distancia, litrosgastos;

	// Processamento
	printf("\nConsiderando que o carro tem uma autonomia de 12 Km/L de combust�vel e que uma (1) hora tem 60 minutos, informe os seguintes dados:");
	printf("\nDigite o tempo gasto na viagem [em horas]: ");
	scanf("%f", &tempo);

	printf("\nDigite a velocidade m�dia desenvolvida pelo autom�vel [em Km/h]: ");
	scanf("%f",&velocidade);

	distancia = tempo * velocidade;

	litrosgastos = distancia/12;

	printf("\nA Velocidade M�dia do ve�culo durante a viagem foi de: %.2f Km/h\n", velocidade);
	printf("\nO tempo gasto durante a viagem foi de: %.2f horas\n",tempo);
	printf("\nA dist�ncia percorrida no trajeto foi de: %.2f quilometros\n", distancia);
	printf("\nDurante a viagem, o carro consumiu: %.2f litros de combust�vel\n",litrosgastos);
 	
	system("pause");
 }
