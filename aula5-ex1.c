#include <stdio.h>
#include <stdlib.h>

/*

== comparação
&& condição E
|| condição OU
*/

int main () {
    int ra, senha;
    printf("Digite RA: ");
    scanf("%d",&ra);
    printf("\nDigite Senha: ");
    scanf("%d",&senha);
    
    if(ra==123 && senha==456){
        printf("\nAcesso Liberado!!!");
    }
    else {
        printf("\nAcesso Negado!!!");
    }
    printf("\n");
}
