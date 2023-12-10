#include <stdio.h>
#include <stdlib.h>

void seqImpares(){
  int i;
  for(i = 1; i < 30; i++){
    if(i % 2 == 1){
      printf("%d\n", i);
    }
  }
}

int main()
{
  // Q7
  seqImpares(100);

  return 0;
}
