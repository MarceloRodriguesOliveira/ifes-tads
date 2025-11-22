#include <stdio.h>

int main(){
  int vagaTotal, entradaCarro, saidaCarro, vagaDisponivel;
  printf("Digite o total de vagas:\n");
  scanf("%d", &vagaTotal);
  printf("Digite a quantidade de carros que entraram no estacionamento:\n");
  scanf("%d", &entradaCarro);
  printf("Digite a quantidade de carros que sairam do estacionamento:\n");
  scanf("%d", &saidaCarro);
  vagaDisponivel = vagaTotal - entradaCarro + saidaCarro;

  printf("Existem %d vagas disponiveis no estacionamento", vagaDisponivel);

  return 0;
}
