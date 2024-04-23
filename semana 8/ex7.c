#include <stdio.h>

int divisiveis(int arr[], int tam, int x) {
    if (tam == 0) {
        return 0;
    }
    if (arr[tam - 1] % x == 0) {
        return 1 + divisiveis(arr, tam - 1, x);
    } else {
        return divisiveis(arr, tam - 1, x);
    }
}

int main() {
    int tam, x;
    printf("Digite o tamanho do array: ");
    scanf("%d", &tam);
  
    int arr[tam];
    printf("Digite os elementos do array: ");
  
    for(int i = 0; i < tam; i++) {
        scanf("%d", &arr[i]);
    }
  
    printf("Digite o número pelo qual os elementos devem ser divisíveis: ");
    scanf("%d", &x);
  
    int count = divisiveis(arr, tam, x);
    printf("Existem %d elementos no array que são divisíveis por %d\n", count, x);
    return 0;
}
