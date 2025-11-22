#include <stdio.h>

float sum(float num1, float num2)
{
  return num1 + num2;
}

float sub(float num1, float num2)
{
  return (num1 - num2);
}

float mult(float num1, float num2)
{
  return (num1 * num2);
}

float div(float num1, float num2)
{
  return (num1 / num2);
}

int main()
{
  float num1, num2;
  printf("Escolha um numero: ");
  scanf("%f", &num1);
  printf("Escolha outro numero: ");
  scanf("%f", &num2);
  printf("soma: %.2f\n", sum(num1, num2));
  printf("Sub: %.2f\n", sub(num1, num2));
  printf("mult: %.2f\n", mult(num1, num2));
  printf("div: %.2f\n", div(num1, num2));

  return 0;
}
