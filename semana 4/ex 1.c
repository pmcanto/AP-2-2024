# include <stdio.h>

float add_floats (float num1, float num2,float num3) {
	return num1 + num2 + num3;
}

float main () {
	float num1, num2, num3 ;
	
	printf("Qual � o primeiro n�mero?: \n");
	scanf("%f", &num1);
	
	printf("Qual � o segundo n�mero?: \n");
	scanf("%f", &num2);
	
	printf("Qual � o terceiro n�mero?: \n");
	scanf("%f", &num3);
	
	float soma;
	soma = add_floats(num1, num2, num3);
	printf("A soma dos n�meros �: %f", soma);
	
	return 0;
}
