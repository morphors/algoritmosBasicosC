#include<stdio.h>
#include<stdlib.h>

/*
 programa para exibir a tabuada ate o numero 10 
 de um numero digitado pelo usuario
 */

int main()
{
  int num,i;

  printf("Calcular a tabuada de qual numero: ");
  scanf("%d", &num);
  printf("\n");

  i=1;
  while(i<=10){
  printf("%d X %d = %d \n", num,i,num*i);
  i++;
  // i+=1
  }
  // comentários
  // mais comentários
}

