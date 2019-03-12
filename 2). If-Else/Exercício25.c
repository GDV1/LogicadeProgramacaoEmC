/** Autor: Gabriel Dias **/

/**
*	Uma empresa decidiu dar um reajuste de 30% aos funcion�rios com sal�rio inferior a 
*	R$ 500,00. Fa�a um algoritmo que receba o sal�rio do funcion�rio e mostre o sal�rio
*	reajustado ou uma mensagem caso ele n�o tenha direito ao reajuste.
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (){
	
	// Configura o idioma de acordo com a localiza��o
    setlocale(LC_ALL, "portuguese");

	// Vari�veis
    int salario, ajuste, salariofinal;

	// Processamento
    printf("Digite o sal�rio do funcion�rio: ");
    scanf("%d",&salario);

    if(salario < 500){
        ajuste = salario*0.3;
        salariofinal = salario + ajuste;
        printf("O reajuste deve ser de: %.2d\n", ajuste);
        printf("O sal�rio final deve ser de: %.2d\n", salariofinal);
    }else{
        printf("\nO funcion�rio n�o tem direito ao reajuste salarial.\n");
	}
	
	system("pause");
}
