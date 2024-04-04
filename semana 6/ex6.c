#include <stdio.h>

void gravar_matriz(int linhas, int colunas, int m[linhas][colunas]) {
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      printf("Qual o valor da linha %d e coluna %d?\n", i, j);
      scanf("%d", &m[i][j]);
    }
  }
}

void somar_matriz(int linhas, int colunas, int m[linhas][colunas],
                  int m2[linhas][colunas], int m3[linhas][colunas]) {
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      m3[i][j] = m[i][j] + m2[i][j];
      printf("%d ", m3[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int linhas, colunas;
  printf("Quantas Linhas vai ter suas matrizes?\n");
  scanf("%d", &linhas);
  printf("Quantas Colunas vai ter suas matrizes?\n");
  scanf("%d", &colunas);

  int mat_a[linhas][colunas], mat_b[linhas][colunas], mat_c[linhas][colunas];

  gravar_matriz(linhas, colunas, mat_a);
  gravar_matriz(linhas, colunas, mat_b);

  somar_matriz(linhas, colunas, mat_a, mat_b, mat_c);

  return 0;
}
