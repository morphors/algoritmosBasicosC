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
 * Solução melhorada
*/

void tipo(char x){
	int decimal=(int)x;
	char vogais[] = {'A', 'E', 'I', 'O', 'U','a','e','i','o','u'};
	int find = 0;

	// Testa se é um espaco
	if(decimal==32)
	{
		printf("\nO caractere [ %c ] é um espaço.\n", x);
		find = 1;
	}

	// verifica se faz parte do alfabeto
	else if( (decimal >= 65 && decimal <= 90) || (decimal >= 97 && decimal <= 122) )
	{

		// loop para testar as vogais 
		for(int i=0; i<10;i++)
		{ 
			// testando as vogais 
			// printf("comparando %c com %c \n", x, vogais[i]);
			if(x==vogais[i])
			{
				printf("\nO caractere [ %c ] é uma vogal.\n", x);
				find = 1;
				break;
			}

		}
		
		// faz parte do alfabeto, mais não foi encontrado nas vogais
		if( find==0 )
		{
			printf("\nO caractere [ %c ] é uma consoante.\n", x);
			find = 1;
		}
	}


	// não faz parte do alfabeto e não é espaço
	else if(find==0)
	{
		printf("\nO caractere [ %c ] Não pertence ao alfabeto.\n", x);
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

