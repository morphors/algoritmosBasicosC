#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*

Estruturas aninhadas

*/


// prototipos de funções 
//void cadastrar();
//void mostrar();
//void alterar(int cadastro);

struct agenda {
	char nome[50];
    char telefone[11];
};

int main(){
    
    int acesso = 1;
    int opcao;

	struct agenda a[15];
    

	// entrada de dados
    while (acesso == 1){
        printf(" +==============   AGENDA TELEFONICA   =============== \n");
        
        printf(" \t  OPÇÕES\n");
        printf(" \t  1 - Cadastrar \n");
        printf(" \t  2 - Visualizar \n");
        printf(" \t  3 - Alterar\n");
        printf(" \t  4 - Sair\n\n");
        printf(" \t  Digite a opção: ");
        scanf("%d",&opcao);
        
        switch(opcao){
            case 1: 
                printf("\n Cadastrar\n");
                break;
            case 2: 
                //mostrar();
                printf("\n Visualizar\n");
                break;
            case 3: 
                printf("\n Alterar\n");
                break;
            case 4: 
                printf("\n Saindo \n");
                return 0;
                
            default: printf("\n Opção inválida\n");
                break;
        }
        //printf(" ======================   FIM   ====================== \n");
    }
     
	return(0);
}


/* funções 
void mostrar(){
    for (int i=0;i<5;i++){
        printf(" -------------------------------------------------- ");
        printf("\n Cod.: %d \n Nome: %s \n Tel.: %d", a[i].cod, a[i].nome, a[i].telefone);
    }
}
*/