#include <stdio.h>
typedef struct node * tree;
typedef struct node { int key; struct node * left, * right; } node;
// typedef node * tree;

#include "print_tree.h"

int main() {
	tree s = mktree(2, mktree(3, mktree(2, NULL, NULL), mktree(4, NULL, NULL)), mktree(1, NULL, NULL));
	tree t = mktree(2, mktree(2, NULL, NULL), mktree(3, NULL, NULL));

	printTree(s);

	printTree(t);

	return 0;
}
