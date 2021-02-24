#include <stdio.h>

int main() {
  int current_year;
  scanf("%d", &current_year);

  if (current_year % 4 == 0 ) {
    printf("%dは夏季オリンピック開催の年です。\n", current_year);
  
  } else {
    
    if (current_year % 2 == 0) {
      printf("%dは冬季オリンピック開催の年です。\n", current_year);
    }

    printf("%dはオリンピック開催年じゃないです。\n", current_year);
  }
}