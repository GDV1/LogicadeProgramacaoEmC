/** Autor: Gabriel Dias **/

/**
*	Elabore um algoritmo que simule uma calculadora com as opera��es de adi��o, subtra��o,
*	multiplica��o e divis�o. O algoritmo deve informar as opera��es dispon�veis e receber
*	a opera��o desejada, bem como dois n�meros. O resultado mostrado pelo algoritmo ser�
*	a aplica��o da opera��o sobre os n�meros informados.
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

int main (){
	
	// Configura o idioma de acordo com a localiza��o
    setlocale(LC_ALL, "portuguese");
    
    // Vari�veis
    float x, y, resultado;
    char operador;
    
    // Processamento
    printf("Digite um n�mero: ");
    scanf("%f", &x);
    printf("\nDigite outro n�mero: ");
    scanf("%f", &y);
       
    printf("\nInforme a opera��o desejada [+ soma , - subtra��o, * multiplica��o ou / divis�o]: ");
    scanf(" %c", &operador);
    
    switch (operador){
    
    case '+':
        resultado = x + y;
        printf("\n O resultado da soma �: %.2f", resultado);
        break;
         
    case '-':
        resultado = x - y;
        printf("\nO resultado da subtra��o �: %.2f", resultado);
        break;
     
     case '*':
        resultado = y * x;
        printf("\nO resultado da multiplica��o �: %.2f", resultado);
        break;
         
     case '/':
        if (y == 0)
           printf("\nDivis�o Imposs�vel!"); 
        else{
           resultado = x / y;
           printf("\nO resultado da divis�o �: %.2f", resultado);
        }
    break;   
         
    default: 
        printf("\nOp��o inv�lida! Tente novamente (+, -, *, /)"); 
    }
    printf("\n");
    system ("pause");
}
