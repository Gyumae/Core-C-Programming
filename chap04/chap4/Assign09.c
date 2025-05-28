/* 파일명: Assign09.c
  * 내용: 초 단위 재생시간을 시/분/초로 변환하는 프로그램.
  * 작성자: 김상훈
  * 날짜: 2025.04.19.
  * 버전: v1.0
  */


#include <stdio.h>

int main() 
{
    int total_seconds, hours, minutes, seconds;

    printf("재생시간(초)? ");
    scanf("%d", &total_seconds);

    hours = total_seconds / 3600;          
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;

    printf("재생시간은 %d시간 %d분 %d초입니다.\n", hours, minutes, seconds);

    return 0;
}