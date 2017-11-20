#include <stdio.h>

typedef struct element *list;
struct element { int value; list next; };


int main()
{
	list l = cons(8, cons(1, cons(2, cons(3, cons(7, cons(2, NULL))))));

	printList(l);

	// printf("Sum recursive: %d\n", sum_rec(l));
	// printf("Sum iterative: %d\n", sum_rec(l));

	// rmEvans_rec(&l);
	// rmEvans_it(&l);
	// printList(l);

	return 0;
}

