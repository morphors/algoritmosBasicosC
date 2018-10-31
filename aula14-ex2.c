#include<stdio.h>
#include<stdlib.h>

/*
 *
 * FUNÇÕES 
 *
 * Usando 2 parametros
 *
*/

int Maior(); // prototipo 

int main(){
	int n1,n2,resultado;

	printf("Digite um número: ");
	scanf("%d", &n1); 
	printf("Digite outro número: ");
	scanf("%d", &n2); 

	resultado = Maior(n1,n2);

	printf("O maior número é: %d \n", resultado);

}

int Maior(int x, int y){

	if(x>y){
		return x;
	}
	else {
		return y;
	}

}
