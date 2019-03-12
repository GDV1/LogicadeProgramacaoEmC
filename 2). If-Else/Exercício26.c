/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo que receba a idade de uma pessoa e classifique-a seguindo o 
*	crit�rio a seguir:
*
*			Idade				Classifica��o
*         0 a 2 anos             Rec�m-nascido
*         3 a 11 anos             Crian�a
*        12 a 19 anos            Adoslescente
*        20 a 55 anos              Adulto
*       Acima de 55 anos            Idoso
*
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	
	// Configura o idioma de acordo com a localiza��a
	setlocale(LC_ALL, "portuguese");
	
	// Vari�veis
	int idade;
	
	// Processamento
	printf("Informe a sua idade: \n");
	scanf("%d", &idade);
	
	
	if(idade>= 0 && idade < 3){
		printf("Rec�m-nascido\n");
	}else{
		if(idade >= 3 && idade < 12){
			printf("Crian�a\n");
		}else{
			if(idade >= 12 && idade < 20){
				printf("Adolescente\n");
			}else{
				if(idade >= 20 && idade < 55){
					printf("Adulto\n");
				}else{
					if(idade >= 55){
						printf("Idoso\n");
					}
				}
			}
		}
	}	
	system("pause");
}
