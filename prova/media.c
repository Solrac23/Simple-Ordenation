#include <stdio.h>
#include <stdlib.h>

float medea(int num1, int num2, int num3, int num4, int num5){
  float result = (num1 + num2 + num3 + num4 + num5) / 5;
  return result;
}

int main()
{
  
  // Q1
  printf("%.2f\n", medea(5, 5, 5, 5, 5));

  return 0;
}
