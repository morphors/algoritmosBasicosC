#include<stdio.h>
#include<stdlib.h>

/*
numero primo
*/


int main(){
    
    int tabuleiro = 31;
    int dolar = 4;
    long long int pagamento;
    
    pagamento = dolar;
    
    for (int i = 2; i <= tabuleiro; i++){
        // 
        pagamento = pagamento * 2;
        printf("\nna casa %d o valor eh: %lld!\n", i, pagamento);
    }
  // mais comentários
}

