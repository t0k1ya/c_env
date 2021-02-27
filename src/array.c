#include <stdio.h>
#include <string.h>

int main() {
  /* 初期化 */
  int arr[] = { 1, 2, 3 };
  /* intは4バイト(32ビット) */
  printf("intは%dバイト\n", sizeof(int));
  printf("arrのアドレス: %p\n", arr);
  printf("arrのアドレス: %p\n", &arr[0]);
  printf("arrのアドレス: %p\n", &arr[1]);
  /* 
   * sizeof()は配列、変数のサイズを取得できる
   * なので、int型配列の要素数を求めるには以下のようにする
   */
  printf("要素数は%d\n", sizeof(arr) / sizeof(arr[0]));

  /* 要素を全て表示 */
  for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
    printf("%d\n", arr[i]);
  }

  /* 配列のコピーには memcpy関数 を使う */
  int arr2[] = {1, 2, 3, 4};
  int arr3[] = {5, 6, 7, 8, 9};
  printf("arr2をarr3にコピーします\n");
  memcpy(arr3, arr2, sizeof(arr2));
  for (int i = 0; i < sizeof(arr3)/sizeof(arr3[0]); i++) {
    printf("%d\n", arr3[i]);
  }
}