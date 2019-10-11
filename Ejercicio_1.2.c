#include <stdio.h>
#include <stdlib.h>

int convertir(int n,int m){
	if(n<m){
	 evaluar(n);
	 return n;
	}else{
		return convertir(n/m,m)*m+evaluar(n%m); 
		
	}
}
int evaluar(int n){
	printf("%d",n);
	return n;
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n;
	int m;
	printf("Ingrese un numero\n");
	scanf("%d",&n);
	printf("Ingrese a que base quiere convertirlo < 10 \n");
	scanf("%d",&m);
	printf("Numero convertido\n");
	convertir(n,m);
	
	return 0;
}

