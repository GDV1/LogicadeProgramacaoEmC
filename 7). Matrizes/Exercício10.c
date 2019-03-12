/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo que leia um n�mero inteiro A e uma matriz V[3][3]. Esse programa deve
*	contar quantos valores iguais a A est�o na matriz V e, em seguida, criar uma matriz X
*	contendo todos os elementos de V diferentes de A. 
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Define o tamanho da matriz
#define MAXLINHAS 3
#define MAXCOLUNAS 3

int main (){
	
	// Configura o idioma de acordo com a localiza��o
	setlocale(LC_ALL, "portuguese");
	
	// Vari�veis
	int num, matrizV[MAXLINHAS][MAXCOLUNAS], i, j, k;
	int matrizX[MAXLINHAS][MAXCOLUNAS]; 
	char traco = '-';
	
	// Leitura do n�mero inteiro
	printf("Informe um n�mero: ");
	scanf("%d", &num);
	
	// Leitura da matriz
	for(i = 0; i < MAXLINHAS; i++){
		printf("Linha %d: \n", i + 1);
		for(j = 0; j < MAXCOLUNAS; j++){
			scanf("%d", &matrizV[i][j]);
		}
	}
	
	// Processamento
	for(i = 0; i < MAXLINHAS; i++){
		for(j = 0; j < MAXCOLUNAS; j++){
			if(num == matrizV[i][j]){
				k++;
			}else{
				matrizX[i][j] = matrizV[i][j];
			}
		}
	}
		
	// Resultados
	printf("\nExiste(m) %d elemento(s) igual (is) ao n�mero informado contidos na matriz.\n", k);
	printf("\nOs elementos diferentes do n�mero informado est�o na matriz a seguir: ");
	
	// Impress�o em formato matricial
    for(i = 0; i < MAXLINHAS; i++){
        printf("\n");
        for(j = 0; j < MAXCOLUNAS; j++){
            printf("%3d", matrizX[i][j]);
        }
        printf("\n");
    }	
	system("pause"); 
}
