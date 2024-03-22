#include <stdbool.h>
#include <stdio.h>

int busca_ultimo(int v[], int n, int e) {
  int indice = -1;
  for (int i = 0; i < n; i++) {
    if (v[i] == e){
      indice = i;
    }
  }
  return indice;

}

int main() {
  int v[] = {4, 9, 10, 8, 4};
  int n = 5, e, achou;
  printf("Qual número voce deseja ver se contém ?: \n");
  scanf("%d", &e);

  achou = busca_ultimo(v, n, e);
  if (achou >= 0){
    printf("Achou! %d\n", achou);
  }
  else {
    printf("Não Achou!");
  }

  return 0;
}
