// 1つの数値の平方根を計算する単純なプログラム
#include <stdio.h>
#include <stdlib.h>

#include "func1.h"
#include "func2.h"


int main (int argc, char *argv[])
{
  if (argc < 3)
    {
    fprintf(stdout,"Usage: %s x y\n",argv[0]);
    return 1;
    }
  double x = atof(argv[1]);
  double y = atof(argv[2]);

  printf("(%f, %f)までのユークリッド距離は%f．\n", x, y, calcEuclideanDistance(x,y));
  printf("(%f, %f)までのマンハッタン距離は%f．\n", x, y, calcManhattanDistance(x,y));

  return 0;
}