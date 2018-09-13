#include<stdio.h>
#include<stdlib.h>

/*
 * Faça um programa no qual o usuário informe um valor chamado PI, que esteja entre 0 e 20. 
 Depois o programa deve exibir os números de 0 a 100 
 substituindo por “PI” nas posições que são múltiplos de PI
 */

int main()
{
  int pi,multiplo,i;

  printf("Digite um numero entre 0 e 20: ");
  scanf("%d", &pi);
  printf("\n");
    
//    if (pi<0 || pi>20){
//        printf("Numero invalido");
//    }

  while(i<=100){
	  if( i%pi == 0 ){
		  printf("PI\n");   
	  }else{
      printf("%d, ",i);
      }
  i++;
  // i+=1
  }
  printf("\n");
  // comentários
  // mais comentários
}

