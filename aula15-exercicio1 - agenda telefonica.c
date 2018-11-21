#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*

Estruturas aninhadas

*/

void cadastrar(){
}

void mostrar(){
}
void alterar(int cadastro){
}

struct agenda {
    int cod;
	char nome[50];
    char telefone[11];
};

int main(){
    
    int acesso = 1;
    int opcao;

	struct agenda a[15];
    
    a[0].cod = 1;
    a[0].nome = "Cadastro 1";
    a[0].telefone = "6845-5000"
    

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
                printf("\nErrou\n");
                break;
            case 2: 
                mostrar();
                printf("\nErrou\n");
                break;
            case 3: 
                printf("\nErrou\n");
                break;
            case 4: 
                printf("\n Saindo \n");
                return 0;
                
            default: printf("\n Opção inválida\n");
                break;
        }
        //printf(" ======================   FIM   ====================== \n");
    }
    
    /*
	gets(entrada);
	//scanf("%[^\n]s", &entrada);
	strcpy(c.nome, entrada);


	printf("Digite a idade:");
	scanf("%d", &c.idade);

	fflush(stdin);
	printf("Digite a rua:");

	gets(entrada);
	strcpy(c.end.rua, entrada);
	//gets(c.end.rua);
	//scanf("%[^\n]s", &c.end.rua);

	printf("Digite o numero:");
	fflush(stdin);
	scanf("%d", &c.end.numero);

	// mostra os dados 
	printf("\nNome: %s | Idade: %d | End.: %s , nº%d\n", c.nome, c.idade, c.end.rua, c.end.numero);
    */
    
    
	return(0);
}

void mostrar(){
    for (int i=0;i<5;i++){
        printf(" -------------------------------------------------- ");
        printf("\n Cod.: %d \n Nome: %s \n Tel.: %d", a[i].cod, a[i].nome, a[i].telefone);
    }
}