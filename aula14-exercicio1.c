#include <stdio.h>
#include <stdlib.h>

/*
 * modularize o programa a seguir
 *
 * solução
*/


int plus(int x,int y){
	return(x+y);
}
int minus(int x,int y){
	return(x-y);
}
int times(int x,int y){
	return(x*y);
}
float over(int x,int y){
	return(x/y);
}
	
int main(){
	// inicio 
	int num1,num2,num3,num4;
	int soma,subt,mult;
	float div;

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
	soma = plus(num1,num3);
	subt = minus(num2,num4);
	mult = times(num1, num4);
	div = over(num3, num4);

	// resultados 

	printf("\nResultados:\n");
	printf("soma: %d\n", soma);
	printf("subtracao: %d\n", subt);
	printf("multiplicacao: %d\n", mult);
	printf("divisao: %.2f\n", div);

	return(0); // main() definida para retornar um inteiro
}

