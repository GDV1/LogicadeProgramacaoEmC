/** Autor: Gabriel Dias **/

/**
*	A confederação brasileira de natação irá promover eliminatórias para o
*	próximo mundial. Fazer um algoritmo que receba a idade de um nadador e
* 	imprima a sua categoria segundo a tabela a seguir:
*       Categoria           Idade
*       -Infantil A         - 5 a 7 anos
*       -Infantil B         - 8 a 10 anos
*       -Juvenil A          - 11 a 13 anos
*       -Juvenil B          - 14 a 17 anos
*       -Sênior             Maiores de 18 anos
**/

// Bibliotecas padrão
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	
	// Configura o idioma de acordo com a localização
	setlocale(LC_ALL, "portuguese");

	// Variáveis
	int idade;

	// Processamento
	printf("Digite a idade do atleta: ");
	scanf("%d", &idade);

	if(idade >= 5 && idade <= 7){
		printf("\nO atleta pertence à categoria Infantil A.", idade);
	}
	if(idade >= 8 && idade <= 10){
		printf("\nO atleta pertence à categoria Infantil B.", idade);
	}
	if(idade >= 11 && idade <= 13){
		printf("\nO atleta pertence à categoria Juvenil A.", idade);
	}
	if(idade >= 14 && idade <= 17){
		printf("\nO atleta pertence à categoria Juvenil B.", idade);
	}
	if(idade >= 18){
		printf("\nO atleta pertence à categoria Sênior.", idade);
	}
	system("pause");
}
