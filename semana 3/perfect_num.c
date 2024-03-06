# include <stdio.h>

int main () {
	
	int num;
	printf("Digite um número inteiro!: \n");
	scanf("%d", &num);
	while (num < 1) 
	{
		printf("Digite um número inteiro! \n");
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
		printf("O número %d é perfeito! \n", num);
	}
	else {
		printf("O número %d não é perfeito \n", num);
	}
}
