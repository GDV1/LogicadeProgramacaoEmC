/** Autor: Gabriel Dias **/

// Bibliotecas padr�o
#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<stdlib.h>

int main(){
	
	//Configura o idioma de acordo com a localiza��o
	setlocale(LC_ALL, "portuguese");

	//Vari�veis
	int num[10];
	int i, maior, menor, pmenor, pmaior;
	
	//Processamento
	printf("Algoritmo Do Maior e do Menor Valor de Um Vetor de Inteiros!");

	for (i = 0; i < 10; i++){
		printf("\nDigite o %d� n�mero: ", i+1);
		scanf("%d", &num[i]);
	}

	//Inicializa��o de vari�veis
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
	printf("\nO menor elemento do vetor � %d e est� na %d� posi��o.", menor, pmenor + 1);
    printf("\nO maior elemento do vetor � %d e est� na %d� posi��o.", maior, pmaior + 1);
	system ("pause");
}
