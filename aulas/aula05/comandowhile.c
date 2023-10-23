#include <stdio.h>

int main() {
  int numero = 0;

  printf("Entre com um numero entre 1 e 10:");
  int leu_certo = scanf("%i", &numero);

  while(numero < 1 || numero > 10) {
    printf("Erro ao ler numero. Tente novamente: ");
    leu_certo = scanf("%i", &numero);
    getchar();
  }  

  int i = 0;
  while(i < 10) {
    print("%i x %i = %i\n", numero, i + 1, numero * (i+1));
    i++;