#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*


*/
int main(){
    
    char str1[20] = "aluno";
    char str2[20] = "professor";
    
    int compara;
    
    compara = strcmp(str1,str2);
    
    if (compara < 0 ){
        printf(" %s vem primeiro", str1);
    }
    else if (compara > 0 ){
        printf(" %s vem primeiro", str2);
    }
    else {
        printf("as duas palavras são iguais");
    }
    
}

