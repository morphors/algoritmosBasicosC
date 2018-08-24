#include <stdio.h>
#include <stdlib.h>

int main () {
    float anos, dias;
    printf("Digite sua idade: \t");
    
    scanf("%f",&anos); // atribui valor ao endereço da variavel anos
    
    dias = anos*365;
    
    printf("\nSua idade aproximada em dias é: %.0f \n",dias);
    // system("pause");
}

/*
para limitar o número de cadas decimais 

usa-se:
%.(numero de casas)f


ex. "%.2f"

*/