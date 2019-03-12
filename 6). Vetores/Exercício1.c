/** Autor: Gabriel Dias **/

// Bibliotecas padrão
#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<stdlib.h>

int main(){
	
	//Configura o idioma de acordo com a localização
	setlocale(LC_ALL, "portuguese");
	
	//Variáveis 
	int num[10];
	int i;
	
	//Processamento
	printf("Algoritmo Verificador de Números!");
	
	for(i = 0; i < 10; i++){
		printf("\nDigite o %d° número: ", i+1);
		scanf("%d", &num[i]);	
	}
		
	for(i = 0; i < 10; i++){
		if(num[i] > 50){
			printf("\nO número %d é maior que 50 e está na posição %d°.\n\n", num[i], i+1);
		}else{
			printf("\nNão existe nenhum número maior que 50 na %d° posição informada!\n\n", i+1);
		}
	}	
	system("pause");
}
