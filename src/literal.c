#include <stdio.h>

int main() {
  /* 文字列 */
  printf("hello world\n");

  /**
   *  数値
   *  printfは文字列を出力する関数なので、
   *  出力変換指定子(%d)を第一引数に渡し、
   *  第二引数に数値を渡す。
   */
  printf("%d\n", 1234);
  printf("%d歳\n", 5);
  printf("%d+%d=%d\n", 10, 10, 10+10);

  /* 四則演算 */
  printf("%d\n", 1+1);
  printf("%d\n", 1-1);
  printf("%d\n", 1*1);
  printf("%d\n", 1/1);
  printf("%d\n", 1%1);

  /*
   * 整数の種類と表現方法
   * 10進数: 数字
   * 8進数: 0+数字
   * 16進数: 0x+数字
   */
  printf("10進数の%dは８進数で013と表す\n", 013);
  printf("10進数の%dは16進数で0xBと表す\n", 0xB);
  /* printf("%d", 089); 8進数に9はないのでエラー */

  /* 浮動小数点を含む数字(=実数)の出力には%fを使う */
  printf("%f\n", 0.4);

  printf("40%13=%d, 余り%d\n", 40/13, 40%13);
}