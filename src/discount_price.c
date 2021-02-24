#include <stdio.h>

int getDiscount(int price, int i) {
  return (int)price * (1 - i * 0.1);
}

int main() {
  /*
   * 入力の定価から1, 3, 5割引する
   */
  int price;
  scanf("%d", &price);

  printf("1割引: %d\t3割引: %d\t5割引: %d\n", getDiscount(price, 1), getDiscount(price, 3), getDiscount(price, 5));
}