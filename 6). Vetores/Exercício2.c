/** Autor: Gabriel Dias **/

// Bibliotecas padrão
#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<stdlib.h>

int main(){
	
	//Configura o idioma de acordo com a localização
	setlocale(LC_ALL, "portuguese");

	//Variáveis
	int num[10];
	int i, maior, menor, pmenor, pmaior;
	
	//Processamento
	printf("Algoritmo Do Maior e do Menor Valor de Um Vetor de Inteiros!");

	for (i = 0; i < 10; i++){
		printf("\nDigite o %d° número: ", i+1);
		scanf("%d", &num[i]);
	}

	//Inicialização de variáveis
	maior = 0;
	menor = 0;
	pmenor = 0;
	pmaior = 0;

	for(i = 0; i < 10; i++){
		if(num[i] > maior || i == 0){
			maior = num[i];
			pmaior = i;
		}
        if(num[i] < menor || i == 0){
            menor = num[i];
            pmenor = i;
		}
	}
	printf("\nO menor elemento do vetor é %d e está na %d° posição.", menor, pmenor + 1);
    printf("\nO maior elemento do vetor é %d e está na %d° posição.", maior, pmaior + 1);
	system ("pause");
}
