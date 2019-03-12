/** Autor: Gabriel Dias **/

/**
*	Elabore um algoritmo que simule uma calculadora com as operações de adição, subtração,
*	multiplicação e divisão. O algoritmo deve informar as operações disponíveis e receber
*	a operação desejada, bem como dois números. O resultado mostrado pelo algoritmo será
*	a aplicação da operação sobre os números informados.
**/

// Bibliotecas padrão
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

int main (){
	
	// Configura o idioma de acordo com a localização
    setlocale(LC_ALL, "portuguese");
    
    // Variáveis
    float x, y, resultado;
    char operador;
    
    // Processamento
    printf("Digite um número: ");
    scanf("%f", &x);
    printf("\nDigite outro número: ");
    scanf("%f", &y);
       
    printf("\nInforme a operação desejada [+ soma , - subtração, * multiplicação ou / divisão]: ");
    scanf(" %c", &operador);
    
    switch (operador){
    
    case '+':
        resultado = x + y;
        printf("\n O resultado da soma é: %.2f", resultado);
        break;
         
    case '-':
        resultado = x - y;
        printf("\nO resultado da subtração é: %.2f", resultado);
        break;
     
     case '*':
        resultado = y * x;
        printf("\nO resultado da multiplicação é: %.2f", resultado);
        break;
         
     case '/':
        if (y == 0)
           printf("\nDivisão Impossível!"); 
        else{
           resultado = x / y;
           printf("\nO resultado da divisão é: %.2f", resultado);
        }
    break;   
         
    default: 
        printf("\nOpção inválida! Tente novamente (+, -, *, /)"); 
    }
    printf("\n");
    system ("pause");
}
