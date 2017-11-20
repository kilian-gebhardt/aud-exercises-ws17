#ifndef PRINT_LIST
#define PRINT_LIST

#include <stdlib.h>

list cons(int n, list next)
{
	list l = malloc(sizeof(*l));
	l->value = n;
	l->next = next;
	return l;
}

void printList(list l)
{
	printf("[");
	while(l){
		printf("%d", l->value);
		if(l->next) printf(", ");
		l = l->next;
	}
	printf("]\n");
}

#endif
