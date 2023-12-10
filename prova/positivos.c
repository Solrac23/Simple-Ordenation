#include <stdio.h>
#include <stdlib.h>

int main()
{

  int numero, positivo = 0, negativo = 0, neutros = 0;
  for (int i = 1; i < 6; i++)
  {
    printf("Digite o %d número: ", i);
    scanf("%d", &numero);

    if(numero > 0) {
      positivo++;
    }else if (numero < 0)
    {
      negativo++;
    }else{
      neutros++;
    }

  }

  // Q2
  printf("\nResultados:\n");
  printf("Números positivos: %d\n", positivo);
  printf("Números negativos: %d\n", negativo);
  printf("Números neutros: %d\n", neutros);
  
  return 0;
}
