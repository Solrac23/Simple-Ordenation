#include <stdio.h>
#include <stdlib.h>

void seqPares(int size){
  int i;
  for(i = 1; i < size; i++){
    if(i % 2 == 0){
      printf("%d\n", i);
    }
  }
}

int main()
{
  // Q6
  seqPares(100);

  return 0;
}
