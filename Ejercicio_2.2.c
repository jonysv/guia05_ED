#include <stdio.h>

int main() {
    int n,m, resultado;
    printf("Ingrese n: ");
    scanf("%d",&n);

    printf("Ingrese m: ");
    scanf("%d",&m);

    resultado = factorial(n)/(factorial(m)*factorial(n-m));
    printf("%dC%d = %d", n, m, resultado);
    return 0;
}

int factorial(int numero){
    if(numero<=1){
        return numero;
    }else{
        return (numero*factorial(numero-1));
    }
}
