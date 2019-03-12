/** Autor: Gabriel Dias **/

/**
* 	Leia 4 notas de prova (P1, P2, P3 e P4) e 4 notas de trabalho (T1, T2, T3 e T4)
*	e, posteriormente, exiba a mensagem "APROVADO" ou "N�O APROVADO" dependendo dos 
*	valores obtidos, conforme as regras de c�lculo defidas a seguir:
*
*       a). M�dia das provas: MP = (P1 + P2 + P3 + P4)/4;
*       b). M�dia dos trabalhos: MT = (T1 + T2 + T3 + T4)/4;
*       c). M�dia final: MF = 0.8*MP + 0.2*MT;
*
*       Situa��o: Se MF >= 6,0 -> APROVADO
*                 Se MF < 6,0 -> N�O APROVADO
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	
	// Configura o idioma de acordo com a localiza��o
	setlocale(LC_ALL, "portuguese");
	
	// Vari�veis
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
		printf("\nO aluno N�O FOI APROVADO!\n");
	}
	system("pause");
}
