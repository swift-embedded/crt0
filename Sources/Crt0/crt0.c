#include <stdint.h>

extern int main();
extern void (*__init_array_start[])(void);
extern void (*__init_array_end[])(void);
extern void _exit(int code);

static void init_array() {
  int count = __init_array_end - __init_array_start;
  for (int i = 0; i < count; i++)
    __init_array_start[i]();
}

void _start(void) {
  int retval;

  init_array();
  retval = main();
  _exit(retval);
}
