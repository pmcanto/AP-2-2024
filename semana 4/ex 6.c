#include <stdio.h>
#include <math.h>

double expression(int num) {
    double soma = 0.0;
    for (int k = 1; k <= num; k++) {
        soma += k / pow(k, 2) * pow(-1, k + 1);
    }
    return soma;
}

int main() {
    int num;
    printf("Digite um valor inteiro:\n");
    scanf("%d", &num);

    double resultado = expression(num);
    printf("O resultado para n=%d é %.13lf\n", num, resultado);

    return 0;
}
