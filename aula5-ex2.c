#include <stdio.h>
#include <stdlib.h>

/*

switch 
	case

*/

int main () {
	int i;

	printf("\n\n\n \t\t \"Cara\" ou \"Coroa\"?\n\n\n");
	printf("\t\t 1. Cara\n");
	printf("\t\t 2. Coroa\n");

	printf("\n\n\n \t\t\t Selecione a opcao: ");
	scanf("%d",&i);

	switch(i){
		case 1 : printf("\n Voce escolheu cara\n"); break;
		case 2 : printf("\n Voce escolheu coroa\n"); break;
		default: printf("\n entre apenas com 1 ou 2 \n");
	}
}

