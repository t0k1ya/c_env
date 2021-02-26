#include <stdio.h>
#include <string.h>

int main() {
  /*
   * [ 構造体 ]
   *  複数の異なる型をまとめて作られた型のこと
   */

  /* Tom構造体 */
  struct tom {
    int age;
    int height;
    char name[64];
  };
  /* 構造体タグの変数を宣言: struct 構造体の型名 変数名 */
  struct tom data;
  data.age = 24;
  strcpy(data.name, "Tom");
  printf("%d\n", data.age);
  printf("%s\n", data.name);

  /* より簡潔な方法: typedefを使う */
  typedef struct {
    int year;
    int clas;
    int name[64];
    double height;
  } student;


}