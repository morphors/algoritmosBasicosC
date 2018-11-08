#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct cadastro {
	char nome[50];
	int idade;
	char rua[50];
	int numero;
};

int main(){
	struct cadastro c;

	printf
	strcpy(c.nome, "João"); // usa-se a função para atribuir dado
	c.idade = 20;
	strcpy(c.rua, "Av. João dias");
	c.numero = 200;

	printf("Nome: %s | Idade: %d | End.: %s , nº%d\n", c.nome, c.idade, c.rua, c.numero);

	return(0);
}
