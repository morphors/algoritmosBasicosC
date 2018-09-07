#include<stdio.h>

/*
exemplo da professora
*/

int main(){
    
    char op;
    printf("\n Informe uma letra R, G ou B: \n\n");
    
    op = getchar(); // não roda no gcc 
    
            switch(op){
                case 'r':
                case 'R':
                    printf(" Red ou vermelho. \n");
                    break;

                case 'g':
                case 'G':
                    printf(" Green ou verde.\n");
                    break;
                
                case 'b':
                case 'B':
                    printf(" Blue ou azul. \n");
                    break;
                default:
                    printf(" Cor inválida. \n");
        }

  // comentários
  // mais comentários
}


