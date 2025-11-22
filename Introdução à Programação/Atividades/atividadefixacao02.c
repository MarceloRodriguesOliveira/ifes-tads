#include <stdio.h>

int main(){
  float base, altura, area;
  printf("Digite a base do retangulo:\n");
  scanf("%f", &base);
  printf("Digite a altura do retangulo:\n");
  scanf("%f", &altura);
  area = base * altura;
  printf("Area da figura: %.1f\n", area);

  if(base == altura){
    printf("Quadrado");
  }else {
    printf("Retangulo");
  }
  
  return 0;
}
