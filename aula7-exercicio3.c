#include<stdio.h>
#include<stdlib.h>

/*
 * programa para exibir numeros impares em um intervalo
 * definido pelo usuario
 */

int main()
{
  int inicio,fim;

  printf("Digite o numero inicial: ");
  scanf("%d", &inicio);
  printf("\n");

  printf("Digite o numero final: ");
  scanf("%d", &fim);

  while(inicio<=fim){
	  if(inicio%2 == 1){
		  printf(" %d", inicio);
	  }
  inicio++;
  // i+=1
  }
  printf("\n");
  // comentários
  // mais comentários
}

