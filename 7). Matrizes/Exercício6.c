/** Autor: Gabriel Dias **/

/**
*	Fa�a um algoritmo que leia os elementos de uma matriz inteira de 3 x 3 e, em seguida,
*	crie e imprima outra matriz multiplicando cada elemento da primeira matriz por 2.
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
    int matriz1[MAXLINHAS][MAXCOLUNAS], matriz2[MAXLINHAS][MAXCOLUNAS],i, j;
    float mult;

	// Processamento
    // Leitura da Matriz
    for(i = 0; i < MAXLINHAS; i++){
        printf("Linha %d \n", i+1);
        for(j = 0; j < MAXCOLUNAS; j++){
            scanf("%d", &matriz1[i][j]);
        }
    }

    // Multiplica��o da Matriz
    printf("\nMatriz Resultante: \n");
    for(i = 0; i < MAXLINHAS; i++){
    	printf("\n");
        for(j = 0; j < MAXCOLUNAS; j++){
           mult = 2 * matriz1[i][j];
           matriz2[i][j] = mult;
           printf("%6d", matriz2[i][j]);
        }
    }
    printf("\n");
    system("pause");
}
