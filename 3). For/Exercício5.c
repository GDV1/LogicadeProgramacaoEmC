/** Autor: Gabriel Dias **/

/**
*	Fa�a um algoritmo que conte de 1 a 100 e a cada m�ltiplo de 10 emita uma mensagem:
*	"M�ltiplo de 10".
**/

// Bibliotecas padr�o
#include <stdio.h>
#include<locale.h>
#include<math.h>

int main (){
	
	// Configura o idioma de acordo com a localiza��o
	setlocale(LC_ALL, "portuguese");
	
	// Vari�vel
	int cont;
	
	// Processamento
	for (cont = 1; cont <= 100; cont++){
		printf(" %d ", cont);
		if(cont % 10 == 0){	
			printf("M�ltiplo de 10!\n");	
		}
	}
	system ("pause");
}
