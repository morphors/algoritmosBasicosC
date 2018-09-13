#include <stdio.h>
#include <stdio.h>

void main(){
    int opcao;
    
    printf("\n\n Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco\n\n");
    
    printf("\n\t 1. 25\n");
    printf("\n\t 2. 24\n");
    printf("\n\t 3. 26\n");
    printf("\n\t 4. 49\n");
    printf("\n\t 5. Sair\n");
    
    while(1){
        scanf("%d",&opcao);
        switch(opcao){
            case 1: printf("\nErrou\n"); break;
            case 2: printf("\nErrou\n"); break;
            case 3: printf("\nErrou\n"); break;
            case 4: printf("\nErrou\n"); break;
            case 5: printf("\n saindo \n"); return;
            default: printf("\n Opção inválida\n"); break;
        }
    }
    printf("\n FIM\n");
}
