#include <stdio.h>

int main(void)
{
  // 선언
  // type varname;
  // ex)
  char grade;
  int num_class;

  // 선언 + 초기화
  float height = 170.;

  // (값)할당, = 사용
  grade = 'A'; // 문자
  num_class = 5;
  height = 165.7;

  printf("grade = %c\n", grade);
  printf("num_class = %d\n", num_class);
  printf("height = %f\n", height);

  return 0;
}
