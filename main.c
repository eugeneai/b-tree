#include <stdio.h>

typedef union tree_s tree_t;  // Forward declaration

typedef struct tree_s {
  tree_t * l;
  char * val;
  tree_t * r;
};


tree_t * new_tree(tree_t * l, char * val, tree_t * r) {
  tree_t * n; // FIXME: Add memory allocation
  n->l=l;
  n->r=r;
  n->val=val;
  return n;
}

int main(int argc, char *argv[])
{
  printf("Hello, World!\n %s \n", argv[0]);
  return 0;
}
