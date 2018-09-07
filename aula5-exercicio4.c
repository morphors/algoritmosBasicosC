#include<stdio.h>
#include<stdlib.h>

/*
exemplo da professora
*/

int main(){
    char time;
    
    printf("\n Escolha o time: \n");
    printf(" S. São Paulo \n");
    printf(" C. Corinthians \n");
    printf(" P. Palmeiras \n");
    
    time = getchar();
    //scanf("%c",&time);

    switch(time){
        case 'S':
            printf("\n SÃO PAULO.\n");
            break;

        case 'C':
            printf("\n CORINTHIANS.\n");
            break;

        case 'P':
            printf("\n PALMEIRAS.\n");
            break;

        default:
            printf("\n Time desconhecido\n");
        }
  // comentários
  // mais comentários
}

