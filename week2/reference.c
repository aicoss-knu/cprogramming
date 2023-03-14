#include <stdio.h>

int main(void)
{
  int x = 5;
  int y = x;
  x = 6;

  printf("x = %p\n", &x);
  printf("y = %p\n", &y);
  printf("x = %d\n", x);
  printf("y = %d\n", y);

  return 0;
  
}


