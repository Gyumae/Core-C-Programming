/* 파일명: Assign01.c

 * 내용: 넓이 와 둘레 계산   

 * 작성자: 김상훈
 * 날짜: 2025.04.06.

 * 버전: v1.0

 */

#include <stdio.h>

int main() 
{
    double side;

    printf("한 변의 길이? ");
    scanf("%lf", side);

    double area = side * side;
    double perimeter = 4 * side;

    printf("넓이: %.0f\n둘레: %.0f\n", area, perimeter);

    return 0;
}