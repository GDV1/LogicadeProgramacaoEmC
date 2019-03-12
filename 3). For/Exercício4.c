/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo que lê 10 valores. Todos os números lidos com valor inferior a
*	40 devem ser somados e a soma deve ser mostrada.
**/

// Bibliotecas padrão
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	// Configura o idioma de acordo com a localização
	setlocale(LC_ALL, "portuguese"); 
	
	// Variáveis
	int num, cont, soma;
	
	// Inicialização de variável
	soma = 0;
	
	// Processamento
	for(cont = 1; cont <= 10; cont++){	
		printf("Informe o %d° número: ", cont);
		scanf(" %d", &num);
		if(num < 40){
			soma = soma + num;
		}
	}
	printf("\nO valor da soma dos números menores que 40 é: %d\n", soma);
	system("pause");
}
