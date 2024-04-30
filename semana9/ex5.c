#include <stdio.h>

int reverterNum(int num) {

    if (num < 10) {
        return num;
    } 
    else 
    {
        return ((num % 10) * pow(10, (int)log10(num))) + reverterNum(num / 10);
    }
}

int main() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    int numReverso = reverterNum(num);
    printf("O número revertido é: %d\n", numReverso);
    return 0;
}
