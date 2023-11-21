#include <stdio.h>
int mystery(int x);
void print_result(int b);

int main(void) {
  print_result(mystery(10));
  print_result(mystery(7));
  print_result(mystery(21));
  print_result(mystery(17 % 10 * 2));

  return 0;
}

int mystery(int x) {
  if (x % 7) {
    return 0;
  }
  return 1;
}

void print_result(int b) {
  if (b == 0) {
    puts("True");
  }
  else {
    puts("False");
  }
}
