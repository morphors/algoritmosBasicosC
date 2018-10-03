#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
Faça um programa no qual o usuário digite os nomes de 10 alunos e depois o programa deve informar quantos alunos se chamam “mario”.
*/

int main(){
    
    char nome[20];
    
    int marios=0;
    int i=0;
    
    printf("Digite 10 nomes para verificação: \n");
    
    while(i<10){
        fflush(stdin);
        
        gets(nome);
        
        if(strcmp(nome,"mario")==0){
            marios++;
        }
        i++;
    }
    
    printf("Foram digitados %d alunos com nome mario. \n", marios);

}

