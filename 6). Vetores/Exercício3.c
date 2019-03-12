/** Autor: Gabriel Dias **/

// Bibliotecas padrão
#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<stdlib.h>

main(){
	
	//Configura o idioma de acordo com a localização	
	setlocale(LC_ALL, "portuguese");
	   
	//Variáveis
    int vA[10], vB[10], vC[20];
    int i;

	//Processamento
    printf("Digite os elementos do vetor A: \n");
    for(i = 0; i < 10; i++){
        scanf("%d", &vA[i]);
    }

    printf("\n");

    printf("Digite os elementos do vetor B: \n");
    for(i = 0; i < 10; i++){
        scanf("%d", &vB[i]);
    }

    printf("\n");

    for(i = 0; i < 10; i++){
        printf("%d %d ", vA[i], vB[i]);
    }
    system("pause");
}
