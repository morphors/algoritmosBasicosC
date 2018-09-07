#include <stdio.h>
#include <stdlib.h>

/*

operações aritméticas 

*/

int main () {
  char opcao;
  float a,b;

  printf("\n\n\n \t\t\t Operações aritméticas entre 2 números \n\n\n");
  printf("\t\t Entre com 2 números A e B: \n");
    scanf("%f", &a);
    scanf("%f", &b);

  printf("\n Operações possiveis: \n\n");
  printf("\t\t + \n");
  printf("\t\t - \n");
  printf("\t\t * \n");
  printf("\t\t / \n");

  printf("\n Digite o simbolo da operação:\n");
  fflush(stdin); /* limpa buffer de memória*/
  // opcao = getchar(); 
    scanf("%c", &opcao);
  printf("valor de op: %c", opcao);

  switch(opcao){
    case '+' : printf("\n%.2f + %.2f = %.2f\n\n", a,b,a+b); break;
    case '-' : printf("\n%.2f - %.2f = %.2f\n\n", a,b,a-b); break;
    case '*' : printf("\n%.2f * %.2f = %.2f\n\n", a,b,a*b); break;
    case '/' : printf("\n%.2f / %.2f = %.2f\n\n", a,b,a/b); break;
    default : printf("\n\n Digite a operação correta:(+ - * / ) \n\n\n");
  }

}
