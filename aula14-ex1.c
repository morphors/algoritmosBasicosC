#include<stdio.h>
#include<stdlib.h>

/*
 *
 * FUNÇÕES 
 *
 * As funções usadas são declaradas antes do main()
 *
 * Caso declarar depois na função main() declarar prototipo no inicio do do código
*/

int Quadrado(); // prototipo 

int main(){
	int n1,n2;

	printf("Digite um número: ");
	scanf("%d", &n1); 

	n2 = Quadrado(n1);

	printf("O quadrado do número é: %d \n", n2);

}

int Quadrado(int n){
	return(n*n);
}
