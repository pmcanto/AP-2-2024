# include <stdio.h>

int tabuada (int num) {
	int tabuada, i;
	printf("A tabuada do número %d é: \n", num);
	for (i = 1; i < 10; ++i){
		tabuada = num * i;
		printf("%d X %d = %d\n", num, i, tabuada);
	}
}


float main () {
	int num;
	printf("Qual número você deseja ver a tabuada? \n");
	scanf("%d", &num);
	
	tabuada(num);
	return 0;
}
