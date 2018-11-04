#include <stdio.h>
#include <stdlib.h>

/*
 * Crie uma função que receba um caractere como parâmetro 
 * e retorne 1 (um) caso seja uma vogal e 0 (zero) caso não seja
 * 
 * 
 * 
 * 
 * solicita entrada de char, caso variavel pertença a valor da matriz retorna tipo 
 * 
 * 
 * primeira solução
*/

void tipo(char x){
	int decimal=(int)x;
	char vogais[] = {'A', 'E', 'I', 'O', 'U','a','e','i','o','u'};
	int find = 0;

	for(int i=0; i<10;i++){ // 
		if(x==vogais[i]){
			printf("Vogal");
			find = 1;
			break;
		}

		else if(decimal==32){
			printf("espaco");
			find = 1;
			break;
		}

		else if( (decimal > 65 && decimal < 90) || (decimal > 97 && decimal < 122) ){
			printf("Consoante");
			find = 1;
			break;
		}

	}
	if(find==0){
		printf("Não pertence ao alfabeto");
	}

}

int main(){
	// inicio 
	char letra;

	int i=0;

	// entrada de dados
	printf("Digite uma letra: ");
	scanf("%c", &letra);

	tipo(letra);

	return(0); 
}

