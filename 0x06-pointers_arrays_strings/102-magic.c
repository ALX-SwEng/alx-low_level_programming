#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[4] = 1024;
  p = &n;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
   printf("\na: %p ", n);
   printf("\na: %p ", n+1);
  
   printf("\na: %p ", a);
  
  *(p + 7) = 98;
  /* ...so that this prints 98\n */
  printf("a[4] = %d\n", a[4]);
  return (0);
}
