#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
Faça um programa no qual o usuário digite as idades de 10 pessoas e 
depois o programa deve informar quantas pessoas são maiores de idade.
*/

int main(){
    
    int idades[10];
    
    printf("Digite 10 idades:\n");
	
	for (int i=0;i<10;i++){
		scanf("%d",&idades[i]);
	}

    int maior = 0;
    int i = 0;
    
    while(i < 10){
        
        if (idades[i] >= 18){
            maior++;
        }
        i++;
    }
    
    printf("tem %d pessoas maiores de idade. \n",maior);
}

