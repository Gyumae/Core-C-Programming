/* 파일명: Assign08.c
* 내용: 반지름을 입력받아 구의 부피 계산하는 프로그램.
* 작성자: 김상훈
* 날짜: 2025.04.19.
* 버전: v1.0
*/


#include <stdio.h>

int main() 
{
    double radius, volume;
    const double PI = 3.141592; 

    printf("반지름의 길이? ");
    scanf("%lf", &radius);

    volume = (4.0 / 3.0) * PI * radius * radius * radius;  

    printf("구의 부피: %.6f\n", volume);

    return 0;
}