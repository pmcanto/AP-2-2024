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
	
	int i;
	
	printf("O %d é divido por: ", num);
	for (i=1; i < num + 1; ++i)
	{
		if (num % i == 0){
			printf("%d ", i);
		}
		
	}
}
