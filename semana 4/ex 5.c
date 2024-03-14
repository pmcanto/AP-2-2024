#include <stdio.h>
#include <stdbool.h>

int primo(int num){
  int i, counter = 0;
  for (i = 1; i <= num; i++){
    if (num % i == 0 ) {
      counter += 1;
    }
  }
  if (counter == 2){
      return true;
  }
  else{
      return false;
  }
}

int main() {
    int num1, num2, i;
    bool is_primo;
    printf("Qual e o primeiro numero?\n");
    scanf("%d", &num1);
    printf("Qual e o segundo numero?\n");
    scanf("%d", &num2);

    for (i = num1; i <= num2; i++){
      is_primo = primo(i);
      if (is_primo == true){
          printf("%d\n", i);
      }
    }
    return 0;
}