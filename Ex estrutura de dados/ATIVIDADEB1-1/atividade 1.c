#include <stdio.h>

int main(void) {
  int i, a, t, numeroInteiros[5];

  printf("Entre com os numeros \n");
  for(i=0;i<5;i++){
    scanf("%d", &numeroInteiros[i]);
  }    

  for(i=0;i<5;i++){
    for(t=i+1;t<5; t++){

      if(numeroInteiros[i]>numeroInteiros[t]){
        a = numeroInteiros[i];
        numeroInteiros[i] = numeroInteiros[t];
        numeroInteiros[t] = a;
      }
  }
}

  for(i=0;i<5;i++){
    printf(" %d", numeroInteiros[i]);
  }
  return 0;
  }