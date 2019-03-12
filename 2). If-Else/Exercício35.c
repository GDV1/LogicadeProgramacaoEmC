/** Autor: Gabriel Dias **/

/**
*	Fa�a um algoritmo que receba apenas letras e informe se a letra digitada � uma vogal
*	ou consoante. Assuma que o usu�rio ir� digitar apenas letras!
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	// Configura o idioma de acordo com a localiza��o
	setlocale(LC_ALL, "portuguese");
	
	// Vari�vel
	char letra;
	
	// Processamento
	printf("Informe uma letra: ");
	scanf(" %c", &letra);
	
	// Verifica��o
	if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o'|| letra == 'u'){
		printf("\nA letra informada � uma vogal");
	}else{
		printf("\nA letra informada � uma consoante!");
	}
	printf("\n");
	system("pause");
}
