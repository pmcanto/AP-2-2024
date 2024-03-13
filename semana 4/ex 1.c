# include <stdio.h>

float add_floats (float num1, float num2,float num3) {
	return num1 + num2 + num3;
}

float main () {
	float num1, num2, num3 ;
	
	printf("Qual é o primeiro número?: \n");
	scanf("%f", &num1);
	
	printf("Qual é o segundo número?: \n");
	scanf("%f", &num2);
	
	printf("Qual é o terceiro número?: \n");
	scanf("%f", &num3);
	
	float soma;
	soma = add_floats(num1, num2, num3);
	printf("A soma dos números é: %f", soma);
	
	return 0;
}
