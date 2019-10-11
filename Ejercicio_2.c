#include <stdio.h>

int main() {
    int primero, segundo;
    printf("Ingrese el primer numero: ");
    scanf("%d",&primero);

    printf("Ingrese el segundo numero: ");
    scanf("%d",&segundo);


    printf("El resultado de %dC%d es: %d",primero, segundo, comb(primero, segundo));
    return 0;
}

int comb(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    } else {
        return comb(n - 1, k - 1) + comb(n - 1, k);
    }
}
