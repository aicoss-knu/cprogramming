#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    
    printf("섭씨 온도를 입력하세요: ");
    scanf("%f", &celsius);
    
    fahrenheit = (celsius * 9/5) + 32;
    printf("섭씨 %.2f도는 화씨 %.2f도 입니다.\n", celsius, fahrenheit);
    
    return 0;
}
