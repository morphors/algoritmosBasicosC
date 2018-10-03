#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
Faça um programa no qual o usuário digite 10 valores e depois o programa deve informar qual é o maior valor digitado.

*/

int main(){

    int maior,n,i;
    i = 1;
    
    while(i <= 10){
        printf("Digite um numero:\n");
        scanf("%d",&n);
        
        if (n>maior){
            maior = n;
        }
        i++;
    }
    
    printf("o maior numero eh: %d \n",maior);

}

