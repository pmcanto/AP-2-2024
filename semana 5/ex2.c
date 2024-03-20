#include <stdbool.h>
#include <stdio.h>

void inverter(int v[], int n) {
  int array[5] = {0,0,0,0,0} ;

  for (int i = 0; i < n; i++) {
    array[(n - i - 1)] = v[i];
  }

  for (int i = 0; i < n; i++) {
    printf("%d\n", array[i]);
  }
}

int main() {
  int v[] = {4, 9, 10, 8, 6};
  int n = 5;

  inverter(v, n);

  return 0;
}
