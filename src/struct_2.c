#include <stdio.h>
#include <string.h>

typedef struct {
  int year;
  int clas;
  char name[64];
  double height;
} student;

void student_print(student *data);

int main() {
  student data;
  student *pdata;

  pdata = &data;
  pdata->year = 10;
  strcpy(pdata->name, "Tom");

  student_print(&data);
}

void student_print(student *data) {
  printf("year: %d\n", data->year);
  printf("name: %s\n", data->name);
}
