#include <stdio.h>

int main() {
  /* 変数を宣言、そして初期化 */
  int a;
  a = 5;
  printf("%d\n", a);

  /* 宣言と初期化を同時に */
  int b = 5;
  printf("%d\n", b);

  /* まとめて宣言 */
  int c, d;
  c = 7;
  d = 8;
  printf("%d\n", c);
  printf("%d\n", d);

  /* １行で宣言＋初期化*/
  int e = 5, f = 7;
  /* int e, f = 5, 7; これはできない */
}