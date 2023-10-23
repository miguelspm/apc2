// Faça um programa em C que leia o peso e a altura de uma pessoa e calcule o índice de massa corporal (imc = peso / altura²).

#include <stdio.h>

int main() {
 float peso = 0.0f
 float altura = 0.0f

  printf("Entre com o peso (kg): ");
  int leu_certo = scanf("%f", &peso);

  while(peso <= 0) {
  getchar();
    scanf("%f", &peso);
  }
  printf("Entre com a altura (m): ");
  int leu_certo = scanf("%f", &altura);

  while(altura <= 0) {   
    getchar();
    scanf("%f", &altura);
  }
  float imc = peso / (altura * altura);
  printf("IMC: %.2f\n", imc);

  return 0;
  
  return 0;
  }