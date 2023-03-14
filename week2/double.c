#include <stdio.h>

int main()
{
  char c;       // 선언
  int a = 5;    // 선언과 동시에 할당 : 초기화
  double f; 	    // 선언
  f = 7.999;      // 할당
  
  printf("c=%c, a=%d, f=%d\n", c, a, (int) f);
  return 0;
}
