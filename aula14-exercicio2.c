#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Melhore e modularize o programa incompleto a seguir
 *
 * Solução
*/

void Local(int x,float y); // prototipo

int main(){
    
    // define variaveis 
    int origem;
    float preco;
    
    // solicita entrada de dados
    printf("\n Qual o código de origem: ");
    scanf("%d", &origem);
    printf("\n Qual o preço do produto: ");
    scanf("%f", &preco);
    
    // executa função 
    Local(origem,preco);
    
    return 0;
}


// função
void Local(int x,float y)
{
    // define variavel 
    char regiao[15]; 
    float valor = y;
    
    // conforme caso, define valor da região 
    
    // não tem como definir valor para a string diretamente
    // Ex: regiao = "Sul"  -->  é necessário o uso da função strcpy() de string.h
    
    if(x==1){ strcpy(regiao,"Sul");} 
    else if(x==2){ strcpy(regiao,"Norte");}
    else if(x==3){ strcpy(regiao,"Leste");}
    else if(x==4){ strcpy(regiao,"Oeste");}
    else if(x==5){ strcpy(regiao,"Sudeste");}
    else if(x==6){ strcpy(regiao,"Centro-Oeste");}
    else if(x==7){ strcpy(regiao,"Nordeste");}
    else {strcpy(regiao,"Importado");}
    
    printf("\nValor e região do produto");
    printf("\n %.2f Produto do %s \n", valor, regiao);
    
}