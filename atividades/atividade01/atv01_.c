#include <stdio.h>

int main(void) {

int x = 10;
printf("O teste trata-se da pontuação de um jogador de sinuca.\n");
  printf("o resultado é de %d\n", x);
  if (x >= 0 && x <= 9)
  printf("Insulficiente");
else
if (x >= 10 && x <= 39)
  printf("Regular");
  else
    if (x >= 40 && x <= 69)
  printf("Bom");
  else
  if (x >= 70 && x <= 89)
    printf("Otimo");
  else
    if (x >= 90 && x <= 100)
  printf("Excelente");
return 0;
}