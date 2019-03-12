/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo para ler os valores de A, B, C e X e calcular o valor de Y usando uma
*	das fórmulas abaixo. Seu algoritmo deve perguntar qual o código da fórmula a ser usada e imprimir
*	os resultados. Deve ser incluído uma verificação para garantir que não ocorra divisão por 0 
*	e emitir mensagem, caso ocorra.
*
*		Código da Fórmula				Fórmula
*			   1					Y=(AX^2-BX+C)/(BX-C)
*			   2					Y=AX^2+BX+C
*			   3					Y=(AX + CX^3)/(4X)
*			   4					Y=BX^4-1
*			
**/

// Bibliotecas padrão
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	
	// Configura o idioma de acordo com a localização
	setlocale(LC_ALL, "portuguese");
	
	// Variáveis
	float A, B, C, X, Y;
	int codigo;
	
	// Processamento
	printf("Digite o primeiro número: ");
	scanf(" %f", &A);
	printf("Digite o segundo número: ");
	scanf(" %f", &B);
	printf("Digite o terceiro número: ");
	scanf(" %f", &C);
	printf("Digite o quarto número: ");
	scanf(" %f", &X);
	
	printf("Agora, digite o código da fórmula que desejada: \n");
	scanf(" %d", &codigo);
	
	switch (codigo){
		
		case 1:
			Y = (A*pow(X, 2)-B*X+C)/(B*X-C);
			if( (B*X-C) == 0){
				printf("\nA operação não pôde ser realizada, pois não existe divisão por 0.");	
			}else{
				printf("\nO resultado do cálculo é: %.2f", Y);
			}
		break;
			
		case 2: 
			Y = A*pow(X, 2)+B*X+C;
			printf("\nO resultado do cálculo é: %.2f", Y);
		break;
			
		case 3: 
			Y = (A*X+C*pow(X, 3))/(4*X);
			if((4*X) == 0){
				printf("\nA operação não pôde ser realizada, pois não existe divisão por 0.");
			}else{
				printf("\nO resultado do cálculo é: %.2f", Y);
			}
		break;
		
		case 4: 
			Y = (B*pow(X, 4))-1;
			printf("\nO resultado do cálculo é: %f", Y);
		break;			
			
		default:
			printf("\nComando inválido! Tente novamente.");		
 	}
 	system("pause");
}
