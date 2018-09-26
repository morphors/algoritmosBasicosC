#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
Faça um programa no qual o usuário digite 10 valores e depois o programa deve informar qual é o maior valor digitado.

*/

int main(){
    
	int numeros[10];
    
	printf("Digite 10 numeros:\n");
	
	for (int i=0;i<10;i++){
		scanf("%d",&numeros[i]);
	}
    
    int maior = 0;
    int i = 0;
    
    while(i < 10){
        
        if (maior < numeros[i]){
            maior = numeros[i];
        }
        i++;
    }
    
    printf("o maior numero eh: %d \n",maior);

}

