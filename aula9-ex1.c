#include<stdio.h>
#include<stdlib.h>

/*
vetores
*/


int main(){
    
    float notas[5];
    
    // leitura de notas para o vetor
    for(int i =0; i < 5; i++){
        printf("Digite a %dº nota do aluno: ", i+1);
        scanf("%f", &notas[i]);
    }
    
    printf("\n \t\t Notas Registradas\n");
    // calcula a soma das notas e apresenta cada nota na tela
    float soma=0;
    for(int i =0; i < 5; i++){
        soma = soma + notas[i];
        printf("Nota %d = %.1f \n", i, notas[i]);
    }
    
    printf("\n \t\t Média Final");
    // calcula e apresenta a média das notas
    float media = soma / 5;
    printf("Media das notas = %.1f \n", media);
    
}

