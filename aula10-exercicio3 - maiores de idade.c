#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
Faça um programa no qual o usuário digite as idades de 10 pessoas e 
depois o programa deve informar quantas pessoas são maiores de idade.
*/

int main(){
    
    int idade;
    int maior = 0;
    int i = 1;    
    while(i <= 10){
        printf("Digite a %dª idade:\n", i);
        scanf("%d",&idade);
        
        if (idade >= 18){
            maior++;
        }
        i++;
    }
    
    printf("tem %d pessoas maiores de idade. \n",maior);
}

