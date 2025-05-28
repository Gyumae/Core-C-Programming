/* 파일명: Assign07.c

 * 내용: 실수의 제곱과 세제곱을 계산하는 프로그램   

 * 작성자: 김상훈
 * 날짜: 2025.04.06.

 * 버전: v1.0

 */

#include <stdio.h>

int main() 
{
    double num;

    printf("실수? ");
    scanf("%lf", &num);

    double square = num * num;    
    double cube = num * num * num;

    printf("제곱: %e\n", square);
    printf("세제곱: %e\n", cube);

    return 0;
}