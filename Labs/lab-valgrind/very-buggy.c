#include <stdlib.h>
#include <stdio.h>

static void* return_arg(void* p);
int frame3 ( void )
{
  int *a = malloc(11 * sizeof(int));
  a[10] = 0;
  a[5] = 0;
  a[0] = 0;
  int n = a[10];

  if (a[5] == 42) {
    printf("hello from frame3().  The answer is 42.\n");
  } else {
    printf("hello from frame3().  The answer is not 42.\n");
  }

  n = a[  a[0] & 7  ];

  free(a);

  return_arg(&n);

  a = malloc(99 * sizeof(int));
  free(a);

  return n;
}

int frame2 ( void )
{
  return frame3() - 1;
}

int frame1 ( void )
{
  return frame2() + 1;
}

int main ( void )
{
  return frame1() - 1;
}

static void* return_arg(void* p)
{
   return p;
}

