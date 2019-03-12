/** Autor: Gabriel Dias **/

/**
* 	Leia 4 notas de prova (P1, P2, P3 e P4) e 4 notas de trabalho (T1, T2, T3 e T4)
*	e, posteriormente, exiba a mensagem "APROVADO" ou "NÃO APROVADO" dependendo dos 
*	valores obtidos, conforme as regras de cálculo defidas a seguir:
*
*       a). Média das provas: MP = (P1 + P2 + P3 + P4)/4;
*       b). Média dos trabalhos: MT = (T1 + T2 + T3 + T4)/4;
*       c). Média final: MF = 0.8*MP + 0.2*MT;
*
*       Situação: Se MF >= 6,0 -> APROVADO
*                 Se MF < 6,0 -> NÃO APROVADO
**/

// Bibliotecas padrão
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	
	// Configura o idioma de acordo com a localização
	setlocale(LC_ALL, "portuguese");
	
	// Variáveis
	float P1, P2, P3, P4, T1, T2, T3, T4, MF, MT, MP;

	// Processamento
	printf("\nDigite a nota da primeira prova: ");
	scanf("%f", &P1);
	
	printf("\nDigite a nota da segunda prova: ");
	scanf("%f", &P2);
	
	printf("\nDigite a nota da terceira prova: ");
	scanf("%f", &P3);
	
	printf("\nDigite a nota da quarta prova: ");
	scanf("%f", &P4);
	
	printf("\nDigite a nota do primeiro trabalho: ");
	scanf("%f", &T1);
	
	printf("\nDigite a nota do segundo trabalho: ");
	scanf("%f", &T2);
	
	printf("\nDigite a nota do terceiro trabalho: ");
	scanf("%f", &T3);
	
	printf("\nDigite a nota do quarto trabalho: ");
	scanf("%f", &T4);

	MP = (P1 + P2 + P3 + P4)/4;

	MT = (T1 + T2 + T3 + T4)/4;

	MF = 0.8*MP + 0.2*MT;

	if (MF >= 6.0){
		printf("\nO aluno foi APROVADO!\n");
	}else {
		printf("\nO aluno NÃO FOI APROVADO!\n");
	}
	system("pause");
}
