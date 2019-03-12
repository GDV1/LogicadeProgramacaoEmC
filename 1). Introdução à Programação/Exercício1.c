/** Autor: Gabriel Dias **/

/**
*	Programa que l� a temperatura informada pelo usu�rio e converte para a escala Fahrenheit.
**/

//Bibliotecas padr�o
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

	//Configura o idioma de acordo com a localiza��o
    setlocale(LC_ALL, "Portuguese");
    
     //Vari�veis
	float Celsius, Fahrenheit;

	//Processamento
	printf("Digite uma temperatura em graus Celsius [C�]: ");
	scanf("%f", &Celsius);

	Fahrenheit=(9*Celsius+160)/5;

	printf("A temperatura convertida em Fahrenheit �: %.2f",Fahrenheit);
	printf("\n");
	system("pause");
}
