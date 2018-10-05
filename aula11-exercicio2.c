#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*

Exercicio 2 - LAÇO FOR

Faça um programa para um caixa eletrônico. 
O caixa eletrônico trabalha apenas com notas de R$10, R$ 20, R$50 e R$100. 

O cliente do banco digita o valor do saque e o programa deve informar a quantidade de notas que deverão ser fornecidas. 


Exemplo: Quer sacar R$ 270,00, então o programa informa: 

O caixa eletrônico deve liberar: - 2 notas de R$ 100,00 - 1 nota de R$ 50,00 - 1 nota de R$ 20,00.


O programa deverá informar valor inválido para saque, caso não seja possível contabilizar as notas. 

Exemplo: Quer sacar R$ 256,00, então deverá exibir na tela valor indisponível para saque. 

O programa deve ficar repetindo até o usuário digitar saque igual a 0 (zero).

*/

int main(){
    
    // declaracao e inicializacao do vetor de cedulas
    //int cedulas[4] = {100, 50, 20, 10};
    int nota100=0, nota50=0, nota20=0, nota10=0;
        
    int valor=0;
    
    for (;;)
    {
        system("clear");
        printf("Digite um valor em reais: ");
        scanf("%d", &valor);
        
        if(valor==0)
        {
            break;
        }
        if(valor!=0)
        {
            nota100 = valor / 100;
            valor = valor % 100;
            
            nota50 = valor / 50;
            valor = valor % 50;
            
            nota20 = valor / 20;
            valor = valor % 20;
            
            nota10 = valor / 10;
            valor = valor % 10;
            
            if (valor!=0)
            {
                printf("Valor indisponivel para saque. \n\n");
            }
            else
            {
                printf("Quantidade de notas! \n\n");
                printf("Nota de R$100 = %d\n", nota100);
                printf("Nota de R$50 = %d\n", nota50);
                printf("Nota de R$20 = %d\n", nota20);
                printf("Nota de R$10 = %d\n", nota10);
            }
            // printf("Pressione ENTER \n");
            
        }
        system("read -p 'Press Enter to continue...' var");
        
    }

}

