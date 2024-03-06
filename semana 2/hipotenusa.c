#include <stdio.h>
#include <math.h>

int main () {
    float cat1, cat2;
    printf("Digite o valor do 1 cateto: \n" );
    scanf("%f",&cat1);

    printf("Digite o valor do 2 cateto: \n" );
    scanf("%f",&cat2);
	
	float hip;
	
	hip = sqrt(pow(cat1,2) + pow(cat2,2));
	
    printf("A hipotenusa de %.2f e %.2f é %.2f.", cat1, cat2, hip);
    return 0;
}
