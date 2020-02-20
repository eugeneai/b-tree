#include <stdio.h>
#include <malloc.h>

typedef union tree_s tree_t;  // Forward declaration

typedef struct tree_s {
  tree_t * l;
  char * val;
  tree_t * r;
};


tree_t * new_tree(tree_t * l, char * val, tree_t * r) {
  tree_t * n = malloc(sizeof(tree_t));
  n->l=l;
  n->r=r;
  n->val=val; // TODO: Do something with string.
  return n;
}

void delete_tree(tree_t * n, int delete_val) {
  if (delete_val and n->val!=NULL) free(n->val);
  if (n->l!=NULL) delete_tree(n->l);
  if (n->r!=NULL) delete_tree(n->r);
  free(n);
}

int main(int argc, char *argv[])
{
  printf("Hello, World!\n %s \n", argv[0]);
  return 0;
}
