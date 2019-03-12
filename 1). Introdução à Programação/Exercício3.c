/** Autor: Gabriel Dias **/

/**
*	Faça um algoritmo que calcula a velocidade média, o tempo gasto, a distância percorrida
*	e a quantidade de litros gastos em uma viagem de carro. Os dados serão informados pelo usuário. 
**/

//Bibliotecas padrão
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 int main(){
 	
	// Configura o idioma de acordo com a localização
    setlocale(LC_ALL, "Portuguese");
    
    // Variáveis
	float tempo, velocidade, distancia, litrosgastos;

	// Processamento
	printf("\nConsiderando que o carro tem uma autonomia de 12 Km/L de combustível e que uma (1) hora tem 60 minutos, informe os seguintes dados:");
	printf("\nDigite o tempo gasto na viagem [em horas]: ");
	scanf("%f", &tempo);

	printf("\nDigite a velocidade média desenvolvida pelo automóvel [em Km/h]: ");
	scanf("%f",&velocidade);

	distancia = tempo * velocidade;

	litrosgastos = distancia/12;

	printf("\nA Velocidade Média do veículo durante a viagem foi de: %.2f Km/h\n", velocidade);
	printf("\nO tempo gasto durante a viagem foi de: %.2f horas\n",tempo);
	printf("\nA distância percorrida no trajeto foi de: %.2f quilometros\n", distancia);
	printf("\nDurante a viagem, o carro consumiu: %.2f litros de combustível\n",litrosgastos);
 	
	system("pause");
 }
