# include <stdio.h>

int tabuada (int num) {
	int tabuada, i;
	printf("A tabuada do n�mero %d �: \n", num);
	for (i = 1; i < 10; ++i){
		tabuada = num * i;
		printf("%d X %d = %d\n", num, i, tabuada);
	}
}


float main () {
	int num;
	printf("Qual n�mero voc� deseja ver a tabuada? \n");
	scanf("%d", &num);
	
	tabuada(num);
	return 0;
}
