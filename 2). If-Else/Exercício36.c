/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo que receba as idades de 15 pessoas e calcula quantas pessoas pertencem as
*	faixas et�rias definas (informando as devidas porcentagens em rela��o ao total). As faixas et�rias s�o:
*
*		1. 1 a 15 anos;
*		2. 16 a 30 anos;
*		3. 31 a 45 anos;
*		4. 46 a 60 anos;
*		5. >= 61 anos.
*
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (){
	
	// Configura o idioma de acordo com a localiza��o
	setlocale(LC_ALL, "portuguese");
	
	// Vari�veis
	int idade, cont;
	float porcentagem0 = 0, porcentagem1 = 0, porcentagem2 = 0, porcentagem3 = 0, porcentagem4 = 0; // Guardam as respectivas porcentagens
	int num0 = 0, num1 = 0, num2 = 0, num3 = 0, num4 = 0; // Contatores que armazenam a quantidade de pessoas de cada faixa 
	
	// Processamento
	for(cont = 0; cont < 15; cont++){
		
		printf("Informe a idade da %d� pessoa: ", cont+1);
		scanf("%d", &idade);

		if(idade >= 1 && idade <= 15){
			num0++;
		}
		
		if(idade >= 16 && idade <= 30){
			num1++;
		}
		
		if(idade >= 31 && idade <= 45){
			num2++;
		}
		
		if(idade >= 46 && idade <= 60){
			num3++;
		}
		
		if(idade >= 61){
			num4++;
		}
	}

	// C�lculo das porcentagens
	porcentagem0 = num0 * 6.7;
	porcentagem1 = num1 * 6.7;
	porcentagem2 = num2 * 6.7;
	porcentagem3 = num3 * 6.7;
	porcentagem4 = num4 * 6.7;
	
	printf("\n%d t�m entre 1 e 15 anos. Total de %.2f%%.", num0, porcentagem0);
	printf("\n%d t�m entre 16 e 30 anos. Total de %.2f%%.", num1, porcentagem1);
	printf("\n%d t�m entre 31 e 45 anos. Total de %.2f%%.", num2, porcentagem2);
	printf("\n%d t�m entre 46 e 60 anos. Total de %.2f%%.", num3, porcentagem3);
	printf("\n%d tem mais de 61 anos. Total de %.2f%%.", num4, porcentagem4);
	printf("\n");
	system("pause");
}
