/** Autor: Gabriel Dias **/

// Bibliotecas padrão
#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int main (){

	//Configura o idioma de acordo com a localização
	setlocale(LC_ALL, "portuguese");
	
	//Variáveis
	int k = NULL, *numaleatorio = NULL, i;

	//Processamento
	printf("Preenchendo um Vetor Aleatoriamente!");

	printf("\nTamanho do Vetor: ");
	scanf("%d", &k);

	numaleatorio = (int *)malloc(k * sizeof(int));

	srand(time(NULL));

	for (i = 0; i < k; i++){
		numaleatorio[i] = rand() % k+1;
		printf("\nValor %d: %d", i+1, numaleatorio[i]);
	}
	system("pause");
}
