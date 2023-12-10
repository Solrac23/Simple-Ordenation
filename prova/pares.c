#include <stdio.h>
#include <stdlib.h>

int main()
{
  // Q4
  int numero, pares = 0;

  for (int i = 1; i < 6; i++)
  {
    printf("\nDigite o %d número: ", i);
    scanf("%d", &numero);

    if (numero % 2 == 0){
      printf("\n%d e par!\n", numero);
      pares++;
    }else{
      printf("\n%d nao e par!\n", numero);
    }
  }

  printf("\nResultados:\n");
  printf("Números pares: %d\n", pares);

  return 0;
}