#include <stdio.h>

unsigned fib(unsigned n) {
  if (n <= 1) {
    return 1;  
  } else {
      return fib(n-1) + fib(n-2);
  }
}

int main() {
  unsigned n;
  printf("Bitte n eingeben: ");
  scanf("%u", &n);
  printf("fib(%u) = %u\n", n, fib(n));
  return 0;
}
