#include <stdio.h>

int main() {
  /* 
   * キーボードからの入力は scanf関数 を使う
   */
  
  /* 数値を受け付ける */
  int input;
  scanf("%d", &input);
  printf("%d\n", input);

  int input2, input3;
  scanf("%d%d", &input2, &input3);
  printf("%d, %d\n", input2, input3);
}

