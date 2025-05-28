/* 파일명: Assign02.c

 * 내용: 넓이 와 둘레 계산   

 * 작성자: 김상훈
 * 날짜: 2025.04.06.

 * 버전: v1.0

 */

#include <stdio.h>

int main() 
{
    int width, height;

    printf("가로의 길이 ? ");
    scanf("%d", &width);

    printf("세로의 길이 ? ");
    scanf("%d", &height);

    int nulld = width * height;
    int dulle = 2 * (width + height);

    printf("넓이: %d\n둘레: %d\n", nulld, dulle);

    return 0;
}