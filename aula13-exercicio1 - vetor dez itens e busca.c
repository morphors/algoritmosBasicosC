#include<stdio.h>
#include<stdlib.h>

/*
 *
 * Faca um programa no qual o uauario digite 10 valor 
 * em seguida recebe um novo valor 
 * verifica se o foi encontrado o valor no vetor
 *
*/

int main(){
    
	int numeros[10]; //={22,23,25,11,10,1,5,7,9,10};
	int i;
	int tamanho = 10; // le tamanho do vetor
	int busca;
  
     
	printf("Digite 10 numeros:\n");	
	
	for (i=0;i<tamanho;i++){
		scanf("%d",&numeros[i]);
	}
    
    printf("\n\n");
    printf("Digite o valor para buscar:\n");
    scanf("%d",&busca);
    
    int encontrado=0;
    
    for (i=0; i< tamanho; i++){
    	
        if (busca == numeros[i]){
        	
            encontrado=1;
            
        }
    }
    
    if(encontrado==1){
    	printf("o valor foi encontrado\n");
	}
    else{
	printf("o valor nao foi encontrado\n");
	}

}
