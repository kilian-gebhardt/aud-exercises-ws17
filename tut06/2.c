#include <stdio.h>
#include <stdlib.h>

typedef struct element *list;
struct element { int value; list next; };

#include "print_list.h"

int sum_it( list l ) {
  int sum = 0;
  while ( l != NULL) {
    sum = sum + (*l).value;
    l = (*l).next;
  }
  return sum;
}

int sum_rec( list l ) {
  if ( l == NULL ) {
    return 0;
  }
  return l->value + sum_rec( l->next );
}

void rmEvans_it( list * lp ) {
  list tmp;
  if ( lp == NULL ) 
    return;
  while ( *lp != NULL ) {
    if ( (*lp)->value  % 2 == 0) {
      tmp = *lp;
      *lp = (*lp)->next;
      free(tmp);
    } else {
      lp = &((*lp)->next);
    }
  }
}

void rmEvans_rec( list * lp ) {
  list tmp;
  if ( lp == NULL || *lp == NULL )
    return;
  // begin: same as before 
  if ( (*lp)->value  % 2 == 0) {
      tmp = *lp;
      *lp = (*lp)->next;
      free(tmp);
  } else {
      lp = &((*lp)->next);
  }
  // end: same as before
  rmEvans_rec(lp);
}

int main()
{
	list l = cons(8, cons(1, cons(2, cons(3, cons(7, cons(2, NULL))))));

	printList(l);

	printf("Sum recursive: %d\n", sum_rec(l));
	printf("Sum iterative: %d\n", sum_it(l));

	rmEvans_rec(&l);
	// rmEvans_it(&l);
	printList(l);

	return 0;
}

