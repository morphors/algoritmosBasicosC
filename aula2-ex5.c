#include <stdio.h>
#include <stdlib.h>

/*
OPERADOR RESTO
*/

int main () {
    int num,resto;
    printf("Digite um número: ");
    scanf("%d",&num);
    
    resto = num%2; // retorna o resto da divisão por 2
    
    printf("\nO resto da divisão é: %d \n",resto);
    
    if(resto==0){
        printf("o numero é par!\n");
    }
    else{
        printf("o numero é impar!\n");
    }
    
}