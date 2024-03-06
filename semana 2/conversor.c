#include <stdio.h>
#include <math.h>

int main () {
    float celsius;
    printf("Digite o valor em celsius: \n" );
    scanf("%f",&celsius);
	
	float fahren;
	
	fahren = (9.0/5.0) * celsius + 32;
	
    printf("Uma temperatura de %.2f graus Celsius equivale a %.2f graus Fahrenheit.", celsius, fahren);
    return 0;
}

