#include <stdio.h>
#include <stdlib.h>

int hexa(int n){
	if(n<16){
	 evaluar(n);
	 return n;
	}else{
		return hexa(n/16)*16+evaluar(n%16); 
		
	}
}
int evaluar(int n){
	if(n<10){
		printf("%d",n); 
	}else{
	switch(n){
		case 10:
			printf("A");
			break;
		case 11:
			printf("B");
			break;
		case 12:
			printf("C");
			break;
		case 13:
			printf("D");
			break;
		case 14:
			printf("E");
			break;
		case 15:
			printf("F");
			break;						
	}
	}
	return n;
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n;
	printf("Ingrese un numero\n");
	scanf("%d",&n);
	printf("Convertido a base hexadecimal\n");
	hexa(n);
	
	return 0;
}

