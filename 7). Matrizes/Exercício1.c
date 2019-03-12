/** Autor: Gabriel Dias **/

/**
*	Programa que calcula o maior e o menor elementos de uma matriz, a m�dia dos valores presentes
*	na matriz e armazena a coordenada do maior e do menor elementos.
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
    int amostra [MAXLINHAS][MAXCOLUNAS];
    int i, j, maior, menor,  soma = 0, mult, media;

    // Processamento
    // Preenche a matriz enquanto s�o informados valores positivos
    for(i = 0; i < MAXLINHAS; i++){
        printf("Linha %d \n", i+1);
        for(j = 0; j < MAXCOLUNAS; j++){
            do{
            	scanf("%d",&amostra[i][j]);
                if(amostra[i][j] <= 0){
                    printf("Valores positivos > 0!\n");
                }
            }while(amostra[i][j] <= 0);
        }
    }

    // Trecho  que acha o maior valor
    maior = amostra[0][0];
    for(i = 0; i < MAXLINHAS; i++){
        for(j = 0; j < MAXCOLUNAS; j++){
            if (amostra[i][j] > maior){
                maior = amostra[i][j];
            }
        }
    }

    // Trecho  que acha o menor valor
    menor = amostra[0][0];
    for(i = 0; i < MAXLINHAS; i++){
        for(j = 0; j < MAXCOLUNAS; j++){
            if (amostra[i][j] > maior){
                menor = amostra[i][j];
            }
        }
    }

    // M�dia dos valores da matriz
    for(i = 0; i < MAXLINHAS; i++){
        for(j = 0; j < MAXCOLUNAS; j++){
            soma = soma + amostra[i][j];
        }
    }
    
    // C�lculos
    mult = i * j;
    media = soma / mult;

	// Resultados
    printf("M�dia dos valores da matriz: %d \n", media);
    printf("Maior valor da matriz: %d \n", maior);
    printf("Menor valor da matriz: %d \n", menor);

    // Impress�o em formato matricial
    printf("\nMatriz em formato matricial\n");
    for(i = 0; i < MAXLINHAS; i++){
        printf("\n");
        for(j = 0; j < MAXCOLUNAS; j++){
            printf("%6d", amostra[i][j]);
        }
        printf("\n");
    }
    system("pause");
}
