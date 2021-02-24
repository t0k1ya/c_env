#include <stdio.h>

int main() {
  /* 整数と実数の計算結果は実数で表現される */
  printf("%f\n", 5 * 3.0);

  /* なので、整数の出力演算子を使うとエラー */
  /* printf("%d\n", 5 * 3.0); */

  /* 
   * 実数 -> 整数などの型変換(キャスト)
   * (変換したい型名)数値や変数名
   */
  int price = 2980;
  float tax_rate = 1.10;
  printf("%d\n", (int)(price * tax_rate));
  
  /* 桁指定: %{桁}d */
  printf("%5d\n", 4);
  printf("%5d\n", 100);
  printf("%5d\n", 77);

  /* 桁指定 + 空白を0で埋める: %0{桁}d */
  printf("%05d\n", 4);
  printf("%05d\n", 100);
  printf("%05d\n", 77);
}