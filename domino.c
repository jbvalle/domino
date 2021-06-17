#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[]) {
/*
  0      (+1, 0)   x
  (0,-1)   ptr  (0,+1)
  x      (-1, 0)   x
*/
  int x, y;
  int zeile = 1;
  int spalte = 0;

  int dir[4][2] = {
    {1,0},
    {0,1},
    {-1,0},
    {0,-1}
  };

  scanf(" %d", &x);
  scanf( "%d", &y);

  int *board = (int *) malloc(x * y * sizeof(int));

  int z = x*y;
  *(board) = 0;

  //Pointer Init
  for (size_t a = 0; a < x; a++) {
    for (size_t b = 0; b < y; b++) {
      *(board + a*y + b) = 0;
      printf("%d ", *(board + a*y + b));
    }
    printf("\n");
  }


  return 0;
}
