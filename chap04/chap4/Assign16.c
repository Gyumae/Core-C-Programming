/* 파일명: Assign16.c
  * 내용: RGB 색상값을 입력받아 32비트 트루컬러 값으로 변환하여 출력하는 프로그램
  * 작성자: 김상훈
  * 날짜: 2025.04.19.
  * 버전: v1.0
  */


#include <stdio.h>

int main() 
{
    int red, green, blue;

    printf("red? ");
    scanf("%d", &red);
    printf("green? ");
    scanf("%d", &green);
    printf("blue? ");
    scanf("%d", &blue);

    red = (red > 255) ? 255 : red;
    green = (green > 255) ? 255 : green;
    blue = (blue > 255) ? 255 : blue;

    unsigned int rgb_color = (blue << 16) | (green << 8) | red;

    printf("RGB 트루컬러: %06X\n", rgb_color);

    return 0;
}