#include <stdio.h>
#include <stdlib.h>

/*
OPERADOR RESTO
*/

int main () {
    int n1,n2;
//    printf("Digite dois números: ");
//    scanf("%d %d",&n1,&n2);
    printf("Digite um número: ");
    scanf("%d",&n1);
    printf("Digite outro número: ");
    scanf("%d",&n2);
    
    if(n1>n2){
        printf("\nO PRIMEIRO número é maior!\n");
    }
    else{
        printf("\nO SEGUNDO número é maior!\n");
    }    
}

/*
Operadores relacionais e lógico

&&     => e
||     => ou
!      => não
==     => igual
>      => menor
<      => maior
!=     => diferente

*/