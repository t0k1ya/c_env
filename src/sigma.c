#include <stdio.h>

int main() {
  int min, max, sum;

  scanf("%d,%d", &min, &max);

  sum = (min + max) * (max - min + 1) / 2;

  printf("%d~%dの合計は%d\n", min, max, sum);
}