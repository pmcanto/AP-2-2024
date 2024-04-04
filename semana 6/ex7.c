#include <stdio.h>

void gravar_matriz(int n, int m, int A[n][m]){
  for (int i = 0; i<n; i++ ){
    for (int j = 0; j<m; j++ ){
      printf("Qual o valor da linha %d e coluna %d?\n", i, j);
      scanf("%d", &A[i][j]);
    }
  }
}

void multiplicar_matriz(int n, int m, int p, int A[n][m], int B[m][p], int C[n][p]){
  for (int i = 0; i < n; i++ ){
    for (int j = 0; j < p; j++ ){
      C[i][j] = 0;
      for (int k = 0; k < m; k++){
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }
}

int main() {
  int n, m, p;
  printf("O valor de n será qual?\n");
  scanf("%d", &n);
  printf("O valor de m será qual?\n");
  scanf("%d", &m);
  printf("O valor de p será qual?\n");
  scanf("%d", &p);

  int mat_a[n][m], mat_b[m][p], mat_c[n][p];

  gravar_matriz(n, m, mat_a);
  gravar_matriz(m, p, mat_b);

  multiplicar_matriz(n, m, p, mat_a, mat_b, mat_c);

  // Imprimir a matriz resultante
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < p; j++) {
      printf("%d ", mat_c[i][j]);
    }
    printf("\n");
  }

  return 0; 
}
