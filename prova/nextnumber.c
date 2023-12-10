#include <stdio.h>
#include <stdlib.h>

int main()
{
  //Q10
  int numero;
  int count = 1;
  while (count >= 0)
  {
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if(numero > 0){
      int next = numero + 1;
      printf("O numero %d e proximo do numero: %d\n", numero, next);
    }else if(numero < 0){
      count = -1;
    }
  }
  
  
  return 0;
}