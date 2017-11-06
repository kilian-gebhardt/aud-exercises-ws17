#include <stdio.h>

#define LEN 80

int main() {
  char name[LEN];
  printf("Bitte gib deinen Namen ein: ");
  scanf("%s", &name);
  printf("Hallo %s!\n", name);
  return 0;
}
