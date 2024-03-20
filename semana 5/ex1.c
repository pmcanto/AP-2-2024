#include <stdio.h>
#include <stdbool.h>
//  funciona no replit

bool crescente(int v[], int n) {
    bool ehcrescente = true;

    for (int i = 0; i < n-1; i++) {
        if (v[i] >= v[i+1]) { 
          ehcrescente = false;
          break;
        }
    }

    return ehcrescente;
}

int main() {
    printf("Entre o n�mero de elementos do vetor: ");
    int n;
    if (!scanf("%d", &n)) { return 1; }
    int vetor[n];
    for (int i = 0; i < n; i++) {
        printf("Valor para a posi��o %d: ", i);
        if (!scanf("%d", &vetor[i])) { return 1; }
    }
    if (crescente(vetor, n)) { printf("EST� em ordem crescente!\n"); }
    else { printf("N�O EST� em ordem crescente!\n"); }
    return 0;
}
