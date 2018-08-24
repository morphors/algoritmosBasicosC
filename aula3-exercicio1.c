#include <stdio.h>
#include <stdlib.h>

/*
uma frutaria está vendendo frutas com a seguinte tabela de preços:
----------
até 5kg
morango - 2,50/kg
maça - 1.80/kg

acima de 5kg
morango - 2,20/kg
maça - 1.50/kg
-------------

Se o cliente comprar mais de 8kg em frutas ou o valor da compra ultrapassar R$25, receberá ainda um desconto de 10% sobre este total.
Escreva um algoritmo para ler a quantidade em kg adquiridas e escreva o valor a ser pago pelo cliente.

*/

int main () {
    float maca, morango; // peso a ser comprado
    float preco_maca,preco_morango; // preco 
    float pesototal, valortotal, valor_compra; // 

    printf("Digite a quantidade de morango em kg: ");
    scanf("%f", &morango);
    printf("Digite a quantidade de maca em kg: ");
    scanf("%f", &maca);

    // tabela preco morango
    if (morango>5){
	    preco_morango = morango * 2.20;
	    printf("\nMorango sai a:\t R$2.20");
    }
    else{
	    preco_morango = morango * 2.50;
	    printf("\nMorango sai a:\t R$2.50");
    }
    // tabela preco maca
    if (maca>5){
	    preco_maca = maca * 1.50;
	    printf("\nMaca sai a:\t R$1.50\n");
    }
    else{
	    preco_maca = maca * 1.80;
	    printf("\nMaca sai a:\t R$1.80\n");
    }

    valortotal = preco_morango + preco_maca;
    pesototal = morango + maca;
    
    printf ("\nPeso total da compra: \t %.2f \n",pesototal);
    
    

    if(pesototal > 8 || valortotal > 25){
	    valor_compra = valortotal-(valortotal*0.1);
        printf ("\nValor total da compra: \t %.2f \n",valortotal);
	    printf("Foi descontado 10%% e o novo valor é: \t %.2f \n", valor_compra);
    }
    else{
        printf("O valor da compra é: \t %.2f \n", valortotal);
    }
    
}
