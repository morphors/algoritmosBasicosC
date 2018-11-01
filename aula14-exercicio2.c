#include <stdio.h>
#include <stdlib.h>

/*
 * Melhore e modularize o programa incompleto a seguir
 *
*/

switch(Origem){
	case 1:
		printf("\n %f Produto do Sul", Preco);
		break;
	case 2:
		printf("\n %f Produto do Norte", Preco);
		break;
	case 3:
		printf("\n %f Produto do Leste", Preco);
		break;
	case 4:
		printf("\n %f Produto do Oeste", Preco);
		break;
	case 5:
		printf("\n %f Produto do Sudeste", Preco);
		break;
	case 6:
		printf("\n %f Produto do Centro-Oeste", Preco);
		break;
	case 7:
		printf("\n %f Produto do Nordeste", Preco);
		break;
	default:
		printf("\n %f Produto importado", Preco);
		break;
}
