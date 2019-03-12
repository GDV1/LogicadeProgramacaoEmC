/** Autor: Gabriel Dias **/

/**
*	Faça um algoritmo que leia uma matriz M[2,2] e uma matriz N[2,2]. Em seguida, calcule
*	a soma de M e N, colocando os resultados em uma matriz SOMA[2,2].
**/

// Bibliotecas padrão
#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<stdlib.h>

// Define o tamanho das matrizes.
#define MAXLINHAS 2
#define MAXCOLUNAS 2

int main(){
	
	// Configura o idioma de acordo com a localização
    setlocale(LC_ALL, "portuguese");
    
    // Variáveis
    int matriz1[MAXLINHAS][MAXCOLUNAS], matriz2[MAXLINHAS][MAXCOLUNAS], matrizSoma[MAXLINHAS][MAXCOLUNAS];
    int i, j;

    // Processamento
    // Leitura da matriz 1
    for(i = 0; i < MAXLINHAS; i++){
        printf("Linha %d Matriz 1\n", i+1);
        for(j = 0; j < MAXCOLUNAS; j++){
            scanf("%d",&matriz1[i][j]);
        }
    }
	// Leitura da matriz 2
    for(i = 0; i < MAXLINHAS; i++){
        printf("Linha %d Matriz 2\n", i+1);
        for(j = 0; j < MAXCOLUNAS; j++){
            scanf("%d",&matriz2[i][j]);
        }
    }
    
    // Soma dos valores impressão em formato matricial
    printf("\nMatriz soma em formato matricial\n");
    for(i = 0; i < MAXLINHAS; i++){
    	printf("\n");
    	for(j = 0; j < MAXCOLUNAS; j++){
    		matrizSoma[i][j] = matriz1[i][j] + matriz2[i][j];
    		printf("%6d", matrizSoma[i][j]);
		}
    	printf("\n");		
	}
    system("pause");
}
