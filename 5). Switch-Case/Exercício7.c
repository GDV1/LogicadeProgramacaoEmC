/** Autor: Gabriel Dias **/

/**
*	Fa�a um algoritmo que leia um c�digo e os valores x e y e calcule f(x,y) de acordo com
*	as equa��es abaixo:
*
*		C�digo					Equa��o
*		  1					f(x, y) = sqrt(pow(x, 3)+((x*(2*y-x)))/pow(y, 2))
*		  2					f(x, y) = sqrt((pow(x, 3)+pow(y, 3))+(pow(x, 3)-pow(y, 3)))/(x*y)
*         3					f(x, y) = 2*x + sqrt(x*y)
*		  4 				f(x, y) = sin(x) + cos(y);
*
*	Obs.: cuidado com opera��es inv�lidas!
*
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){

	// Configura o idioma de acordo com a localiza��o
	setlocale(LC_ALL, "portuguese");	
	
	// Vari�veis
	int opcao, x, y, resultado;
	
	// Processamento
	printf("Informe o valor de X: \n");
	scanf("%d", &x);
	
	printf("Informe o valor de Y: \n");
	scanf("%d", &y);
	
	printf("Agora escolha uma op��o e veja a m�gica: \n");
	printf("1\n");
	printf("2\n");
	printf("3\n");
	printf("4\n");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1:
			if(pow(y, 2) == 0){
				printf("Imposs�vel realizar divis�o por 0!");
			}else{
				resultado = sqrt(pow(x, 3) + ((x*(2*y-x)))/pow(y, 2));
				printf("O resultado �: %d", resultado);	
			}
		break;
				
		case 2:
			if((x*y) == 0){
				printf("Imposs�vel realizar divis�o por 0!");	
			}else{
				resultado = sqrt((pow(x, 3)+pow(y, 3))+(pow(x, 3)-pow(y, 3)))/(x*y);
				printf("O resultado �: %d", resultado);	
			}
		break;
		
		case 3:
			resultado = 2*x + sqrt(x*y);
			printf("O resultado �: %d", resultado);
		break;
		
		case 4:
			resultado = sin(x) + cos(y);
			printf("O resultado �: %.2d", resultado);
		break;
	}
	
	printf("\n");
	system("pause");
}
