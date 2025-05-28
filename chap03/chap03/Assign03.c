/* 파일명: Assign03.c

 * 내용: 위치  에너지 계산  

 * 작성자: 김상훈
 * 날짜: 2025.04.06.

 * 버전: v1.0

 */

#include <stdio.h>
#define GRAVITY 9.8

int main() 
{
    double mass, height;

    printf("질량(kg)? ");
    scanf("%lf", &mass);

    printf("높이(m)? ");
    scanf("%lf", &height);

    double potential_energy = mass * height * GRAVITY;
    printf("위치 에너지: %.6f J\n", potential_energy);

    return 0;
}