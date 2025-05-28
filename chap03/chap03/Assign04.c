/* 파일명: Assign04.c

 * 내용: 이동한  거리 계산   

 * 작성자: 김상훈
 * 날짜: 2025.04.06.

 * 버전: v1.0

 */

#include <stdio.h>

int main() 
{
    double force, distance;

    printf("힘(N)? ");
    scanf("%lf", &force);

    printf("이동 거리(m)? ");
    scanf("%lf", &distance);

    double work = force * distance;
    printf("일의 양: %.2f J\n", work);

    return 0;
}