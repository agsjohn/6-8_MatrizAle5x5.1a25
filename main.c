#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 5

main(){
  int l, c, m[TAM][TAM], sl = 0, sc = 0, dp = 0, ds = 0, total = 0, cont = 0;
  srand(time(NULL));
  for(l = 0; l < TAM; l++){
    for(c = 0; c < TAM; c++){
      cont++;
      total = total + cont;
      m[l][c] = cont;
    }
  }
  for(c = 0; c < TAM; c++){
    sl = sl + m[3][c];
    dp = dp + m[c][c];
  }
  cont = 5;
  for(l = 0; l < TAM; l++){
    cont--;
    sc = sc + m[l][1];
    ds = ds + m[l][cont];
  }
  printf("Matriz: \n");
  for(l = 0; l < TAM; l++){
    for(c = 0; c < TAM; c++){
      if(c < TAM - 1){
        printf("%i - ", m[l][c]);
      }
      else{
        printf("%i\n", m[l][c]);
      }
    }
  }
  printf("\nSoma dos elementos da linha 4: %i", sl);
  printf("\nSoma dos elementos da coluna 2: %i", sc);
  printf("\nSoma dos elementos da diagonal principal: %i", dp);
  printf("\nSoma dos elementos da diagonal secundária: %i", ds);
  printf("\nSoma de todos os elementos da matriz: %i", total);
  getchar();
}