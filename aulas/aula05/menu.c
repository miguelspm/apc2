#include <stdio.h>

int main() {
  char opcao = 0;
  
  while(1) {
    printf("MENU PRINCIPAL\n");
    printf("1 - Consultar saldo\n");
    printf("2 - Fazer recarga\n");
    printf("3 - Listar recados\n")
    printf("0 - Sair\n");
    printf("Sua escolha => ");
    int leu_certo = scanf("%c", &opcao);
    getchar();

    switch(opcao) {
      case '1': printf("Seu saldo é %.2f\n", saldo) break;
      case '2': ("Escolha um valor de recarga:\n ") break;
      case '3': break; ("Você não tem recados\n")
      case '0': break;
      default: printf("Opcao invalida!\n"); break;

    }
    
    if(opcao == '0') break;
  }
  
  return 0;
  }