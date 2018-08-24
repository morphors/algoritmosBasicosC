#include<stdio.h>
/*
 * programa para imprimir 1776 em romanos
*/
int main(){
	int a = 1985;

	a = romanize (a, 1000,'m');
	a = romanize (a, 500,'d');
	a = romanize (a, 100,'c');
	a = romanize (a, 50,'l');
	a = romanize (a, 10,'x');
	a = romanize (a, 5,'v');
	romanize(a,1,'i');
	putchar('\n');
}
romanize(i,j,c)
	char c;
	int i,j;
{
	while(i>=j){
		putchar(c);
		i=i-j;
	}
	return(i);
}
