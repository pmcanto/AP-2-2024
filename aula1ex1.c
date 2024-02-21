#include <stdio.h>

float price = 10;
float money;

int main() {
    // Imprima suas primeiras mensagens
    printf("Mackenzie - FCI\n");
    printf("Algoritmos e\n");
    printf("Programação II\n");
    printf("Turmas: 02N11\n");

    printf("Quanto você tem?: ");
    scanf("%d", &money);
    if (price > money) {
        printf("Você não tem dinheiro o bastante \n");
    }
    else {
        money = money - price;
        printf("Você consegue comprar e sobra: %d \n ", money);
    }
    
    
    return 0;
}