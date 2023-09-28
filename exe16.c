#include <stdio.h>

int hanoi(int n, char origem, char auxiliar, char destino) {
  if (n == 1) {
    printf("Mova o disco 1 de %c para %c\n", origem, destino);
    return 1;
  }

  int soma = hanoi(n - 1, origem, destino, auxiliar);
  printf("Mova o disco %d de %c para %c\n", n, origem, destino);
  soma++;
  return hanoi(n - 1, auxiliar, origem, destino) + soma;
}

int main(void) {
  int n = 3;
  printf("\nA quantidade de movimentos e de: %d", hanoi(n, 'A', 'B', 'C'));
  return 0;
}