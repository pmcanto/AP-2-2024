# include <stdio.h>

int main () {
	
	int num;
	printf("Digite um n�mero inteiro!: \n");
	scanf("%d", &num);
	while (num < 1) 
	{
		printf("Digite um n�mero inteiro! \n");
		scanf("%d", &num);
	}
	
	int i, num_sum = 0;
	for (i=1; i < num + 1; ++i)
	{
		if (num % i == 0){
			num_sum = i + num_sum;
		}
		
	}
	if (num * 2 == num_sum){
		printf("O n�mero %d � perfeito! \n", num);
	}
	else {
		printf("O n�mero %d n�o � perfeito \n", num);
	}
}
