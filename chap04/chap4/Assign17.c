/* 파일명: Assign16.c
  * 내용: 비트만 1인 값을 구해서16진수와10진수로 출력하는 프로그램
  * 작성자: 김상훈
  * 날짜: 2025.04.19.
  * 버전: v1.0
  */

#include <stdio.h>
#include <limits.h>

int main() 
{
    unsigned int bit7 = 1u << 7;
    unsigned int bit15 = 1u << 15;
    unsigned int bit23 = 1u << 23;
    unsigned int bit31 = 1u << 31;

    printf("7번 비트만 1인 값: %08X %d\n", bit7, bit7);
    printf("15번 비트만 1인 값: %08X %d\n", bit15, bit15);
    printf("23번 비트만 1인 값: %08X %d\n", bit23, bit23);
    printf("31번 비트만 1인 값: %08X %d\n", bit31, (int)bit31);

    return 0;
}