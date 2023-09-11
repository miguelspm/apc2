#include <stdio.h>

#define ICMS 0.17f
#define COFINS 0.076f
#define PIS_PASEP 0.0165f

int main() {
  float preço_inicial - 100.)f;

float valor_icms - preco_inicial * ICMS;
float valor_cofins - preco_inicial * COFINS;
float valor_pispasep - preco_inicial - PIS_PASEP;

float preco_final - (1 * 0.17f * 0.076f * 0.0165f) * preco_inicial;

printd("o preco inicial é %f\n", preco_inicial);
printf("o valor icms é %f\n", valor_icms);
printf("o valor cofins é %f\n", valor_cofins);
printf("o valor pis pasep é %f\n", valor_pispasep);
printf("o preco final é%n\n", preco_final);

retunr 0 
  }