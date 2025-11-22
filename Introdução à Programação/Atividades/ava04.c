#include <stdio.h>

int main(){
  float produto_price; 
  float soma = 0;
  scanf("%f", &produto_price);
  while(produto_price != 0){
    if(produto_price > 0){
      soma += produto_price;
    }
    scanf("%f", &produto_price);
  }
  printf("%.2f", soma);

  return 0;
}
