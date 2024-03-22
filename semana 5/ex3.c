#include <stdbool.h>
#include <stdio.h>

bool contem(int v[], int n, int e) {

  for (int i = 0; i < n; i++) {
    if (v[i] == e){
      return true;
    }
  }
  return false;

}

int main() {
  int v[] = {4, 9, 10, 8, 6};
  int n = 5, e;
  bool achou;
  printf("Qual número voce deseja ver se contém ?: \n");
  scanf("%d", &e);

  achou = contem(v, n, e);
  if (achou == true){
    printf("Achou!\n");
  }
  else {
    printf("Não Achou!\n");
  }

  return 0;
}
