#include <stdio.h>

int main(){
  int operation;
  float num1, num2;
  printf("---Lista de operacoes---\n");
  printf("1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n");
  printf("Escolha uma das operacoes acima: ");
  scanf("%i", &operation);
  printf("Escolha o primeiro numero da operacao:\n");
  scanf("%f", &num1);
  printf("Escolha o segundo numero da operacao:\n");
  scanf("%f", &num2);
  switch(operation){
    case 1:
      printf("Soma dos numeros: %.1f", num1+num2); 
      break;
    case 2: 
      printf("Subtracao: %.1f", num1-num2); 
      break;
    case 3: 
      printf("Multiplicacao: %.1f", num1*num2); 
      break;
    case 4: 
      printf("Divisao: %.1f", num1/num2); 
      break;
  }
  return 0;
}
