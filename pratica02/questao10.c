/*
Faça um programa em C que calcule o fatorial de um numero inteiro.
n! = n * 1 n-1 * 2 n-2 * 3 ... 2 * 1
*/

#include <stdio.h>

int main() {
  int numero = 0;
  int fatorial = 1;

  printf("Entre com um numero inteiro: ");
  int leu_certo = scanf("%i", &numero);

  for(int i = numero; i > 0; i--) {
    fatorial = fatorial * i;

  }
  