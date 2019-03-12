/** Autor: Gabriel Dias **/

/**
*	Faça um algoritmo que receba apenas letras e informe se a letra digitada é uma vogal
*	ou consoante. Assuma que o usuário irá digitar apenas letras!
**/

// Bibliotecas padrão
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	// Configura o idioma de acordo com a localização
	setlocale(LC_ALL, "portuguese");
	
	// Variável
	char letra;
	
	// Processamento
	printf("Informe uma letra: ");
	scanf(" %c", &letra);
	
	// Verificação
	if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o'|| letra == 'u'){
		printf("\nA letra informada é uma vogal");
	}else{
		printf("\nA letra informada é uma consoante!");
	}
	printf("\n");
	system("pause");
}
