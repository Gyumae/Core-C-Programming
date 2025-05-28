/* 파일명: Assign02.c
  * 내용: 화씨온도를 섭씨온도로 변환하는 프로그램
  * 작성자: 김상훈
  * 날짜: 2025.04.19.
  * 버전: v1.0
  */


#include <stdio.h>

int main() 
{
    double fahrenheit, celsius;

    printf("화씨온도(°F)? ");
    scanf("%lf", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("%.2fF = %.2fC\n", fahrenheit, celsius); 

    return 0;
}