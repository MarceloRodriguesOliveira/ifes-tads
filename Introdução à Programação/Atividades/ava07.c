#include <stdio.h>

int main(){
  int disciplinas;
  float soma_notas = 0.0;
  float soma_ch = 0.0;

  scanf("%d", &disciplinas);

  for (int i = 0; i < disciplinas; i++) {
      float nd, ch;
      scanf("%f %f", &nd, &ch);
      soma_notas += nd * ch;  // acumula nota ponderada
      soma_ch += ch;          // acumula carga horária total
    }

  float cr = soma_notas / soma_ch;

  printf("%.2f\n", cr);
    return 0;
}
