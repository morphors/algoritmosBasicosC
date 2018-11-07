#include <stdio.h>
#include <stdlib.h>

/*
 * Crie uma função que retorna o seguinte: A função recebe três valores reais por parâmetro e retorna
 * o quadrado do 1º + a soma dos outros dois números. 
 *
 * solução
*/

float calcula(int x, int y, int z){
    return (x*x)+(y+z); // pode ser usado pow(x,2)
}

int main(){
	// inicio 
	int num1,num2,num3;
    float resultado;

	// entrada de dados
	printf("Digite um numero: ");
	scanf("%d", &num1);
	printf("Digite um numero: ");
	scanf("%d", &num2);
	printf("Digite um numero: ");
	scanf("%d", &num3);

	// Operacoes (processamento)
    resultado = calcula(num1,num2,num3);
    
    printf("\n O resultado: %.2f \n", resultado);

	return(0);
}

