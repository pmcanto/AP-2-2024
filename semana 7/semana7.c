#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>



void trocar(int v[], int i, int j) {
  int tmp = v[i];
  v[i] = v[j];
  v[j] = tmp;
}

void bubble_sort(int v[], int n) {
    int i, contador, contIteracoes=0;
    // repetir (n – 1) vezes
    for (contador = 1; contador <= n-1; contador++) {
        // percorrer o vetor
        for (i = 0; i < n-1-contador; i++) {
            contIteracoes++;
            // se elemento atual for maior que o próximo
            if (v[i] > v[i+1]) {
                // troca os elementos entre as 2 posições
                trocar(v, i, i+1);
              
            }
        }
    }
  printf("%d\n", contIteracoes);
}

void bubble_sort_sentinela_descrescente(int v[], int n) {

    int i, contador, contIteracoes=0;
    // repetir (n – 1) vezes
    for (contador = 0; contador <= n+1; contador++) {
        bool sentinela = false;
        // percorrer o vetor
        for (i = 0; i < n-1-contador; i++) {
            // se elemento atual for maior que o próximo
            contIteracoes++;
            if (v[i] < v[i+1]) {
                // troca os elementos entre as 2 posições
                trocar(v, i, i+1);
                sentinela = true;

            }
        }
        if (!sentinela) {
          printf("%d\n",contIteracoes);
          return;
        }
    }
  printf("%d\n",contIteracoes);
}

void bubble_sort_sentinela(int v[], int n) {
  
    int i, contador, contIteracoes=0;
    // repetir (n – 1) vezes
    for (contador = 1; contador <= n-1; contador++) {
        bool sentinela = false;
        // percorrer o vetor
        for (i = 0; i < n-1-contador; i++) {
            // se elemento atual for maior que o próximo
            contIteracoes++;
            if (v[i] > v[i+1]) {
                // troca os elementos entre as 2 posições
                trocar(v, i, i+1);
                sentinela = true;
              
            }
        }
        if (!sentinela) {
          printf("%d\n",contIteracoes);
          return;
        }
    }
  printf("%d\n",contIteracoes);
}

void selection_sort(int v[], int n) {
    int i, j, contIteracoes=0;
    // para cada posição do vetor (1º percurso)
    for (i = 0; i < n - 1; i++) {
        // inicializar o valor mínimo com o valor da posição atual
        int min = v[i];
        // percorrer cada uma das próximas posições do vetor (2º percurso)
        for (j = i + 1; j < n; j++) { 
            // se o elemento deste segundo percurso for menor que o mínimo
            contIteracoes++;
            if (v[j] < v[i]) { 
                // trocar os elementos entre as posições do 1º e 2º percursos
                trocar(v, i, j);
            }
        }
    }
  printf("%d\n",contIteracoes);
}

void insertion_sort(int v[], int n) {
    int i, contIteracoes=0;
    // para cada posição do vetor (1o percurso)
    for (i = 1; i < n; i++) {
      // guardar elemento
      int elemento = v[i];
      int j = i - 1;
      bool encontrou = false;
      // percorrer no sentido inverso enquanto não chegar ao início do vetor e não encontrar um menor
      while (j >= 0 && !encontrou) {
        contIteracoes++;
        // se o elemento do 2o. percurso for maior
        if (v[j] > elemento) {
          // deslocar elemento do 2o. percurso para a direita
          v[j+1] = v[j];
          // continuar procurando
          j--;
        }
        // se o elemento do 2o. percurso for menor encontramos a posição
        else encontrou = true;
      }
      // inserir elemento na posição encontrada
      v[j+1] = elemento;
    }
  printf("%d\n",contIteracoes);
}

void gerar_numeros(int v[], int n) {
  srand(time(NULL));
  int i;
  int a = rand() % 3 + 1;
  int b = rand() % 5 + 1;
  for (i = 0; i < n; i++) v[i] = i * a + b;
  for (i = 0; i < n; i++) {
    int j = rand() % n;
    trocar(v, i, j);
  }
}

int main(void) {
  int n = 20;
  int v[n];

  gerar_numeros(v, n);
 // for (int j = 0;j < n; j++) printf("%d ", v[j]);
  printf("\n");

  bubble_sort_sentinela_descrescente(v, n);
  //bubble_sort(v, n);
  //bubble_sort(v, n);
  //for (int j = 0;j < n; j++) printf("%d ", v[j]);
 // bubble_sort_sentinela(v, n);
  //bubble_sort_sentinela(v, n);
  //selection_sort(v, n);
  //selection_sort(v, n);
  insertion_sort(v, n);
  //insertion_sort(v, n);
}