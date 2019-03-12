/** Autor: Gabriel Dias **/

/**
*	Faça um algoritmo que receba um código correspondente ao cargo de um funcionário e
*	imprima seu cargo e o percentual de aumento ao qual este funcionário tem direito
*	segundo a tabela a seguir:
*
*		Código			Cargo			Percentual
*		  1			Escriturário			50
*		  2			Secretário				35
*		  3			Caixa					20
*		  4			Gerente					10
*		  5			Diretor					0
*
**/

// Bibliotecas padrão
#include <stdio.h>
#include <locale.h> 

int main (){
	
	// Configura o idioma de acordo com a localização
    setlocale(LC_ALL, "portuguese");
    
    // Variáveis
    int codigo;
    
    // Processamento
    printf("Digite o código do cargo: ");
    scanf("%d", &codigo);
    
    switch (codigo){
    
	    case 1:
	        printf("\n O cargo correpondente ao código informado é de Escriturário.");
	        printf("\n O aumento percentual é de 50%%.\n");
	    break;
	         
	    case 2:
	        printf("\n O cargo correpondente ao código informado é de Secretário.");
	        printf("\n O aumento percentual é de 35%%.\n");
	    break;
	     
	    case 3:
	        printf("\n O cargo correpondente ao código informado é de Caixa.");
	        printf("\n O aumento percentual é de 20%%.\n");
	    break;
	         
	    case 4:
	        printf("\n O cargo correpondente ao código informado é de Gerente");
	        printf("\n O aumento percentual é de 10%%.\n");
	    break;   
	         
	    case 5:
	        printf("\n O cargo correpondente ao código informado é de Diretor");
	        printf("\n O aumento percentual é de 0%%. \n");
	    break; 
	}
    system ("pause");
}
