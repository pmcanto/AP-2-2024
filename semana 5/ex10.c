#include <stdio.h>
#include <stdbool.h>

void uniao(int A[], int a, int B[], int b) {
  int C[a + b];
  int c = 0;

  for (int i = 0; i < a; i++) {
    C[c] = A[i];
    c++;
  }

  for (int i = 0; i < b; i++) {
    bool found = false;
    for (int j = 0; j < a; j++) {
      if (B[i] == A[j]) {
        found = true;
        break;
      }
    }
    if (!found) {
      C[c] = B[i];
      c++;
    }
  }

  printf("{");
  for (int i = 0; i < c; i++) {
    printf("%d ", C[i]);
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

  uniao(A, a, B, b);
  return 0;
}
