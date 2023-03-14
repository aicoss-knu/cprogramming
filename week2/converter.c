#include <stdio.h>
#define WON_DOLLOR_RATE 1325.4
#define WON_EURO_RATE   1394.6

int main(void)
{
  int won = 0; // 정수형 변수 선언 (4byte 메모리 공간을 할당받음)
  float dollar = 0;
  float euro = 0;
  int d_cent = 0;
  int e_cent = 0;
  // const float WON_DOLLOR_RATE = 1301.1;
  // const float WON_EURO_RATE = 1394.6;

  printf("금액을 입력하세요(원): "); // 입력 안내 프롬프트 출력
  scanf("%d", &won);                 // &는 주소연산자, scanf로 입력받을때는 변수의 주소를 인자로 넘겨준다

  dollar = won / WON_DOLLOR_RATE;
  euro = won / WON_EURO_RATE;
  d_cent = (int)(dollar * 100) % 100;
  e_cent = (int)(euro * 100) % 100;
  // printf("(%f)\n", dollar);
  
  printf("%d원은 %d달러 %2d센트 입니다.\n", won, (int) dollar, d_cent);
  printf("%d원은 %d유로 %2d센트 입니다.\n", won, (int) euro, e_cent);

  return 0;
}




