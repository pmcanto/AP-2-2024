#include <stdio.h>
#define MAX_SIZE 100

// ex 1

int main() {
  // minha versão
    char nome[MAX_SIZE];
    int i, tamanho;

    printf("Digite seu nome: \n");
    scanf("%s", nome);
  
    for(tamanho = 0; nome[tamanho] != '\0'; ++tamanho);

    printf("O seu nome invertido é: ");
    for(i = tamanho - 1; i >= 0; i--) {
        printf("%c", nome[i]);
    }
  
    return 0;
}
/*
// ex 1 pelo professor
int main() {
    char minhastring[100];

    printf("Digite a string: ");
    fgets(minhastring, sizeof(minhastring), stdin);

    minhastring[strcspn(minhastring, "\n")] = '\0';

    // reverte
    printf("Reverso: ");
    for (int i = strlen(minhastring) - 1; i >= 0; i--) {
        printf("%c", minhastring[i]);
    }
    printf("\n");

    return 0;
}
*/