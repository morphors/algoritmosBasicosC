/*

Em um cercado há vários patos e coelhos. Escreva um programa que solicite ao usuário o total de
cabeças e o total de pés, e determine quantos patos e coelhos se encontram nesse cercado

*/

#include<stdio.h>

int main(){
  
  int flamingos, cavalos, cabecas, patas;
  
  printf("\n\Diga o numero de cabecas: ");
  scanf("%d", &cabecas);
  
  printf("\n\Diga o numero de patas: ");;
  scanf("%d", &patas);
  
  cavalos = (patas-(2*cabecas))/2;
  flamingos = cabecas - cavalos;
  
  if(cabecas > patas || patas < cabecas || cavalos <= 0){
    
    printf("\nNao eh possivel!");
    
  }
  else{
    
  printf("\n\nO numero de cavalos eh %d e o de flamingos eh %d", cavalos, flamingos);
  
  }
  
  return 0;
  
}
