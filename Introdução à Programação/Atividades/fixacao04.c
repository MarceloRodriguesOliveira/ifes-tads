#include <stdio.h>

int main(){
  int weekday;
  printf("Digite um numero inteiro:\n");
  scanf("%i", &weekday);
  switch (weekday) {
    case 1: 
      printf("Domingo"); 
      break;
    case 2: 
      printf("Segunda"); 
      break;
    case 3: 
      printf("Terca"); 
      break;
    case 4: 
      printf("Quarta"); 
      break;
    case 5: 
      printf("Quinta"); 
      break;
    case 6: 
      printf("Sexta"); 
      break;
    case 7: 
      printf("Sabado"); 
      break;
    default:
      printf("Dia incorreto");
      break;
  }

  return 0 ;
}
