/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo para ler os valores de A, B, C e X e calcular o valor de Y usando uma
*	das f�rmulas abaixo. Seu algoritmo deve perguntar qual o c�digo da f�rmula a ser usada e imprimir
*	os resultados. Deve ser inclu�do uma verifica��o para garantir que n�o ocorra divis�o por 0 
*	e emitir mensagem, caso ocorra.
*
*		C�digo da F�rmula				F�rmula
*			   1					Y=(AX^2-BX+C)/(BX-C)
*			   2					Y=AX^2+BX+C
*			   3					Y=(AX + CX^3)/(4X)
*			   4					Y=BX^4-1
*			
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	
	// Configura o idioma de acordo com a localiza��o
	setlocale(LC_ALL, "portuguese");
	
	// Vari�veis
	float A, B, C, X, Y;
	int codigo;
	
	// Processamento
	printf("Digite o primeiro n�mero: ");
	scanf(" %f", &A);
	printf("Digite o segundo n�mero: ");
	scanf(" %f", &B);
	printf("Digite o terceiro n�mero: ");
	scanf(" %f", &C);
	printf("Digite o quarto n�mero: ");
	scanf(" %f", &X);
	
	printf("Agora, digite o c�digo da f�rmula que desejada: \n");
	scanf(" %d", &codigo);
	
	switch (codigo){
		
		case 1:
			Y = (A*pow(X, 2)-B*X+C)/(B*X-C);
			if( (B*X-C) == 0){
				printf("\nA opera��o n�o p�de ser realizada, pois n�o existe divis�o por 0.");	
			}else{
				printf("\nO resultado do c�lculo �: %.2f", Y);
			}
		break;
			
		case 2: 
			Y = A*pow(X, 2)+B*X+C;
			printf("\nO resultado do c�lculo �: %.2f", Y);
		break;
			
		case 3: 
			Y = (A*X+C*pow(X, 3))/(4*X);
			if((4*X) == 0){
				printf("\nA opera��o n�o p�de ser realizada, pois n�o existe divis�o por 0.");
			}else{
				printf("\nO resultado do c�lculo �: %.2f", Y);
			}
		break;
		
		case 4: 
			Y = (B*pow(X, 4))-1;
			printf("\nO resultado do c�lculo �: %f", Y);
		break;			
			
		default:
			printf("\nComando inv�lido! Tente novamente.");		
 	}
 	system("pause");
}
