#include <stdio.h>

int main() {
    int n;
    printf("Digite o número: \n");
    scanf("%d", &n); // Corrigido aqui
    int *ponteiro = &n; // Ponteiro para a variável

    printf("Conteúdo da variável: %d\n", n); // a) Conteúdo da variável
    printf("Endereço da variável: %p\n", &n); // b) Endereço da variável
    printf("Conteúdo do ponteiro: %d\n", *ponteiro); // c) Conteúdo do ponteiro

    return 0;
}



// Ex 2 professor
/*
int main() {
    int i = 10; 
    int *p = &i;

  printf("*p = %d\n", *p);

  printf(" p = %ld\n", (long int)p);

    printf(" p = %p\n", (void *)p);

    printf("&p = %p\n", (void *)&p);

    return 0;
}
*/