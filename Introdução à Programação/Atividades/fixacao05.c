#include <stdio.h>

int main(){
  int senha, tentativa;
  printf("Cadastre uma nova senha:\n");
  scanf("%d", &senha);

  do {
    printf("Digite a senha:\n");
    scanf("%d", &tentativa);
    if(senha!=tentativa){
      printf("ERRO\n");
    }

  } while (tentativa != senha);

  printf("Acesso Liberado");

}
