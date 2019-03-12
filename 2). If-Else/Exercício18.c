/** Autor: Gabriel Dias **/

/**
*	A confedera��o brasileira de nata��o ir� promover eliminat�rias para o
*	pr�ximo mundial. Fazer um algoritmo que receba a idade de um nadador e
* 	imprima a sua categoria segundo a tabela a seguir:
*       Categoria           Idade
*       -Infantil A         - 5 a 7 anos
*       -Infantil B         - 8 a 10 anos
*       -Juvenil A          - 11 a 13 anos
*       -Juvenil B          - 14 a 17 anos
*       -S�nior             Maiores de 18 anos
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	
	// Configura o idioma de acordo com a localiza��o
	setlocale(LC_ALL, "portuguese");

	// Vari�veis
	int idade;

	// Processamento
	printf("Digite a idade do atleta: ");
	scanf("%d", &idade);

	if(idade >= 5 && idade <= 7){
		printf("\nO atleta pertence � categoria Infantil A.", idade);
	}
	if(idade >= 8 && idade <= 10){
		printf("\nO atleta pertence � categoria Infantil B.", idade);
	}
	if(idade >= 11 && idade <= 13){
		printf("\nO atleta pertence � categoria Juvenil A.", idade);
	}
	if(idade >= 14 && idade <= 17){
		printf("\nO atleta pertence � categoria Juvenil B.", idade);
	}
	if(idade >= 18){
		printf("\nO atleta pertence � categoria S�nior.", idade);
	}
	system("pause");
}
