#include <stdio.h>
#include <stdlib.h>

/*
 * modularize o programa a seguir
 *
 * solução
*/

void plus(int x,int y){
	printf("Soma: %d\n",x+y);
}
void minus(int x,int y){
	printf("Subtracao: %d\n",x-y);
}
void times(int x,int y){
	printf("Multiplicacao: %d\n",x*y);
}
void over(int x,int y){
    float a;
    a = x/y;
	printf("Divisao: %.2f \n",a);
}
	
int main(){
	// inicio 
	int num1,num2,num3,num4;

	// entrada de dados
	printf("Digite um numero: ");
	scanf("%d", &num1);
	printf("Digite outro numero: ");
	scanf("%d", &num2);
	printf("Digite mais um numero: ");
	scanf("%d", &num3);
	printf("Digite o ultimo numero: ");
	scanf("%d", &num4);

	// Operacoes (processamento)
	plus(num1,num3);
	minus(num2,num4);
	times(num1, num4);
	over(num3, num4);

	return(0); // main() definida para retornar um inteiro
}

