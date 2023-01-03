// Sintese
//  objetivo "calcular a media"
//  entrada "2 numeros"
//  saida "media"

#include <stdio.h>

int main(void) {
  // Declarações
  int n1, n2;
  float media;
  // Instruções

  printf("Digite um numero: ");
  scanf("%d", &n1);
  printf("Digite um numero: ");
  scanf("%d", &n2);

  media = (n1 + n2) / 2;

  printf("A media de %d e %d = %f", n1, n2, media);

  return 0;
}
