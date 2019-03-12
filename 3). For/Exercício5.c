/** Autor: Gabriel Dias **/

/**
*	Faça um algoritmo que conte de 1 a 100 e a cada múltiplo de 10 emita uma mensagem:
*	"Múltiplo de 10".
**/

// Bibliotecas padrão
#include <stdio.h>
#include<locale.h>
#include<math.h>

int main (){
	
	// Configura o idioma de acordo com a localização
	setlocale(LC_ALL, "portuguese");
	
	// Variável
	int cont;
	
	// Processamento
	for (cont = 1; cont <= 100; cont++){
		printf(" %d ", cont);
		if(cont % 10 == 0){	
			printf("Múltiplo de 10!\n");	
		}
	}
	system ("pause");
}
