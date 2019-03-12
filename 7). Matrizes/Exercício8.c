/** Autor: Gabriel Dias **/ 

/**
*	Dizemos que uma matriz quadrada inteira é um quadrado mágico se a soma dos elementos de
*	cada linha, a soma dos elementos de cada coluna e soma dos elementos das diagonais principal
*	e secundária são todas iguais. Faça um algoritmo que verifique, dada uma matriz quadrada qualquer,
*	se ela é um quadrado mágico. 
**/

// Bibliotecas padrão
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Define valores que serão usados no programa
#define TRUE 1
#define FALSE 0

int main( ){
	
	// Configura o idioma de acordo com a localização
	setlocale(LC_ALL, "portuguese");
	
	// Variáveis
    int linhas, colunas, i, j; 		// Manipula a matriz
    int matriz[i][j]; 	// Cria a matriz
	int somadiagonal_principal = 0, somadiagonal_secundaria = 0, somalinhas = 0, somacolunas = 0;
    
	// Definindo a ordem da matriz
	printf("Informe o número de colunas e linhas (somente matriz quadrada): \n");
    printf("Linhas: ");
    scanf(" %d", &linhas);
    printf("Colunas: ");
    scanf(" %d", &colunas);
    
    // Verifica se é uma matriz quadrada
    if(linhas != colunas){
    	printf("\nInforme somente matrizes quadradas!");
    	return 0;
	}
	
    // Preenchendo a matriz
    for(i = 0; i < linhas; i++){
    	printf("Linha %d \n", i+1);
    	for(j = 0; j < colunas; j++){
    		scanf("%d", &matriz[i][j]);
		}
	}

    // Verificando a matriz
    for(i = 0; i < linhas; i++){
    	
    	somalinhas = somalinhas + matriz[i][j];
    	
    	for(j = 0; j < colunas; j++){
    		
    		somacolunas = somacolunas + matriz[i][j];
    		
    		if(i == j){
    			somadiagonal_principal = somadiagonal_principal + matriz[i][j];	
			}
			
			if(j == colunas - 1 - i){
				somadiagonal_secundaria = somadiagonal_secundaria + matriz[i][j];
			}
		}
	}
	
	if(somadiagonal_principal == somadiagonal_secundaria){
    	printf("\nMatriz é quadrado magico.\n");
	}else{
		printf("\nMatriz não é quadrado magico.\n");	
	}   
	system ("pause");

}
