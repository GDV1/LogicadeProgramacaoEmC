/** Autor: Gabriel Dias **/

/**
*	Escreva um algoritmo que leia o n�mero de identifica��o, as 3 notas obtidas por um aluno
*	nas 3 verifica��es e a m�dia dos exerc�cios que fazem parte da avalia��o. Calcule, tamb�m,
*	a m�dia do aluno, usando a f�rmula, e o seu conceito:
*
*					M�dia=(nota1+(nota2*2)+(nota3*3)+media dos exercicios)/7 
*
*	Para o conceito use a tabela abaixo:
*
*		M�dia Final					Conceito
*		9 <= x <=10					   A
*	  7.5 <= x < 9					   B
*	   6 <= x < 7.5					   C
*	   4 <= x < 6					   D
*	     x < 4						   E
*
*	
*	O programa deve escrever o n�mero do aluno, suas notas, a m�dia dos exerc�cios, a m�dia de 
*	aproveitamento, o conceito correspondente e a mensagem: APROVADO se o conceito for A, B ou C
* 	e REPROVADO, se o conceito for D ou E.
*
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	// Configura o idioma de acordo com a localiza��o
	setlocale(LC_ALL, "portuguese");
	
	// Vari�veis
	int id;
	float nota1, nota2, nota3, media_exercicios, media_final;
	
	// Processamento
	printf("Informe a matr�cula do aluno: ");
	scanf("%d", &id);
	
	printf("\nAgora entre com as notas do aluno %d", id);
	
	// Nota 1
	printf("\nNota 1: ");
	scanf("%f", &nota1);
	
	// Nota 2
	printf("\nNota 2: ");
	scanf("%f", &nota2);
	
	// Nota 3	
	printf("\nNota 3: ");
	scanf("%f", &nota3);
	
	// Calculo m�dia
	media_exercicios = (nota1+nota2+nota3)/3;
	
	media_final = (nota1+(nota2*2)+(nota3*3)+media_exercicios)/7;
	
	if(media_final <= 10.0 && media_final >= 9.0){
		printf("\nO aluno %d obteve as seguintes notas: ", id);
		printf("\nN1: %.2f", nota1);
		printf("\nN2: %.2f", nota2);
		printf("\nN3: %.2f", nota3);
		printf("\nM�dia dos Exerc�cios: %.2f", media_exercicios);
		printf("\nM�dia final: %.2f", media_final);
		printf("\nConceito: A");
		printf("\nO aluno(a) foi APROVADO(A)!");
	}else{
		if(media_final < 9.0 && media_final >= 7.5){
			printf("\nO aluno %d obteve as seguintes notas: ", id);
			printf("\nN1: %.2f", nota1);
			printf("\nN2: %.2f", nota2);
			printf("\nN3: %.2f", nota3);
			printf("\nM�dia dos Exerc�cios: %.2f", media_exercicios);
			printf("\nM�dia final: %.2f", media_final);
			printf("\nConceito: B");
			printf("\nO aluno(a) foi APROVADO(A)!");
		}else{
			if(media_final < 7.5 && media_final >= 6.0){
				printf("\nO aluno %d obteve as seguintes notas: ", id);
				printf("\nN1: %.2f", nota1);
				printf("\nN2: %.2f", nota2);
				printf("\nN3: %.2f", nota3);
				printf("\nM�dia dos Exerc�cios: %.2f", media_exercicios);
				printf("\nM�dia final: %.2f", media_final);
				printf("\nConceito: C");
				printf("\nO aluno(a) foi APROVADO(A)!");
			}else{
				if(media_final < 6.0 && media_final >= 4.0){
					printf("\nO aluno %d obteve as seguintes notas: ", id);
					printf("\nN1: %.2f", nota1);
					printf("\nN2: %.2f", nota2);
					printf("\nN3: %.2f", nota3);
					printf("\nM�dia dos Exerc�cios: %.2f", media_exercicios);
					printf("\nM�dia final: %.2f", media_final);
					printf("\nConceito: D");
					printf("\nO aluno(a) foi REPROVADO(A)!");
				}else{
					if(media_final < 4.0){
						printf("\nO aluno %d obteve as seguintes notas: ", id);
						printf("\nN1: %.2f", nota1);
						printf("\nN2: %.2f", nota2);
						printf("\nN3: %.2f", nota3);
						printf("\nM�dia dos Exerc�cios: %.2f", media_exercicios);
						printf("\nM�dia final: %.2f", media_final);
						printf("\nConceito: E");
						printf("\nO aluno(a) foi REPROVADO(A)!");
					}
				}
			}
		}
	}	
	printf("\n");
	system("pause");
}
