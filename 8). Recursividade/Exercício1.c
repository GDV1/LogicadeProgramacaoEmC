/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo que calcule o fatorial de determinado valor utilizando a 
*	recursividade.
*
* Obs.: Recursividade � quando temos uma fun��o que chama a si mesma para executar 
*		determinada tarefa.
**/

// Bibliotecas padr�o
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

// Fun��o que calcula o fatorial
int fat(int numero){
	
	// Vari�veis
	int i, fatorial = 1;
	
	// Processamento
    if(numero==1){
        return 1;
    }else{
        for(i = 1; i <= numero; i++){
            return fatorial = fatorial * numero * fat(numero-1);
        }
    }
}

// Fun��o principal
int main(){
	
	// Configura o idioma de acordo com a localiza��o
    setlocale(LC_ALL, "portuguese");
    
    // Vari�veis
    int x;

	// Processamento
    printf("Informe um valor: ");
    scanf("%d", &x);

    if(x < 0){
        printf("\nN�o existe fatorial de n�mero negativo\n\n");
	}else{
        printf("\nO fatorial de %d �: %d\n\n", x, fat(x));
	}	
	system("pause");
}
