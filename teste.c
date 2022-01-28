#include <stdio.h>

int main(void) {
  int val1, val2, soma;
  printf("Informe o primeiro valor");
  scanf("%d", &val1);
  printf("Informe o segundo valor");
  scanf("%d", &val2);

  soma = val1 + val2;

  printf("A soma é: %d", soma);

  return 0;
};