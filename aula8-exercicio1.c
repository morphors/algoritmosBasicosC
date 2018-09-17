#include<stdio.h>
#include<stdlib.h>

/*
numero primo
*/


int main(){
    
    int num;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    int contador = 0;
    
    for (int i = 1; i <= num; i++) 
    {
        if (num % i == 0) // se a divisão não tem resto 
        {
            contador++; // incrementa contador de divisões sem resto
        }
    }
    
    if (contador == 2){ // se o numero foi dividido somente duas vezes então é primo
        printf("\nO número %d é primo!\n", num);
    }
    else{
        printf("\n\t\t O número %d não é primo \n \t\t Pois é divisivel por %d outros números! \n", num, contador);
    }
    
  // mais comentários
}

