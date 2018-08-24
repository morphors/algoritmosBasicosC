#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
ifs 
*/

int main () {
    
    setlocale(LC_ALL, "portuguese"); // FORÇA LOCALIZAÇÃO 
    
    float salario,novo_salario;
    printf("Digite o salário: ");
    scanf("%f", &salario);

    if (salario < 500){
	    novo_salario = salario * 1.15;
    }
    else {
	    if (salario <= 1000){
		    novo_salario = salario * 1.10;
	    }
	    else {
		    novo_salario = salario * 1.05;
	    }
    }

    printf("\nNovo Salário: %.2f \n", novo_salario);

}
