#include <stdio.h>

int main(){
  int a, b, c, aux, maxSize = 3;
  printf("Digite um numero inteiro:\n");
  scanf("%i", &a);
  printf("Digite um numero inteiro:\n");
  scanf("%i", &b);
  printf("Digite um numero inteiro:\n");
  scanf("%i", &c);
  int arr [] = {a,b,c};
  for (int i = 0; i < maxSize; i++) {
    for(int j = 0;  j < maxSize - i - 1; j++)
      if(arr[j] >= arr[j+1] ){
        int aux = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = aux;
      }
  }

  printf("Numeros ordenados: ");

  for (int k = 0; k < maxSize; k++) {
    printf(" %i", arr[k]);
  }

  return 0;
}
