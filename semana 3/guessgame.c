#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h> 

int main () 
{
	int dado;
	
	srand(time(NULL));
	
	dado = 1 + rand()%100;
	
	int palpite;
	
	printf("Lancei o dado! Tente adivinhar o seu valor! \n");
	
	printf("Qual seu palpite ? \n");
	scanf("%d", &palpite);
	while (palpite <1 || palpite >100)
		{
			printf("Entre 1 e 100, por favor! \n");
			scanf("%d", &palpite);
		}
	int tentativa = 1;
	bool acertou = false;
	while (acertou == false)
	{
		if(palpite == dado)
		{
			printf("Voc� adivinhou! em %d tentativas!  \n", tentativa);
			acertou = true;
		}
		else if (tentativa == 5){
			printf("Voce excedeu o n�mero m�ximo de tentativas! o dado jogado foi: %d", dado);
			acertou = true;
		}
		else
		{
			printf("N�o foi dessa vez! Tente denovo! \n");
		
			if (palpite > dado)
			{
				printf("O seu palpite foi muito alto! \n");
				tentativa++;	
			}
			else 
			{
				printf("O seu palpite foi muito baixo! \n");
				tentativa++;
			}
			printf("Qual seu palpite ? \n");
			scanf("%d", &palpite);
			while (palpite <1 || palpite >100)
				{
					printf("Entre 1 e 100, por favor! \n");
					scanf("%d", &palpite);
				}	
			}

		}	
	}

