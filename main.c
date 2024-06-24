#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int *n = (int *)malloc(sizeof(int));
  *n = 10;
  printf("%p (%d)\n", n, *n);
  free(n);
  return EXIT_SUCCESS;
}
