#include<stdio.h>
#include<stdlib.h>

/*
 * Com Base na matriz abaixo, faça um programa que some todas as linhas e todas as colunas 
 * e apresente o resultado de cada uma
 * 
 *  | 1,2,3 |
 *  | 4,5,6 |
 *  | 7,8,9 |
*/

int main(){
    
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int i,j; // linhas e colunas 
    int tamanho = 3;
    int soma=0;
  
    for (i=0; i<tamanho; i++){    // soma as linhas
        soma = 0;
        for (j=0;j<tamanho; j++){
            soma = soma + mat[i][j];
        }
        printf("a soma da linha %d é igual a: %d \n", i+1, soma ); 
    }
    
    for (j=0; j<tamanho; j++){    // soma as colunas
        soma = 0;
        for (i=0;i<tamanho; i++){
            soma = soma + mat[i][j];
        }
        printf("a soma da coluna %d é igual a: %d \n", j+1, soma );
    }

}
