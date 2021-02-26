#include <stdio.h>
#include <string.h>

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

/* より簡潔な方法: typedefを使う */
  typedef struct {
    int year;
    int clas;
    int name[64];
    int age;
    double height;
  } student;

void give_value(student data);

int main() {
  /* 構造体タグの変数を宣言: struct 構造体の型名 変数名 */
  struct tom t;
  t.age = 24;
  strcpy(t.name, "Tom");
  printf("%d\n", t.age);
  printf("%s\n", t.name);

  student data;
  give_value(data);
  /* 関数に渡される構造体はコピーなので、関数内で構造体を操作しても元の構造体に影響はない */
  printf("%d\n", data.age);

}

void give_value(student data) {
  data.age = 22;
  printf("%d\n", data.age);
}