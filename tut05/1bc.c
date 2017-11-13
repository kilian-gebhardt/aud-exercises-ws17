#include <stdio.h>

unsigned int g(unsigned int n) {
  if (n == 0)
    return 0;
  else 
    return n - g(g(n-1));
}

unsigned m(unsigned /*n*/); 
unsigned f(unsigned n) {
  if (n == 0)
    return 1;
  else 
    return n - m(f(n-1));
} 

unsigned m(unsigned n) {
  if (n == 0)
    return 0;
  else 
    return n - f(m(n-1));
}


int main() {
  unsigned n, i;
  printf("Bitte n eingeben: ");
  scanf("%u", &n);
  for(i = 0; i < n; ++i) {
    printf("\tg(%u) = %u ", i, g(i));
    printf("\tm(%u) = %u ", i, m(i));
    printf("\tf(%u) = %u \n", i, f(i));

  }
  return 0;
}
