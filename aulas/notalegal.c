#include <stdio.h> // funções scanf e printf

int main() {
  char item1[61];
  int quantidade;
  float valor1;

  char item2[61];
  int quantidade;
  float valor2;

  char item3[61];
  int quantidade;
  float valor3;

 printf("Entre com o nome do item 1: ");
 scanf("%s", item1);
 printf("Entre com a qtde do item 1: ");
 scanf("i", &quantidade1); 
 printf("Entre com o valor do item 1 ");
 scanf("%f", &valor1);
  
 printf("----------------------\n");
 printf("     NOTA LEGAL       \n");
 printf("----------------------\n");
 printf("%-14.14s %3i %10.2f\n", item, quantidade, valor);
 printf("Lapis     005     1,00\n");
 printf("Borracha  010     5,00\n");
 printf("----------------------\n");
 printf("total            83,00\n");
 printf("----------------------\n");

  return 0;
}