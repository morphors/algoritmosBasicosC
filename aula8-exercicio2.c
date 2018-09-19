#include<stdio.h>
#include<stdlib.h>

/*
numero primo
*/


int main(){
    
    int tabuleiro = 31;
    float pagamento, dolar;
    
    // pagamento = 0;
    dolar = 1;
    
    for (int i = 1; i <= tabuleiro; i++){
        //pagamento = pagamento + dolar;
        dolar = dolar * 2;
        printf("\nna casa %d o valor eh: %.0f \n", i, dolar);
    }
  // mais comentários
}

