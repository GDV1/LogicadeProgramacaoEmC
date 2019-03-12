/** Autor: Gabriel Dias **/

/**
*	Dada uma matriz qualquer, verificar se existem elementos repetidos dentro dela.
**/

// Bibliotecas padrao
#include <stdio.h>
#include <locale.h>

// Define valores que serão usados no programa
#define MAX 100
#define TRUE 1
#define FALSE 0

int main() {
	
	// Configura o idioma de acordo com a localização
	setlocale(LC_ALL, "portuguese");
	
	// Variáveis
    int Matriz[MAX][MAX], num;
    int numLinhas, numColunas;
	int i, j; 					// Indices da matriz original
	int k, l; 					//Indices da matriz que armazena os valores repetidos 
	int achou;


	// Processamento
    printf("Digite o numero de linhas da matriz A: ");
    scanf(" %d", &numLinhas);
    printf("\nDigite o numero de colunas da matriz A: ");
    scanf(" %d", &numColunas);


	// Preenche a matriz
    for (i = 0; i < numLinhas; i++)
        for (j = 0; j < numColunas; j++){
            printf("Digite o elemento da posicao (%d, %d): ", i+1, j+1);
            scanf("%d", &num);
            Matriz[i][j] = num;
        }


	// Variável que armazena um valor booleano indicando que achou ou não um valor repetido na matriz
    achou = FALSE;
    
    
    // Estrutura que verifica se há valores repetidos
    for (i = 0; !achou && i < numLinhas; i++){
        for (j = 0; !achou && j < numColunas; j++){
        	
            /* Procura o elemento da posicao (i,j) nas posicoes seguintes da matriz */
            k = i;
            l = j + 1;
            while (!achou && k < numLinhas){
                while (!achou && l < numColunas){
                    if (Matriz[i][j] == Matriz[k][l]){
                    	achou = TRUE;
					}
                    l++;
                }
                l = 0;
                k++;
            }
        }
    }

	// Exibe mensagem
    if (achou){
    	printf("\n\nHá elementos repetidos na matriz.\n");
	}else{
    	printf("Não há elementos repetidos na matriz.\n");
	}
	
   system ("pause");
}
