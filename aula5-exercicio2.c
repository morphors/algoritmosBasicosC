#include<stdio.h>
#include<stdlib.h>

/*
exemplo da professora
*/

int main(){
    int op;
    printf("\n Escolha uma opção: \n");
    printf(" 1. Sacar \n");
    printf(" 2. Depositar \n");
    printf(" 3. Transferir \n");
    
    scanf("%d",&op);
    
    switch(op){
        case 1: printf("\n Saque em andamento...");break;
        case 2: printf("\n Efetuando deposito ...");break;
        case 3: printf("\n Transferensia em andamento...");break;
        default: printf("\n Opção invalida");
    }
    
    //getch(); // similar ao system pause // não incluido no gcc
    
  // comentários
  // mais comentários
}

