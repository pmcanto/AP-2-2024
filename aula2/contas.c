#include <stdio.h>

void main () {
    float peso, altura;
    printf("Digite o seu peso: \n" );
    scanf("%f",&peso);
    printf("Digite sua altura: \n");
    scanf("%f",&altura);


    printf("O IMC de uma pessoa com peso %f kg e altura %f m é igual a %f\n", peso, altura, (peso / (altura * altura)));
}

