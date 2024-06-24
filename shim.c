#include <dlfcn.h>
#include <stdio.h>

void *malloc(size_t size) {
  void *(*real_malloc)(size_t) = dlsym(RTLD_NEXT, "malloc");
  void *ptr = real_malloc(size);
  printf("Allocating %zu bytes at: %p\n", size, ptr);
  return ptr;
}

void free(void *ptr) {
  printf("Freeing %p\n", ptr);
  void (*real_free)(void *) = dlsym(RTLD_NEXT, "free");
  real_free(ptr);
}
