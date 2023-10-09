#include <stdio.h>

int main(){
  int nota = 0;
  int deu_certo = 0;
  
  printf("Entre com uma nota entre 1 e 5:");
  deu_certo = scanf("%i," &nota);

  // if (nota == 1) {
  // printf("Ruim\n");
  // } else if (nota == 2) {
  //   printf("Insuficiente\n"); 
  // } else if (nota == 3){
  //   printf("Suficiente\n");
  // }else if (nota == 4){
  //   printf("Bom\n")
  // }else if (nota == 5){
  //   printf("Otimo\n");
  // } else {
  //   printf("Nota invalida\n");
  // }

  switch(nota) {
    case 0:
    case 1: printf("Ruim\n"); break;
    case 2: printf("Insuficiente\n"); break;
    case 3: printf("Suficiente"\n); break;
    case 4: printf("Bom\n"); break;
    case 5: prinf("Otimo\n"); break;
    default: printf("Nota invalida\n"); break;
    }
    
} else {
      printf("Por favor entre com um numero inteiro. Tente novamente!\n");
    }

     return 0;
    }

#include <stdio.h>
int main () {
  char tecla = 0;

  printf("Pressione uma tecla: ");
  scanf("%c", tecla);

  if (tecla >= 48 && tecla <=57) {
    printf("Você pressionou um digito.\n");
  }else if ((tecla >= 65 && tecla <=90) || (tecla>=97 && tecla<=122)) {
    printf("Você pressionou uma letra.\n");
  }else{
    printf("Você pressionou um caracter especial.\n");
  }

  // switch(tecla) {
  //   case 48;
  //   case 49;
  //   case 50;
  //   case 51;
  //   case 52;
  //   case 53;
  //   case 54;
  //   case 55;
  //   case 56;
  //   case 57; printf("Você pressionou um digito. \n"); break;
    
  // }
  
  return 0;
      

    