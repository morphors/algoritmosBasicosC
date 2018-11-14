#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct cadastro {
	char nome[50];
	int idade;
	char *rua;
	int numero;
};

int main(){
	struct cadastro c;

	printf("Digite o nome:");
	scanf("%[^\n]s", &c.nome);

	printf("Digite a idade:");
	fflush(stdin);
	scanf("%d", &c.idade);

	printf("Digite a rua:");
	fflush(stdin);
    fflush(stdout);    
    gets(c.rua);
	scanf("%[^\n]s", &c.rua);
	
	printf("Digite o numero:");
	scanf("%d", &c.numero);
	printf("\nNome: %s | Idade: %d | End.: %s , nº%d\n", c.nome, c.idade, c.rua, c.numero);

	return(0);
}
