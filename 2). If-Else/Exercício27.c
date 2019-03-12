/** Autor: Gabriel Dias **/

/**
*	Um banco concederá um crédito especial aos seus clientes, de acordo com o saldo 
*	médio no último ano. Escreva um algoritmo que receba o saldo médio de um cliente
*	e calcule o valor do crédito, de acordo com a tabela a seguir. Mostre o saldo médio e o valor do crédito.
*
*			Saldo Médio (R$)		Percentual
*            Acima de 4000             20
*           1000 < x <= 4000           15
*           200 < x <= 1000            10
*             Até 200                  5
*
**/

// Bibliotecas padrão
#include <stdio.h>
#include <locale.h>

int main(){
	
	// Configura o idioma de acordo com a localização
	setlocale(LC_ALL,"portuguese");
	
	// Variáveis
	int sm, vc, recebido;
	
	// sm: saldo médio //
	// vc: valor do crédito //
	
	// Processamento
	printf("Digite o Saldo Médio do cliente no último ano: ");
	scanf("%d", &sm);
	
	if(sm > 4.000){
		vc = sm * 0.2;
		recebido = vc + sm;
		
		printf("\nO Saldo Médio é de: %d", sm);
		printf("\nO Valor do Crédito disponível é: %d", vc);
		printf("\nValor a ser recebido: %d\n", recebido);
	}else{
		if(sm > 1.000 && sm <= 4.000){
			vc = sm * 0.15;
			recebido = vc + sm;
					
			printf("\nO Saldo Médio é de: %d", sm);
			printf("\nO Valor do Crédito disponível é: %d", vc);
			printf("\nValor a ser recebido: %d\n", recebido);	
		}else{
			if(sm > 200 && sm <= 1.000){
				vc = sm * 0.1;
				recebido = vc + sm;
				printf("\nO Saldo Médio é de: %d", sm);
				printf("\nO Valor do Crédito disponível é: %d", vc);
				printf("\nValor a ser recebido: %d\n", recebido);	
			}else{
				if (sm < 200){
					vc = sm * 0.5;
					recebido = vc + sm;	
					
					printf("\nO Saldo Médio é de: %d", sm);
					printf("\nO Valor do Crédito disponível é: %d", vc);
					printf("\nValor a ser recebido: %d\n", recebido);
				}		
			}	
		}	
	}
	system("pause");
}
