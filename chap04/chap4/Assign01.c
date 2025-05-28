/* 파일명: Assign01.c
  * 내용: 질량과 속력을 입력받아 운동 에너지를 구하는 프로그램
  * 작성자: 김상훈
  * 날짜: 2025.04.19.
  * 버전: v1.0
  */


#include <stdio.h>
#include <math.h>

int main() 
{
    double mass, velocity, energy;

    printf("질량(kg)? ");
    scanf("%lf", &mass);

    printf("속력(m/s)? ");
    scanf("%lf", &velocity);

    energy = 0.5 * mass * (velocity * velocity);

    printf("운동에너지 %.2f J\n", energy);

    return 0;
}