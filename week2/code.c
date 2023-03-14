#include <stdio.h>
// #define WON_DOLLOR_RATE 1325.4

int main(void)
{
  int won; // 정수형 변수 선언 (4byte 메모리 공간을 할당받음)
  float dollar;
  int cent;
  const float WON_DOLLOR_RATE = 1325.4;

  printf("금액을 입력하세요(원): "); // 입력 안내 프롬프트 출력
  scanf("%d", &won);                 // &는 주소연산자, scanf로 입력받을때는 변수의 주소를 인자로 넘겨준다

  dollar = won / WON_DOLLOR_RATE;
  cent = (int)(dollar * 100) % 100;
  printf("(%f)\n", dollar);
  printf("%d원은 %d달러 %d센트 입니다.\n", won, (int) dollar, cent);

  return 0;
}

























// #include <stdio.h>

// int main() {
//     int x; // 변수 x 선언
//     float y; // 변수 y 선언

//     x = 10; // 변수 x 값 할당
//     y = 3.14; // 변수 y 값 할당

//     printf("x의 값: %d\n", x);
//     printf("y의 값: %.2f\n", y);

//     return 0;
// }


// #include <stdio.h>

// int main() {

//     int x = 10;
//     const float PI = 3.14;

//     x = x + 5;
//     // PI = 3.14159;
//     // 상수 PI 값 변경 시 컴파일 에러 발생

//     printf("x의 값: %d\n", x);
//     printf("원주율: %.2f\n", PI);

//     return 0;
// }










// int main(void) {

//   // 마지막f : format을 의미한다.
//   // "" 는 문자열을 나타낸다.

//   int ko;
//   int en;
//   int ma;

//   scanf("%d", &a)
//   scanf("%d", &a)
//   scanf("%d", &a)
  
//   printf("성적\n");
//   printf("국어 %5d 점 입니다.\n", ko);
//   printf("영어 %5d 점 입니다.\n", en);
//   printf("수학 %5d 점 입니다.\n", ma);

//   return 0;

// }

