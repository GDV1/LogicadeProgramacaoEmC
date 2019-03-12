/** Autor: Gabriel Dias **/

/**
*	Uma empresa decidiu dar um reajuste de 30% aos funcionários com salário inferior a 
*	R$ 500,00. Faça um algoritmo que receba o salário do funcionário e mostre o salário
*	reajustado ou uma mensagem caso ele não tenha direito ao reajuste.
**/

// Bibliotecas padrão
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (){
	
	// Configura o idioma de acordo com a localização
    setlocale(LC_ALL, "portuguese");

	// Variáveis
    int salario, ajuste, salariofinal;

	// Processamento
    printf("Digite o salário do funcionário: ");
    scanf("%d",&salario);

    if(salario < 500){
        ajuste = salario*0.3;
        salariofinal = salario + ajuste;
        printf("O reajuste deve ser de: %.2d\n", ajuste);
        printf("O salário final deve ser de: %.2d\n", salariofinal);
    }else{
        printf("\nO funcionário não tem direito ao reajuste salarial.\n");
	}
	
	system("pause");
}
