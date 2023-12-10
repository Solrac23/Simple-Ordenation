#include <stdio.h>
#include <stdlib.h>

int main()
{
  // Q3
  int num, candNum;
  int count = 1, candi1 = 0, candi2 = 0;
  
  while(count >= 0){
    printf("\n1 para comecar\n0 para sair: ");
    scanf("%d", &num);
    
    if(num == 0){
      count = -1;
      printf("\nResultado dos Votos:\n");
      printf("Candidato 1 recebeu um total de %d votos\nCandidato 2 recebeu um total de %d votos ", candi1, candi2);
    }
    if(num == 1){
      printf("\nDigite os numeros dos candidatos:\n1 - Candidato 1\n2 - Candidato 2\n");
      scanf("%d", &candNum);

      switch (candNum)
      {
      case 1:
        printf("Voce acabou de votar no Candidato 1!\n");
        candi1++;
        break;
      case 2:
        printf("Voce acabou de votar no Candidato 2!\n");
        candi2++;
        break;
      default:
        printf("Candidato nao encontrado!");
        continue;
      }
      
    }
  }
  return 0;
}
