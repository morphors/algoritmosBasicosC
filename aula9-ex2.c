#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
vetores
*/


int main(){
    
    char nome[20];
        
    printf("Qual o nome do artista: ");
    fflush(stdin); // limpa buffer 
    
    gets(nome); // pega entrada digitada pelo usuário
    
    if (strcmp(nome,"silvio")==0){
        printf("Silvio Santos!");
    }
    else if (strcmp(nome,"katy")==0){
        printf("Katy Perry!");
    }
    else if (strcmp(nome,"elton")==0){
        printf("Elton John!");
    }
    else {
        printf("Artista desconhecido!");
    }
    
    puts("\n\n");
    
    
}

