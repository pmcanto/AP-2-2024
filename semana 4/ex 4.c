#include <stdio.h>
#include <stdbool.h>

bool divisor(int N, int D) {
    if (N % D == 0){
        return true;
    }
    else{
        return false;
    }
}

int divisores(int N){
	int i, counter = 0;
	for (i = 1; i <= N +1; i++){
		if (N % i == 0 ) {
			counter +1;
		}
	}
	return counter
}

int main() {
    int N, D, contador;
    bool divide;
    printf("Qual � o numerador?\n");
    scanf("%d", &N);
    
    printf("Qual � o denominador?\n");
    scanf("%d", &D);
    
    divide = divisor(N,D);
        
    if (divide == true){
        printf("%d � dividido por %d\n", N, D);
        contador = divisores(N);
        printf(" A quantidade de divisores de %d � %d", N, contador);
    }
    else{
        printf("%d n�o � dividido por %d\n", N, D);
    }
    return 0;
}

