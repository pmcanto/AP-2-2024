#include <stdbool.h>
#include <stdio.h>

int busca_primeiro(int v[], int n, int e) {

  for (int i = 0; i < n; i++) {
    if (v[i] == e){
      return i;
    }
  }
  return -1;

}

int main() {
  int v[] = {4, 9, 10, 8, 6};
  int n = 5, e, achou;
  printf("Qual número voce deseja ver se contém ?: \n");
  scanf("%d", &e);

  achou = busca_primeiro(v, n, e);
  if (achou >= 0){
    printf("Achou! %d\n", achou);
  }
  else {
    printf("Não Achou!");
  }

  return 0;
}
