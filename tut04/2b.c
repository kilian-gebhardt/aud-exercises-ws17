#include <stdio.h>


int main() {
  int z, i, n;
  printf("Bitte gib eine Zahl ein: ");
  scanf("%d", &n);
  
  for(z = 1; z <= n; z=z+1) {
      /* Schleife für z. Zeile */
      for(i = 1; i <= n; i=i+1) {
          printf(" %3d", i * z);
      }
      printf("\n");
  }

  return 0;
}
