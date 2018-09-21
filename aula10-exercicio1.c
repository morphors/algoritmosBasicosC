#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
Faça um programa que receba o nome de três alunos e depois informe qual dos nomes aparecerá primeiro na lista de presença
da sala que está ordenada em ordem crescente.

exemplo:

Digitou "carlos"
Digitou "bruna"
Digitou "daniela"

resultado: O primeiro que aparecerá na lista será bruna

strcmp(n1,n1);

== 0 -> iguais 
> 0  -> maior 0
< 0  -> menor 0

1ret = strcmp(str1, str2);
2ret = strcmp(str2, str3);
3ret = strcmp(str1, str3);

*/

int main(){
    
    //char aluno3[20]="ana";
    //char aluno2[20]="bruno";
    //char aluno1[20]="carlos";
    
    char aluno3[20];
    char aluno2[20];
    char aluno1[20];
    //int comp1,comp2,comp3;
    
    // leitura dos nomes para o vetor
    
    printf("Digite 3 nomes diferentes de aluno: \n");
    gets(aluno1);
    fflush(stdin); // limpa buffer 
    gets(aluno2);
    fflush(stdin); // limpa buffer 
    gets(aluno3);
    fflush(stdin); // limpa buffer 


    //comp1 = strcmp(aluno1,aluno2);
    //comp2 = strcmp(aluno1,aluno3);
    //comp3 = strcmp(aluno1,aluno3);
    
    if (strcmp(aluno1,aluno2) == -1 && strcmp(aluno1,aluno3) == -1){  // verifica se a variavel aluno1 é a primeira entre as outras 2
        printf("%s é o primeiro", aluno1);
    }
    else if(strcmp(aluno2,aluno1) == -1 && strcmp(aluno2,aluno3) == -1){ // verifica se a variavel aluno3 é a primeira entre as outras 2
        printf("%s é o primeiro", aluno2);
    }
    else if(strcmp(aluno3,aluno1) == -1 && strcmp(aluno3,aluno2) == -1){ // verifica se a variavel aluno3 é a primeira entre as outras 2
        printf("%s é o primeiro", aluno3);
    }
    else {
        printf("há nomes repetidos em primeiro!!!");
    }

}

