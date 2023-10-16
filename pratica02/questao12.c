/*
Escrever um programa em C que liste os 10 primeiros numeros da sequencia de Fibonacci.
1 1 2 3 5 8 13 21 34 55
*/

#include <stdio.h>

int main() {
  int anterior = 1;
  int proxi = 1;

  printf("%i, %i, ", anterior, proximo);

  for(int i = 0; i < 8; i++) {
    int auxiliar = anterior + proximo;

    printf("%i, ", auxiliar);
    anterior = proximo;
    proximo = auxiliar;
  }  

  print("\n");
  
  return 0;
}
  