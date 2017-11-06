#include <stdio.h>

#define LEN 1001

int main() {
  char sieve[LEN];
  int k, z, i;
  
  for(i = 0; i < LEN; i++) {
    sieve[i] = 1;
  }
  
  for(z = 2; z < LEN; z = z + 1) {
    if (sieve[z] == 1) {
      printf(" %d", z);
      for(k = 2; z * k < LEN; k = k+1)
        /* ausstreichen! */
        sieve[z * k] = 0;
      }
   }
  return 0;
}
