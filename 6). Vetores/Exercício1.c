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
	int num[10];
	int i;
	
	//Processamento
	printf("Algoritmo Verificador de N�meros!");
	
	for(i = 0; i < 10; i++){
		printf("\nDigite o %d� n�mero: ", i+1);
		scanf("%d", &num[i]);	
	}
		
	for(i = 0; i < 10; i++){
		if(num[i] > 50){
			printf("\nO n�mero %d � maior que 50 e est� na posi��o %d�.\n\n", num[i], i+1);
		}else{
			printf("\nN�o existe nenhum n�mero maior que 50 na %d� posi��o informada!\n\n", i+1);
		}
	}	
	system("pause");
}
