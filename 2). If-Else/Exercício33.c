/** Autor: Gabriel Dias **/

/**
*	Um comerciante calcula o valor da venda, tendo em vista a tabela a seguir. Escreva
*	um algoritmo que leia o valor da compra e imprima o valor da venda do produto.
*	
*		Valor da Compra 					Valor da Venda
*		 	x < 10							 Lucro de 70% 
*		10 <= x < 30						 Lucro de 50%
*		30 <= x < 50						 Lucro de 40%
*		   x >= 50							 Lucro de 30%
*
**/

// Bibliotecas padrão
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	
	// Configura o idioma de acordo com a localização
	setlocale(LC_ALL, "portuguese");
	
	// Variáveis
	float preco, lucro, auxiliar;
	
	printf("Valor da Venda\n");
	printf("Insira o valor da compra: \n");
	scanf("%f", &preco);
	
	// Processamento
	if(preco < 10){
		auxiliar = preco * 0.7;
		lucro = preco + auxiliar;
		printf("\nO produto deve ser vendido por: R$ %.2f", lucro);
	}else{
		if(preco >= 10 && preco < 30){
			auxiliar = preco * 0.5;
			lucro = preco + auxiliar;
			printf("\nO produto deve ser vendido por: R$ %.2f", lucro);
		}else{
			if(preco >= 30 && preco < 50){
				auxiliar = preco * 0.4;
				lucro = preco + auxiliar;
				printf("\nO produto deve ser vendido por: R$ %.2f", lucro);
			}else{
				if(preco >= 50){
					auxiliar = preco * 0.3;
					lucro = preco + auxiliar;
					printf("\nO produto deve ser vendido por: R$ %.2f", lucro);
				}
			}
		}
	}
	system("pause");
}

