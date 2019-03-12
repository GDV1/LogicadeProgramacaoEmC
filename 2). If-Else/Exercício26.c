/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo que receba a idade de uma pessoa e classifique-a seguindo o 
*	critério a seguir:
*
*			Idade				Classificação
*         0 a 2 anos             Recém-nascido
*         3 a 11 anos             Criança
*        12 a 19 anos            Adoslescente
*        20 a 55 anos              Adulto
*       Acima de 55 anos            Idoso
*
**/

// Bibliotecas padrão
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	
	// Configura o idioma de acordo com a localizaçõa
	setlocale(LC_ALL, "portuguese");
	
	// Variáveis
	int idade;
	
	// Processamento
	printf("Informe a sua idade: \n");
	scanf("%d", &idade);
	
	
	if(idade>= 0 && idade < 3){
		printf("Recém-nascido\n");
	}else{
		if(idade >= 3 && idade < 12){
			printf("Criança\n");
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
