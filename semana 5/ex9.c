#include <stdio.h>
#include <stdbool.h>

void diferenca(int A[], int a, int B[], int b) {
  printf("{");
  for (int i = 0; i < a; i++) {
    bool found = false;
    for (int j = 0; j < b; j++) {
      if (A[i] == B[j]) {
        found = true;
        break;
      }
    }
    if (!found) {
      printf("%d,", A[i]);
    }
  }
  printf("}\n");
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

  diferenca(A, a, B, b);
  return 0;
}
