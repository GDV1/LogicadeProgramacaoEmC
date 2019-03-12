/** Autor: Gabriel Dias **/

/**
*	Um banco conceder� um cr�dito especial aos seus clientes, de acordo com o saldo 
*	m�dio no �ltimo ano. Escreva um algoritmo que receba o saldo m�dio de um cliente
*	e calcule o valor do cr�dito, de acordo com a tabela a seguir. Mostre o saldo m�dio e o valor do cr�dito.
*
*			Saldo M�dio (R$)		Percentual
*            Acima de 4000             20
*           1000 < x <= 4000           15
*           200 < x <= 1000            10
*             At� 200                  5
*
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <locale.h>

int main(){
	
	// Configura o idioma de acordo com a localiza��o
	setlocale(LC_ALL,"portuguese");
	
	// Vari�veis
	int sm, vc, recebido;
	
	// sm: saldo m�dio //
	// vc: valor do cr�dito //
	
	// Processamento
	printf("Digite o Saldo M�dio do cliente no �ltimo ano: ");
	scanf("%d", &sm);
	
	if(sm > 4.000){
		vc = sm * 0.2;
		recebido = vc + sm;
		
		printf("\nO Saldo M�dio � de: %d", sm);
		printf("\nO Valor do Cr�dito dispon�vel �: %d", vc);
		printf("\nValor a ser recebido: %d\n", recebido);
	}else{
		if(sm > 1.000 && sm <= 4.000){
			vc = sm * 0.15;
			recebido = vc + sm;
					
			printf("\nO Saldo M�dio � de: %d", sm);
			printf("\nO Valor do Cr�dito dispon�vel �: %d", vc);
			printf("\nValor a ser recebido: %d\n", recebido);	
		}else{
			if(sm > 200 && sm <= 1.000){
				vc = sm * 0.1;
				recebido = vc + sm;
				printf("\nO Saldo M�dio � de: %d", sm);
				printf("\nO Valor do Cr�dito dispon�vel �: %d", vc);
				printf("\nValor a ser recebido: %d\n", recebido);	
			}else{
				if (sm < 200){
					vc = sm * 0.5;
					recebido = vc + sm;	
					
					printf("\nO Saldo M�dio � de: %d", sm);
					printf("\nO Valor do Cr�dito dispon�vel �: %d", vc);
					printf("\nValor a ser recebido: %d\n", recebido);
				}		
			}	
		}	
	}
	system("pause");
}
