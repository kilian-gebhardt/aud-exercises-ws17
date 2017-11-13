#include <stdio.h>

void swap(int *x, int *y) {
  int z;
  printf("x = %u und y = %u\n", x, y);
  if (*x % 2 == 1)
    *y = *y + 1;
  z = *y;
  *y = *x;
  *x = z;
  printf("x = %i und y = %i\n", *x, *y);
}

int main() {
  int x,y;
  printf("Bitte x eingeben: ");
  scanf("%d", &x);
  printf("Bitte y eingeben: ");
  scanf("%d", &y);
  swap(&x, &y);
  printf("x = %i und y = %i\n", x, y);
  return 0;
}
