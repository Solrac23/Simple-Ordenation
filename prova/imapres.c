#include <stdio.h>
#include <stdlib.h>

int main()
{
  // Q5
  int numero, impa = 0;

  for (int i = 1; i < 6; i++)
  {
    printf("\nDigite o %d número: ", i);
    scanf("%d", &numero);

    if (numero % 2 == 1){
      printf("\n%d e impa!\n", numero);
      impa++;
    }else{
      printf("\n%d nao e impa!\n", numero);
    }
  }

  printf("\nResultados:\n");
  printf("Números impares: %d\n", impa);

  return 0;
}