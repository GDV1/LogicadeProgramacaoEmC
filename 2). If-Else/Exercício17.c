/** Autor: Gabriel Dias **/

/**
* 	Segundo uma tabela médica, o peso ideal está relacionado com a altura
* 	e o sexo. Fazer um algoritmo que receba a altura e o sexo de uma pessoa,
* 	calcular e imprimir o seu peso ideal, utilizando as seguintes fórmulas:
*       a).Para homens:(72.7*altura)-58;
*       b).Para mulheres:(62.1*altura)-44.7;
**/

// Bibliotecas padrão
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	
	// Configura o idioma de acordo com a localização
	setlocale(LC_ALL, "portuguese");

	// Variáveis
	float altura, pesoideal;
	char sexo;

	// Processamento
	printf ("Digite o sexo: [M ou F]: ");
	scanf("%c", &sexo);
	printf("Digite a sua altura: ");
	scanf("%f", &altura);

	if (sexo == 'M'){
		pesoideal = (72.7*altura)-58;
	}else{
		pesoideal = (62.1*altura)-44.7;
	}
	printf ("\nO seu Peso Ideal é: %.2f", pesoideal);
	
	system("pause");
}
