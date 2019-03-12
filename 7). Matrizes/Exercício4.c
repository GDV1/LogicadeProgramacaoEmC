/** Autor: Gabriel Dias **/

/**
*	Crie um algoritmo que leia os elementos de uma matriz inteira de 3 x 3 e imprima
*	os elementos da diagonal principal.
**/

// Bibliotecas padr�o
#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<stdlib.h>

// Define o tamanho da matriz
#define MAXLINHAS 3
#define MAXCOLUNAS 3

int main(){
	
	// Configura o idioma de acordo com a localiza��o
    setlocale(LC_ALL, "portuguese");

	// Vari�veis
    int m1[MAXLINHAS][MAXCOLUNAS], i, j, diagonal;
    char traco = '-';

	// Processamento
    // Leitura da Matriz
     for(i = 0; i < MAXLINHAS; i++){
        printf("Linha %d \n", i+1);
        for(j = 0; j < MAXCOLUNAS; j++){
            scanf(" %d",&m1[i][j]);
        }
    }
    
    // Imprime a matriz em formato matricial
    printf("\nOs elementos da diagonal principal s�o: \n");
    for(i = 0; i < MAXLINHAS; i++){
    	printf("\n");
        for(j = 0; j < MAXCOLUNAS; j++){
            if(i == j){
                diagonal = m1 [i][j];
                printf("%6d", diagonal);
            }
            if(i != j){
            	printf("%6c", traco);
			}
        }
        printf("\n");
    }

    system("pause");
}
