#include <stdio.h>

int factorial(int n){
  if(n == 1){
    return 1;
  }

  return n * (n-1);
}

int main(){
  int treeSize = 5;
  for (int i=0; i<treeSize; i++) {
    for (int spaces = 0; spaces < treeSize - i - 1; spaces++) {
      printf(" ");
    }
    for (int j=0; j<=i; j++) {
      printf("*");
      printf(" ");
    }
    printf("\n");

  }

  return 0;
}
