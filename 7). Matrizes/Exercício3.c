/** Autor: Gabriel Dias **/

/**
*	Faça um algoritmo que leia uma matriz S[2,2] e um valor A. A seguir, multiplique
*	a matriz pelo valor A, colocando o resultado em um vetor V[4] e exiba o resultado. 
**/

// Bibliotecas padrão
#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<stdlib.h>

// Define o tamanho da matriz
#define MAXLINHAS 2
#define MAXCOLUNAS 2


int main(){
	
	// Configura o idioma de acordo com a localização
    setlocale(LC_ALL, "portuguese");
    
    // Variáveis
    int matriz1[MAXLINHAS][MAXCOLUNAS], i, j, vetor[4];
    int mult, num;

	// Processamento
    // Leitura da Matriz
    for(i = 0; i < MAXLINHAS; i++){
        printf("Linha %d \n", i+1);
        for(j = 0; j < MAXCOLUNAS; j++){
            scanf("%d",&matriz1[i][j]);
        }
    }
    printf("Digite um valor para multiplicar a matriz: ");
    scanf("%d", &num);

    // Multiplicação da Matriz
    printf("Vetor: ");
    for(i = 0; i < MAXLINHAS; i++){
        for(j = 0; j < MAXCOLUNAS; j++){
           mult = num * matriz1[i][j];
           vetor[i] = mult;
           printf(" %d", vetor[i]);
        }
    }
    printf("\n");
    system("pause");
}
