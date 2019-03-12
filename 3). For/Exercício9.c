/** Autor: Gabriel Dias **/

/**
*	Crie um algoritmo que leia um n�mero inteiro e calcule o seu fatorial. 
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (){
	
	// Configura o idioma de acordo com a localiza��o
	setlocale(LC_ALL, "portuguese");
	
	// Vari�veis
	int n, cont, fatorial;
	
	// Processamento
	printf("Digite um n�mero e conhe�a o seu fatorial: ");
	scanf("%d", &n);
	
	fatorial = 1;
	
	for (cont = 1; cont <= n; cont++){	
		fatorial = fatorial * cont;	
	}
	
	printf("\nO fatorial do n�mero informado �: %d\n", fatorial);
	system("pause");	
}
