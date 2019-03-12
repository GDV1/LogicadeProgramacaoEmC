/** Autor: Gabriel Dias **/

/**
*	Cada espectador de um cinema respondeu a um question�rio no qual constava sua idade
*	e sua opini�o sobre o filme assistido:
*
*		1. Regular
*		2. Bom
*		3. �timo
*
*	Fa�a um algoritmo que receba a idade e a opini��o de 15 espectadores, calcule e imprima:
*	
*		-> A m�dia das idades das pessoas que responderam �timo;
*		-> A quantidade de pessoas que responderam regular;
*		-> A porcentagem de pessoas que responderam bom entre todos os espectadores entrevistados.
*
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>


int main (){
	
	// Configura o idioma de acordo com a localiza��o
    setlocale(LC_ALL, "portuguese");

	// Vari�veis
    int cont, otimo, bom, regular, idade, opiniao, qtdotimo;
    float mediaidade, porcentagembom;

	// Inicializa��o das vari�veis
    otimo = 0;
    bom = 0;
    regular = 0;
    mediaidade = 0;
   
	// Processamento
    for(cont = 1; cont <= 15; cont++){

        printf("\nInforme a sua idade: ");
        scanf("%d", &idade);
		
		printf("\nDigite a sua opini�o sobre o filme assistido seguindo a legenda -  1: regular; 2: bom; 3: �timo: ");
		scanf("%d", &opiniao);
		
		if (opiniao == 1){
			regular++;
		}
		if(opiniao == 2){
			bom++;
			porcentagembom = bom*(100/15);
		}
		if(opiniao == 3){
			otimo++;
			qtdotimo = idade;
			mediaidade = qtdotimo/otimo;
		}
    }

	printf("\nA M�dia das idades das pessoas que responderam '�timo' �: %.2f", mediaidade);
	printf("\nA quantidade de pessoas que respoderam 'Regular' �: %d", regular);
	printf("\nA porcentagem de pessoas que digitaram 'Bom' �: %.2f%%\n", porcentagembom);
    system("pause");
}
