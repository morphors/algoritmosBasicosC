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
    
    while(i<10){
        
        printf("Digite o %d nome de aluno: \n", i+1);
        fflush(stdin);
        
        gets(nome);
        
        if(strcmp(nome,"mario")==0){  // strcmpi() // ignora case-sensitive não funcionou no gcc do termux
            marios++;
        }
        i++;
    }
    
    printf("Foram digitados %d aluno(s) com nome mario. \n", marios);

}

