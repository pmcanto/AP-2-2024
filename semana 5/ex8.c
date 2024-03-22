#include <stdio.h>

void interseccao(int A[], int a, int B[], int b) {
  int n;
  if (a > b) {
      n = a;
  } else {
      n = b;
  }
  int C[n];
  printf("{");
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < b; j++) {
      if (A[i] == B[j]) {
        C[i] = B[j];
        printf("%d ", C[i]);
      }
    }
  }
  printf("}");
}

int main() {
  int a, b, n;
  printf("Quantos elementos vai ter o primeiro vetor ?: ");
  scanf("%d", &a);
  int A[a];
  for (int i = 0; i < a; i++) {
    printf("Qual vai ser o %d elemento ?: ", i + 1);
    scanf("%d", &n);
    A[i] = n;
  }

  printf("Quantos elementos vai ter o segundo vetor ?: ");
  scanf("%d", &b);
  int B[b];
  for (int i = 0; i < b; i++) {
    printf("Qual vai ser o %d elemento ?: ", i + 1);
    scanf("%d", &n);
    B[i] = n;
  }

  interseccao(A, a, B, b);
  return 0;
}
