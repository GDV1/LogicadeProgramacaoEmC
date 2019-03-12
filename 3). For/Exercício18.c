/** Autor: Gabriel Dias **/

/**
*	Cada espectador de um cinema respondeu a um questionário no qual constava sua idade
*	e sua opinião sobre o filme assistido:
*
*		1. Regular
*		2. Bom
*		3. Ótimo
*
*	Faça um algoritmo que receba a idade e a opinição de 15 espectadores, calcule e imprima:
*	
*		-> A média das idades das pessoas que responderam ótimo;
*		-> A quantidade de pessoas que responderam regular;
*		-> A porcentagem de pessoas que responderam bom entre todos os espectadores entrevistados.
*
**/

// Bibliotecas padrão
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>


int main (){
	
	// Configura o idioma de acordo com a localização
    setlocale(LC_ALL, "portuguese");

	// Variáveis
    int cont, otimo, bom, regular, idade, opiniao, qtdotimo;
    float mediaidade, porcentagembom;

	// Inicialização das variáveis
    otimo = 0;
    bom = 0;
    regular = 0;
    mediaidade = 0;
   
	// Processamento
    for(cont = 1; cont <= 15; cont++){

        printf("\nInforme a sua idade: ");
        scanf("%d", &idade);
		
		printf("\nDigite a sua opinião sobre o filme assistido seguindo a legenda -  1: regular; 2: bom; 3: ótimo: ");
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

	printf("\nA Média das idades das pessoas que responderam 'Ótimo' é: %.2f", mediaidade);
	printf("\nA quantidade de pessoas que respoderam 'Regular' é: %d", regular);
	printf("\nA porcentagem de pessoas que digitaram 'Bom' é: %.2f%%\n", porcentagembom);
    system("pause");
}
