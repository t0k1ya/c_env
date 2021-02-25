#include <stdio.h>

int main() {
  /* 
   * 変数のアドレスを調べるには %p指定子 を使う
   * &はアドレスを求める演算子
   */
  int i;
  printf("%p\n", &i);

  int arr[10];
  printf("arrのアドレス: %p\n", arr);

/*
 * 変数による代入は値のみの代入になる
 */
  int j = 5;
  int k = 7;
  printf("%p\n", &j);
  j = k;
  printf("%p\n", &j);

  /*
   * ポインタ変数を用いると、アドレスごと代入される
   * ポインタ変数には以下の2つのモードがある
   * ・通常変数モード: *変数名
   * ・ポインタ変数モード
   * 注意！ポインタ変数の宣言である"*"と変数モードを表す"*"は役割として全く別の記号
   */
  int *p=NULL, i2;
  p = &i2;
  *p = 7;
  printf("pに代入された値: %d\n", *p);
  printf("pに代入されたアドレス: %p\n", p);
  printf("pのアドレス: %p\n", &p);
  printf("i2に代入された値: %d\n", i2);
  printf("i2のアドレス: %p\n", &i2);

  /*
   * ポインタ変数を引数にとる関数
   */
  void func(int *pval);

  int value = 10;
  printf("valueのアドレス = %p\n", &value);
  printf("value = %d\n", value);
  /* valueのアドレスを渡す */
  func(&value);
  printf("value = %d\n", value);

  /*
   * 配列とポインタ
   * 配列を関数に渡す際は、そのアドレスを渡している
   */
  int edit_array_of(int i, int data[]);
  int avr, array[5] = {83, 12, 61, 40, 77};
  printf("array[4]: %d\n", array[4]);
  avr = edit_array_of(4, array);
  printf("array[4]: %d\n", array[4]);
}

void func(int *pval) {
  printf("pvalのアドレス = %p\n", pval);
  *pval = 100;
}

int edit_array_of(int i, int data[]) {
  return data[i] = 0;
}