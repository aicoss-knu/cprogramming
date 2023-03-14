
#include <stdio.h>

int main(void)
{
  // int x = 3;
  // int y = 3;
  // char z = x == y ? 'Y' : 'N';
  // printf("%c\n", z);

  // int x = 3;
  // printf("int  : %lu byte\n", sizeof(x));
  // printf("char : %lu byte\n", sizeof(char));
  // printf("3.4  : %lu byte\n", sizeof(3.4));
  int num = 23;
  int b = 128;
  printf("%d", (b & num)>0);
  b >>= 1;
  printf("%d", (b & num)>0);
  b >>= 1;
  printf("%d", (b & num)>0);
  b >>= 1;
  printf("%d", (b & num)>0);
  b >>= 1;
  printf("%d", (b & num)>0);
  b >>= 1;
  printf("%d", (b & num)>0);
  b >>= 1;
  printf("%d", (b & num)>0);
  b >>= 1;
  printf("%d\n", (b & num)>0);
  return 0;
}

// #include <stdio.h>

// int main(void)
// {
//   printf("%d\n", 3 == 4);
//   printf("%d\n", 2 < 3);
//   printf("%d\n", 1 != 4);
//   printf("%d\n", (1 + 2) == (7 - 4));

//   printf("%d\n", (3 < 4) == (4 != 3));
//   printf("%d\n", !(2 < 3));
//   return 0;
// }



// #include <stdio.h>

// int main(void)
// {
//   int ss = 0;
//   scanf("%d", &ss);

//   int h = ss / 3600;
//   int m = ss / 60;
//   int s = (ss - (3600 * h) - (60 * m)) % 60;

//   printf("%d = %dh %dm %ds\n", ss, h, m, s);
//   return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//   int x = 0;
//   printf("숫자 입력 : ");
//   scanf("%d", &x);
//   int y = 3;
//   int q = x / y;
//   int r = x % y;

//   printf("%d = %d * %d + %d\n", x, y, q, r);
//   return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//   int x = 3;
//   int y = 0;

//   printf("%d\n", x++);
//   printf("%d\n", x);

//   printf("%d\n", --y);
//   printf("%d\n", y);
//   return 0;
// }
