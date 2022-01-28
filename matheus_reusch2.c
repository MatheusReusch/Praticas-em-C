// Nome: Matheus Reusch
// Calcula o montante final a partir de uma quantia inicial, uma taxa de juros e um tempo em dias.

#include <stdio.h>
#include <math.h>

int main() {

  // declaracao de variaveis

  int percentual, meses;
  float quantiaInicial, montante, dias;

  // leitura das entradas (quantia inicial, juros, dias);

  printf("Entre com a quantia inicial: ");

  scanf("%f", &quantiaInicial);

  printf("Entre com o percentual: ");

  scanf("%d", &percentual);

  printf("Entre com o numero de dias: ");

  scanf("%f", &dias);

  // calculo da quantidade de meses e do montante final

  meses = dias / 30;

  montante = quantiaInicial * pow(( 1 + percentual / 100.0 ), meses);

  // impress�o do resultado final

  printf("Montante final: R$%.2f", montante);

  return 0;
}
