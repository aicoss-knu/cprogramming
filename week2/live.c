#include <stdio.h>
int main(void) {
  printf("\t\b\b\b\b%.4f\n", 0.33333333);
  printf("%.3f\n", 64.3);

  return 0;
}


// #include <stdio.h>
// int main()
// {
//   float f = 0.54;
//   int b = 0;  // 선언
//   char c = 'A'; // 선언과 동시에 할당 : 초기화
//   f = 7.2;     // 할당
  
//   printf("a=%f, b=%d, c=%c\n", f, b, c);
//   return 0;
// }



// #include <stdio.h> // 전처리기
// // #define RATE 1300.2 // 원/달러 환율

// int main(void)
// {
//   int won;

//   const float dollar_rate = 1300.3;
//   float dollar;
//   int dollar_cent;

//   printf("금액(원)을 입력 하세요 : ");
//   scanf("%d", &won);

//   dollar = won / dollar_rate;
//   dollar_cent = (int)(dollar * 100) % 100;

//   printf("%d원은 %d달러 %d센트 입니다.\n", won, (int)dollar, dollar_cent);

//   return 0;
// }

// const float euro_rate = 1394.6;
// float euro;
// int euro_cent;

// euro = won / euro_rate;
// euro_cent = (int) (euro * 100) % 100;
// printf("%d원은 %d유로 %d센트 입니다.\n", won, (int) euro, euro_cent);
