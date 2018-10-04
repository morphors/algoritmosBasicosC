#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*

Exercício - LAÇO FOR

Faça um programa exiba TODOS os 255 caracteres da tabela ASCII exibindo o caractere e sua representação na base decimal. Exemplo: printf("65 = %c",65); O número 65 representa o caractere “A”, então será impresso na tela: 65 = A.

*/

int main(){
    
    int i;
    
    for( i =0; i<=255; i++){
        int cont = i;
        printf("%d = %c \n",cont, cont);
    }
    
}

