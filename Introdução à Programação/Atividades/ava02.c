#include <stdio.h>

int main(){
  float a, b, c;

  printf("Digite o lado A do triangulo:\n");
  scanf("%f", &a);
  printf("Digite o lado B do triangulo:\n");
  scanf("%f", &b);
  printf("Digite o lado C do triangulo:\n");
  scanf("%f", &c);

  if(a < (b+c) && b < (a+c) && c < (a+b)){
    printf("SIM");
  }else{
    printf("NAO");
  }


  return 0;
}
