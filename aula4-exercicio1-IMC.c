#include <stdio.h>
#include <stdlib.h>

/*

Calculo de IMC

IMC = peso / (Altura²)

abaixo de 18.5 - abaixo do peso ideal
entre 18.5 e 24.9 - Parabéns Peso normal
entre 25.0 e 29.9 - Acima do peso Sobrepeso
entre 30.0 e 34.9 - Obesidade Grau I
entre 35.0 e 39.9 - Obesidade GRau II
acima de 40.0 - Obesidade Grau III

maior > 
menor <
*/

int main () {
    float peso,altura,imc;
        
    printf("\t\t CALCULO DE IMC \n\n\t Use ponto (.) como separador. \n\n");
    printf("Digite seu peso (ex. 61.3) : ");
    scanf("%f", &peso);
    printf("Digite sua altura (ex. 1.72):  ");
    scanf("%f", &altura);
    
    imc = peso / (altura*altura);
    
    printf("\nSeu imc é: %.2f \n", imc);
    
    if (imc < 18.5){
        printf("Abaixo do peso ideal \n");
    }
    else if (imc >= 18.5 && imc <=24.9){
        printf("Parabéns Peso normal \n");
    }
    else if (imc >= 25.0 && imc <=29.9){
        printf("Acima do peso - Sobrepeso \n");
    }
    else if (imc >= 30.0 && imc <=34.9){
        printf("Obesidade Grau I \n");
    }
    else if (imc >= 35.0 && imc <=39.9){
        printf("Obesidade Grau II \n");
    }
    else if (imc > 40.0){
        printf("Obesidade Grau III \n");
    }
    else {
        printf("erros nos dados");
    }

}
