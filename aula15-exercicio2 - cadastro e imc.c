#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*

    Desenvolva um programa que cadastre 
    o nome, a altura, o peso, o CPF e o sexo (M/F)
    de uma pessoa.
    
    Antes do cadastro pergunte ao usuario quantos registros ele deseja realizar.
    
    com os dados cadastrados, em localize uma das pessoas por meio do CPF e imprima o seu IMC em tela.
    
    Calculo IMC = peso/(altura^2)
    

*/


struct Pessoa {
	char nome[50];
    char sexo; // M ou F
    float peso;
    float altura;
    long cpf;
};

int main(){
    
    int i=0, j=0, temp=0, n_cadastrado=0;
    long localiza_cpf;
    float imc=0;
    
    struct Pessoa pessoas

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