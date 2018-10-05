#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
Faça o programa da urna eletrônica para as eleições de 2018. O programa deve exibir um menu com os números e os nomes de 3 candidatos à presidência. Os votos serão inseridos por 10 pessoas. O programa deve informar qual dos 3 candidatos ganhou as eleições para presidente.
*/

int main(){
	
	int bolsonaro=0; // Bolsolnaro 17
    int haddad=0; // Haddad 13
    int marina=0; // Marina 18
    
	int op;
	int n=0;
    while (n<10)
    {
        printf("===========================================\n");
        printf("            URNA ELETRONICA                \n");
        printf("===========================================\n");
        printf("           DIGITE NUMERO CANDIDATO         \n\n");
        printf("\t\t 18 - MARINA SILVA \n");
        printf("\t\t 17 - BOLSONARO \n");
        printf("\t\t 13 - HADDAD \n");
        printf("\n Eleitor numero %d \n", n+1);
        
        fflush(stdin);
        scanf("%d",&op);
        
        if(op == 17)
        {
            printf("Voce votou para o Bolsonaro\n");
            bolsonaro++;
            n++;
        }
        
        else if(op == 18)
        {
            printf("Voce votou para o Marina Silva\n");
            marina++;
            n++;
        }
        
        else if(op == 13)
        {
            printf("Voce votou para o Haddad é Lula\n");
            haddad++;
            n++;
        }
        
        else
        {
            printf("Opção invalida. Tente de novo.\n");
            printf("\t\t ############# AVISO ##########\n");
            printf("\t\t Eleitor %d VOTE NOVAMENTE. \n\n", n+1);
        }
    }
    
    printf("\t\t Haddad tem %d votos\n", haddad);
    printf("\t\t Marina tem %d votos\n", marina);
    printf("\t\t Bolsonaro tem %d votos\n", bolsonaro);
    
    if(haddad>marina && haddad>bolsonaro)
    {
        printf("\n\n===========================================\n");
        printf("\t\t O vencedor foi o HADDAD");
        printf("===========================================\n");
    }
    else if(bolsonaro>marina && bolsonaro>haddad)
    {
        printf("\n\n===========================================\n");
        printf("\t\t O vencedor foi o BOLSONARO");
        printf("===========================================\n");
    }
    else if(marina>haddad && marina>bolsonaro)
    {
        printf("\n\n===========================================\n");
        printf("\t\t O vencedor foi o MARINA");
        printf("===========================================\n");
    }
    else{
        printf("\n\n===========================================\n");
        printf("Houve empate!!!");
        printf("===========================================\n");
    }
	 
//	  if(candidato == 17){
//	  	printf("O CANDIDATO ESCOLHIDO FOI [ BOLSONARO ]\n");
//	  	printf("[ 1 ] VERDE PARA CONFIRMAR \n");
//	  	printf("[ 2 ] LARANJA PARA CORRIGIR\n");
//		printf("[ 3 ] BRANCO PARA NULO     \n");

// if(op == 1){
// 	printf(" VOTO CONFIRMADO!\n");
//   }

}

