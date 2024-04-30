#include <stdio.h>

void bubble_sort(int lista[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {     
        for (j = 0; j < n-i-1; j++) {
            if (lista[j] > lista[j+1]) {
                temp = lista[j];
                lista[j] = lista[j+1];
                lista[j+1] = temp;
            }
        }
    }
}

int busca_binaria_recursiva(int lista[], int inicio, int fim, int elemento) {
    if (inicio > fim) {
        return -1;  // elemento não encontrado
    }

    int meio = (inicio + fim) / 2;
    if (lista[meio] == elemento) {
        return meio;  // elemento encontrado
    }

    if (elemento < lista[meio]) {
        return busca_binaria_recursiva(lista, inicio, meio - 1, elemento);
    } else {
        return busca_binaria_recursiva(lista, meio + 1, fim, elemento);
    }
}

int main() {
    int n;
    printf("Digite o tamanho da lista: ");
    scanf("%d", &n);

    int lista[n];
    printf("Digite os elementos da lista:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &lista[i]);
    }

    bubble_sort(lista, n);  // ordenando a lista

    int elemento;
    printf("Digite o elemento a ser buscado: ");
    scanf("%d", &elemento);

    int resultado = busca_binaria_recursiva(lista, 0, n - 1, elemento);

    if (resultado != -1) {
        printf("Elemento encontrado na posição %d\n", resultado);
    } else {
        printf("Elemento não encontrado\n");
    }

    return 0;
}
