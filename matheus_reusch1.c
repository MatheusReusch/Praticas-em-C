// Nome: Matheus Reusch
// Calcula a quantidade de lâmpadas necessárias para iluminar a sala

#include <stdio.h>

int main() {

  // declaracao de variaveis

  float largura,comprimento, area, pot, lampadas;

  // leitura das entradas (largura, comprimento e potencia das lampadas);

  printf("Entre com a largura e o comprimento do quarto: ");

  scanf("%f %f", &largura, &comprimento);

  printf("Entre com a potencia das lampadas: ");

  scanf("%f", &pot);

  // calculo da area

  area = largura * comprimento;

  int minimoNecessario = 16;

  // calcula quantidade de lampadas

  lampadas = (area * minimoNecessario) / pot;

  // impressão do resultado final

  printf("Numero de lampadas: %.0f", lampadas);

  return 0;
}
