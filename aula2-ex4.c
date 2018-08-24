#include <stdio.h>
#include <stdlib.h>
#define PI 3.14 // definição de constante

/*
CONSTANTE
*/

int main () {
    float raio,area;
    printf("Digite o valor do raio: ");
    scanf("%f",&raio);
    
    area=PI*raio*raio;
    
    printf("\nÁrea: %.2f \n",area);
}