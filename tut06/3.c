#include <stdio.h>
typedef struct node * tree;
typedef struct node { int key; struct node * left, * right; } node;
// typedef node * tree;

#include "print_tree.h"

int count(int key, tree t){
  if (t == NULL)
    return 0;
  if (key == t->key)
    return 1 + count(key, t->left) + count(key, t->right);
  else
    return count(key, t->left) + count(key, t->right);
}

tree baz(tree s, tree t) {
  if (s == NULL)
    return NULL;
  return 
    mktree( count(s->key, t), baz(s->left, t), baz(s->right, t));
}

void defol(tree * p) {
  if ((*p) == NULL)
    return;
  if ((*p)->left == NULL && (*p)->right == NULL) {
    free(*p);
    *p = NULL;
    return;
  }
  defol( &((*p)->left ));
  defol( &((*p)->right));
}

int main() {
	tree s = mktree(2, mktree(3, mktree(2, NULL, NULL), 
	mktree(4, NULL, NULL)), mktree(1, NULL, NULL));
	tree t = mktree(2, mktree(2, NULL, NULL), mktree(3, NULL, NULL));

	printTree(s);

	printTree(t);

  printf("%d\n", count(2, t));
  printf("%d\n", count(3, t));
  printf("%d\n", count(5, t));
  
  printTree(baz(s, t));
  
  defol(&s);
  
  printTree(s);
  
	return 0;
}
