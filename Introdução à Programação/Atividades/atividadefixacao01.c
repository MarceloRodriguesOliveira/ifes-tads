#include <stdio.h>

int main(){
  int base, altura, area;
  printf("Digite a base e a altura do retangulo:\n");
  scanf("%d", &base);
  scanf("%d", &altura);
  area = base * altura;
  printf("Area do retangulo: %d", area);

  return 0;
}
