#include<stdio.h>
#include<stdlib.h>

/*
 * Com Base na matriz abaixo, Faça um programa que some a 
 * 
 * >>>  diagonal PRINCIPAL <<<  da matriz
 * e apresente o seu resultado
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
  
    for (i=0; i<tamanho; i++){    // percorre linhas 

        for (j=0;j<tamanho; j++){    // percorre colunas

            if(i==j){ // se linha e coluna for iqual faça a soma
                soma = soma + mat[i][j];
            }
        }
    }
    
    printf("a soma da diagonal principal é igual a: %d \n", soma ); 

}
