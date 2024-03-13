# include <stdio.h>

float c2f (float c) {
	float calculo;
	calculo = c * 9/5 + 32;
	return calculo;
}

float f2c (float f) {
	float calculo;
	calculo = (f - 32) * 5 / 9;
	return calculo;
}

float main () {
	int option;
	float c, temp_final, f;
	printf("O que você deseja fazer hoje? \n (1) converter de Celsius para Fahrenheit \n (2) Converter de Fahrenheit para Celsius \n (3) Sair\n");
	scanf("%d", &option);
	while (option != 3){
		if (option == 1){
			printf("Qual a temperatura em celsius?\n");
			scanf("%f", &c);
			temp_final = c2f(c);
			printf("A temperatura em Fahrenheit é %.2f\n", temp_final);
		}

		else if (option == 2){
			printf("Qual a temperatura em Fahrenheit?\n");
			scanf("%f", &f);
			temp_final = f2c(f);
			printf("A temperatura em Celsius é %.2f\n", temp_final);
		}

		else{
			printf("Digite uma opção válida");	
		}
		printf("O que você deseja fazer hoje? \n (1) converter de Celsius para Fahrenheit \n (2) Converter de Fahrenheit para Celsius \n (3) Sair\n");
		scanf("%d", &option);
	}


	
	return 0;
}
