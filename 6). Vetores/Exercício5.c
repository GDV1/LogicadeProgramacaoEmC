/** Autor: Gabriel Dias **/

// Bibliotecas padr�o
#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<stdlib.h>

int main(){
	
	//Configura o idioma de acordo com a localiza��o
	setlocale(LC_ALL, "portuguese");

	//Vari�veis
	int n[10], m[5], i, j;

	//Processamento
	printf("Divisores de um Vetor!");

	printf("\nInsira a sequ�ncia do Primeiro Vetor.");
	for(i = 0; i < 10; i++){
		printf("\n%d� elemento: ", i+1);
		scanf("%d", &n[i]);
	}

	printf("\nInsira a sequ�ncia do Segundo Vetor.");
	for(j = 0; j < 5; j++){
		printf("\n%d� elemento: ", j+1);
		scanf("%d", &m[j]);
	}
	for (i = 0; i < 10; i++){
        for(j = 0; j < 5; j++){
            if(n[i] % m[j] == 0){
                printf("\nN�mero %d: Divis�vel por %d na posi��o %d.", n[i], m[j], j);
            }
        }
	}
	system("pause");
}
