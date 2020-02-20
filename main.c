#include <stdio.h>

typedef union tree_s tree_t;  // Forward declaration

typedef struct tree_s {
  tree_t * l;
  char * val;
  tree_t * r;
};


int main(int argc, char *argv[])
{
  printf("Hello, World!\n %s \n", argv[0]);
  return 0;
}
