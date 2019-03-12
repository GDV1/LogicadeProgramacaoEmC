/** Autor: Gabriel Dias **/

/**
*	Fa�a um algoritmo que receba um c�digo correspondente ao cargo de um funcion�rio e
*	imprima seu cargo e o percentual de aumento ao qual este funcion�rio tem direito
*	segundo a tabela a seguir:
*
*		C�digo			Cargo			Percentual
*		  1			Escritur�rio			50
*		  2			Secret�rio				35
*		  3			Caixa					20
*		  4			Gerente					10
*		  5			Diretor					0
*
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <locale.h> 

int main (){
	
	// Configura o idioma de acordo com a localiza��o
    setlocale(LC_ALL, "portuguese");
    
    // Vari�veis
    int codigo;
    
    // Processamento
    printf("Digite o c�digo do cargo: ");
    scanf("%d", &codigo);
    
    switch (codigo){
    
	    case 1:
	        printf("\n O cargo correpondente ao c�digo informado � de Escritur�rio.");
	        printf("\n O aumento percentual � de 50%%.\n");
	    break;
	         
	    case 2:
	        printf("\n O cargo correpondente ao c�digo informado � de Secret�rio.");
	        printf("\n O aumento percentual � de 35%%.\n");
	    break;
	     
	    case 3:
	        printf("\n O cargo correpondente ao c�digo informado � de Caixa.");
	        printf("\n O aumento percentual � de 20%%.\n");
	    break;
	         
	    case 4:
	        printf("\n O cargo correpondente ao c�digo informado � de Gerente");
	        printf("\n O aumento percentual � de 10%%.\n");
	    break;   
	         
	    case 5:
	        printf("\n O cargo correpondente ao c�digo informado � de Diretor");
	        printf("\n O aumento percentual � de 0%%. \n");
	    break; 
	}
    system ("pause");
}
