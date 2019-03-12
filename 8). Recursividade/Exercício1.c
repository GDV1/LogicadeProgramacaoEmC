/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo que calcule o fatorial de determinado valor utilizando a 
*	recursividade.
*
* Obs.: Recursividade é quando temos uma função que chama a si mesma para executar 
*		determinada tarefa.
**/

// Bibliotecas padrão
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

// Função que calcula o fatorial
int fat(int numero){
	
	// Variáveis
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

// Função principal
int main(){
	
	// Configura o idioma de acordo com a localização
    setlocale(LC_ALL, "portuguese");
    
    // Variáveis
    int x;

	// Processamento
    printf("Informe um valor: ");
    scanf("%d", &x);

    if(x < 0){
        printf("\nNão existe fatorial de número negativo\n\n");
	}else{
        printf("\nO fatorial de %d é: %d\n\n", x, fat(x));
	}	
	system("pause");
}
