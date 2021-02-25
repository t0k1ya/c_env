#include <stdio.h>

void getMaxnMin(int input_holder[], int *min, int *max);
int main() {
  /*
   * ポインタ演算
   */
  int *data, i, avr = 0, arr[5] = {1, 2, 3, 4, 5};

  data = arr; /* ポインタ変数に配列のアドレスを代入 */
  
  for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
    avr += *(data + i); /* ポインタ演算( avr += data[i]; と同じ ) */
  }
  printf("%d\n", avr / (sizeof(arr)/sizeof(arr[0])));

  /*
   * このようにも書ける
   * for (data = arr; data != &arr[5]; data++) {
   *   avr += *data;
   * } 
   * data = arrで、arrのアドレスをdata(ポインタ変数)に代入
   * data != &arr[5]で、arr[5]のアドレスとdataが一致するまでループ
   * data++で、data(アドレス = ポインタ)にその型のサイズ分加算
  */


  /*
   * 問題:
   * 0 ~ 100の範囲の整数を複数個受け取り、最小と最大の値を返す
   * -1の入力で入力受け待ち終了
   */
  int input, input_holder[10], j = 0;
  int min = 0, max = 0;
  do {
    printf("[ 0 ~ 100の範囲で数字を入力してください ]\n");
    scanf("%d", &input);
    if (input < -1) break;
    input_holder[j] = input;
    j++;
  } while (input != -1);

 getMaxnMin(input_holder, &min, &max);
 printf("最大値は%d, 最小値は%d\n", min, max);

}

void getMaxnMin(int input_holder[], int *min, int *max) {
  int i;
  int need_reverse;
  do {
    need_reverse = 0;
    for (i = 0; i < 10; i++) {
      /* i番目の要素がi+1番目の要素より大きかった場合、入れ替える */
      int this_i = input_holder[i];
      int next_i = input_holder[i+1];
      if (this_i > next_i) {
        input_holder[i] = next_i;
        input_holder[i+1] = this_i;
        need_reverse = 1;
      }
    }
  } while(need_reverse != 0);
  *min = input_holder[0];
  *max = input_holder[9];
}