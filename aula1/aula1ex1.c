#include <stdio.h>

int price = 10;
int money;

int main() {
    // teste da função de print
    printf("Mackenzie - FCI\n");
    printf("Algoritmos e\n");
    printf("Programação II\n");
    printf("Turmas: 02N11\n");

    // teste da função de input
    printf("Quanto você tem?: ");
    scanf("%d", &money);
    //teste da função if else
    if (price > money) {
        printf("Você não tem dinheiro o bastante \n");
    }
    else {
        // manipulação de variáveis
        money = money - price;
        // função print com impressão de variavel
        printf("Você consegue comprar e sobra: %d \n ", money);
    }
    
    
    return 0;
}