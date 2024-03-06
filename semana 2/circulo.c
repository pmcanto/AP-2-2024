#include <stdio.h>
#include <math.h>

int main () {
  float raio;
  printf("Digite o valor do raio do círculo: \n" );
  scanf("%f",&raio);

  float area;
  area = M_PI * pow(raio,2);

  printf("O círculo com raio %.2f tem área igual a %.2f", raio, area);
  return 0;
}

