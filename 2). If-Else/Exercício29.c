/** Autor: Gabriel Dias **/

/**
*	Fa�a um algoritmo para emitir o desempenho de uma equipe numa competi��o automobil�stica.
*	Para tal, seu programa dever�:
*
*		1). Ler o tempo padr�o (em minutos decimais para a competi��o), o n�mero de inscri��o
*			da equipe e o tempo gasto (em minutos decimais);
*
*		2). Calcular os pontos da equipe, seguindo o seguinte abaixo, onde D � o valor absoluto 
*			da diferen�a entre o tempo padr�o e o tempo gasto pela equipe: 
*
*			D < 3 min 			=> 			100 pontos
*		  3 <= D < 5 min		=> 			80 pontos
*			D > 5 min			=> 		    80-(D-5)/5
*	
*		3). Escrever o n�mero de inscri��o da equipe e o n�mero de pontos obtidos.
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <locale.h>

int main(){
	
	// Configura o idioma de acordo com a localiza��a	
	setlocale(LC_ALL, "portuguese");
	
	// Vari�veis
	int tp, inscricao, tg, D, pontos;
	
	//tp: tempo padr�o//
	//tg: tempo gasto//
	//D: diferen�a entre o tempo padr�o e o tempo gasto//
	
	// Processamento
	printf("Digite o tempo padr�o da prova (em minutos): ");
	scanf("%d", &tp);
	printf("Digite o n�mero de inscri��o da equipe: ");
	scanf("%d", &inscricao);
	printf("Digite o tempo gasto para a realiza��o da prova (em minutos): ");
	scanf("%d", &tg);
	
	D = tp-tg;
	
	if(D < 3){
		printf("\nO n�mero de inscri��o da equipe �: %d", inscricao);
		printf("\nA pontua��o da equipe foi de 100 pontos.");	
	}else{
		if(D >= 3 && D < 5){
			printf("\nO n�mero de inscri��o da equipe �: %d", inscricao);
			printf("\nA pontua��o da equipe foi de 80 pontos.");	
		}else{
			if (D > 5){
			
				pontos = 80-(D-5)/5;
			
				printf("\nO n�mero de inscri��o da equipe �: %d", inscricao);
				printf("\nA pontua��o da equipe foi de %d pontos.", pontos);	
			}else{
				printf("\nOs valores informados s�o inv�lidos! Tente novamente.");
			}		
		}	
	}
	system("pause");	
}
