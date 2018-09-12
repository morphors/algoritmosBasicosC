#include<stdio.h>
#include<stdlib.h>
/*
exemplo da professora
*/


int main(){
  char cnh;
  printf("Digite qual a categoria da sua CNH (em maiusculo): ");

  fflush(stdin); // limpa buffer de memória

  cnh = getchar(); //rodou normal no gcc-termux
    
    if(cnh == 'A'){
        printf("Motocicleta");
    }
    else if (cnh == 'B'){
        printf("Automóvel");
    }
    else if (cnh == 'C'){
        printf("Caminhão");
    }
    else if (cnh == 'D'){
        printf("Ônibus");
    }
    else if (cnh == 'E'){
        printf("Carreta");
    }
    else{
        printf("CNH Invalida");
    }
    puts("\n"); // para imprimir strings na tela
  // comentários
  // mais comentários
}

