#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int mcd(int m, int n){
	if(m%n==0){
		return n;
	}else{
		return mcd(n,m%n);
	}
}
int main(int argc, char *argv[]) {
	int n,m;
	printf("Ingrese el primer numero(debe ser el mayor)\n");
	scanf("%d",&m);
	printf("Ingrese el segundo numero(debe ser el menor)\n");
	scanf("%d",&n);
	printf("El maximo comun divisor de los numeros es: %d",mcd(m,n));
	return 0;
}
