#include<stdio.h>

/*

Em um cercado há vários Flamingos e Cavalos. Escreva um programa que solicite ao usuário o total de
cabeças e o total de pés, e determine quantos Flamingos e Cavalos se encontram nesse cercado

*/


int main(){
    int flamingos, cavalos, cabecas, patas;
    
    printf("\n \t\t Contando quantos animais de cada especie existe em um cercado. \n\n");
    printf("\tConsidere: \n\tFlamingos (2 patas) \n\tCavalos (4 patas) \n\n ");
    printf("\t Considerando que não há somente uma espécie no cercado. Pelo menos 1 flamingo e 1 cavalo \n");
    
    printf("Digite abaixo a quantidade de cabecas e patas:");
    printf("\n Qual o numero total de cabecas: ");
    scanf("%d", &cabecas);

    printf("\n Qual o numero total de patas: ");
    scanf("%d", &patas);
    
    int x,y;
    x = cabecas*4;    // considerar todos animais 4 patas
    y = x - patas;    // subtrair as patas fornecidas
    flamingos = y/2;  // flamingo usa metade das patas 
    cavalos = cabecas - flamingos;  // cavalos usam cabeças restantes
    
    if(cabecas > patas || patas < cabecas || cavalos < 0 || flamingos < 0){ // restricoes
	    printf("\nNao eh possivel!\n ");
	    printf("\n- O numero de cabecas deve ser menor que o de patas!");
	    printf("\n- O numero de patas deve ser maior do que o de cabecas!\n");
    }
	
    else{
	    printf("\nResultado:");
	    printf("\nO numero de cavalos: %d \nO numero de flamingos: %d\n", cavalos, flamingos);
    }
  
    return 0;
}
