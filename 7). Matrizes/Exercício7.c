/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo que lê uma matriz M(5,5) e calcula as somas:
*		a. Dos elementos da linha 4
*		b. Dos elementos da coluna 2
*		c. Dos elementos da diagonal principal 
*		d. Dos elementos da diagonal secundária
*		e. De todos os elementos da matriz
**/

// Bibliotecas padrão
#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<stdlib.h>

// Define o tamanho da matriz
#define MAXLINHAS 5
#define MAXCOLUNAS 5

int main(){
	
	// Configura o idioma de acordo com a localização
    setlocale(LC_ALL,"portuguese");

	// Variáveis
	// somal4 = linha 4, somac2 = coluna 2, somadp = diagonal principal, somads = diagonal secundária
    int m1 [MAXLINHAS][MAXCOLUNAS], i, j, somal4 = 0, somac2 = 0, somadp = 0, somads = 0, somatotal = 0;

	// Processamento
    // Leitura da Matriz
    for(i = 0; i < MAXLINHAS; i++){
        printf("Linha %d \n", i+1);
        for(j = 0; j < MAXCOLUNAS; j++){
            scanf("%d",&m1[i][j]);
        }
    }

    // Cálculos
    for(i = 0; i < MAXLINHAS; i++){
        for(j = 0; j < MAXCOLUNAS; j++){
            if( i == 3){
                somal4 = somal4 + m1[i][j];
            }
            if( j == 1){
                somac2 = somac2 + m1[i][j];
            }
            if( i == j){
                somadp = somadp + m1[i][j];
            }
            if( j == MAXCOLUNAS - 1 - i){
                somads = somads + m1[i][j];
            }
            somatotal = somatotal + m1[i][j];
        }
    }

	printf("\nSomas:\n");
    printf("Soma da linha 4: %d\n", somal4);
    printf("Soma da coluna 2: %d\n", somac2);
    printf("Soma da diagonal principal: %d\n", somadp);
    printf("Soma da diagonal secundária: %d\n", somads);
    printf("Soma da total: %d\n", somatotal);
    
    // Impressão em formato matricial
    printf("\nMatriz em formato matricial\n");
    for(i = 0; i < MAXLINHAS; i++){
        printf("\n");
        for(j = 0; j < MAXCOLUNAS; j++){
            printf("%6d", m1[i][j]);
        }
        printf("\n");
    }
    system("pause");
}
