/**	Autor: Gabriel Dias **/

/**
*	Fa�a um algoritmo que receba duas notas de 6 alunos e calcule e imprima:
*
*		1. A m�dia entre essas 2 notas de cada aluno;
*		2. A mensagem de acordo com a tabela abaixo:
*
*		M�dia 			Mensagem
*		de 0 a 5.0		Reprovado
*		de 5.1 a 6.9	Recupera��o
*		de 7.0 a 10 	Aprovado
*
*		3. Total de alunos aprovados e o total de alunos reprovados;
*		4. A m�dia geral dos dados.
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
    int cont, contA = 0, contR = 0;
    float media, n1, n2, mediageral = 0;

	// Processamento
    printf("Algoritmo da M�dia de 6 alunos.\n");

    for(cont = 0; cont < 6; cont++){

		// Inser��o dos dados
        printf("\n%d� aluno", cont+1);
        
        printf("\nDigite a primeira nota: ");
        scanf("%f", &n1);

        printf("Digite a segunda nota: ");
        scanf("%f", &n2);
        
        // C�lculo da m�dia
        media = (n1+n2)/2;

		// Verifica��o
    	if (media >= 0 && media <= 5.0){
        	printf("\nO aluno foi reprovado! M�dia: %.2f", media);
        	contR++;
    	}
    	
    	if(media >= 5.1 && media <= 6.9){
        	printf("\nO aluno est� de recupera��o! M�dia: %.2f", media);
    	}
    	
    	if (media >= 7.0 && media <= 10.0){
        	printf("\nO aluno foi aprovado! M�dia: %.2f", media);
        	contA++;
    	}
		printf("\n");	
    }

	mediageral = (mediageral + media)/6;
	
    printf("\nO total de alunos que foram Aprovados �: %d", contA);
    printf("\nO total de alunos que foram Reprovados �:%d", contR);
    printf("\nA M�dia Geral �: %.2f\n", mediageral);

    system("pause");
}
