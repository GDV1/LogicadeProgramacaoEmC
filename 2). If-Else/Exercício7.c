/** Autor: Gabriel Dias **/

/**
* 	Um comerciante comprou um produto e quer vend�-lo com um lucro de 45% se
*	o valor da compra for menor que R$ 20,00; caso contr�rio, o lucro ser� de
* 	30%. Entre com o valor do produto e imprima o valor da venda.
**/

// Bibliotecas padr�o
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main (){
	
	// Configura o idioma de acordo com a localiza��o
    setlocale(LC_ALL, "portuguese");
    
    // Vari�veis
	float preco, lucro, venda;

	// Processamento
	printf("Digite o valor do produto comprado: ");
	scanf("%f", &preco);

	if(preco < 20){
        lucro = preco * 0.45;
		venda = lucro + preco;
		printf("\nO valor da venda deve ser de: %.2f", venda);
	}else{
		lucro = preco * 0.3;
		venda = lucro + preco;
		printf("\nO valor da venda deve ser de: %.2f",venda);
	}
	system("pause");
}
