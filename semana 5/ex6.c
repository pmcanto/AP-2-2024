#include <stdbool.h>
#include <stdio.h>

int qnts_vezes(int v[], int n, int e) {
  int qnt = 0;
  for (int i = 0; i < n; i++) {
    if (v[i] == e){
      qnt += 1;
    }
  }
  return qnt;

}

int main() {
  int v[] = {4, 9, 10, 8, 4};
  int n = 5, e, achou;
  printf("Qual número voce deseja ver se contém ?: \n");
  scanf("%d", &e);

  achou = qnts_vezes(v, n, e);
  if (achou > 0){
    printf("Achou %d vezes\n", achou);
  }
  else {
    printf("Não Achou!");
  }

  return 0;
}
