/** Autor: Gabriel Dias **/

/**
*	Faça um algoritmo para emitir o desempenho de uma equipe numa competição automobilística.
*	Para tal, seu programa deverá:
*
*		1). Ler o tempo padrão (em minutos decimais para a competição), o número de inscrição
*			da equipe e o tempo gasto (em minutos decimais);
*
*		2). Calcular os pontos da equipe, seguindo o seguinte abaixo, onde D é o valor absoluto 
*			da diferença entre o tempo padrão e o tempo gasto pela equipe: 
*
*			D < 3 min 			=> 			100 pontos
*		  3 <= D < 5 min		=> 			80 pontos
*			D > 5 min			=> 		    80-(D-5)/5
*	
*		3). Escrever o número de inscrição da equipe e o número de pontos obtidos.
**/

// Bibliotecas padrão
#include <stdio.h>
#include <locale.h>

int main(){
	
	// Configura o idioma de acordo com a localizaçõa	
	setlocale(LC_ALL, "portuguese");
	
	// Variáveis
	int tp, inscricao, tg, D, pontos;
	
	//tp: tempo padrão//
	//tg: tempo gasto//
	//D: diferença entre o tempo padrão e o tempo gasto//
	
	// Processamento
	printf("Digite o tempo padrão da prova (em minutos): ");
	scanf("%d", &tp);
	printf("Digite o número de inscrição da equipe: ");
	scanf("%d", &inscricao);
	printf("Digite o tempo gasto para a realização da prova (em minutos): ");
	scanf("%d", &tg);
	
	D = tp-tg;
	
	if(D < 3){
		printf("\nO número de inscrição da equipe é: %d", inscricao);
		printf("\nA pontuação da equipe foi de 100 pontos.");	
	}else{
		if(D >= 3 && D < 5){
			printf("\nO número de inscrição da equipe é: %d", inscricao);
			printf("\nA pontuação da equipe foi de 80 pontos.");	
		}else{
			if (D > 5){
			
				pontos = 80-(D-5)/5;
			
				printf("\nO número de inscrição da equipe é: %d", inscricao);
				printf("\nA pontuação da equipe foi de %d pontos.", pontos);	
			}else{
				printf("\nOs valores informados são inválidos! Tente novamente.");
			}		
		}	
	}
	system("pause");	
}
