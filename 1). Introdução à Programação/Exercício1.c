/** Autor: Gabriel Dias **/

/**
*	Programa que lê a temperatura informada pelo usuário e converte para a escala Fahrenheit.
**/

//Bibliotecas padrão
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

	//Configura o idioma de acordo com a localização
    setlocale(LC_ALL, "Portuguese");
    
     //Variáveis
	float Celsius, Fahrenheit;

	//Processamento
	printf("Digite uma temperatura em graus Celsius [C°]: ");
	scanf("%f", &Celsius);

	Fahrenheit=(9*Celsius+160)/5;

	printf("A temperatura convertida em Fahrenheit é: %.2f",Fahrenheit);
	printf("\n");
	system("pause");
}
