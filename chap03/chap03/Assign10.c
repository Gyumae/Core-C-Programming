/* 파일명: Assign10.c

 * 내용: 환전

 * 작성자: 김상훈
 * 날짜: 2025.04.06.

 * 버전: v1.0

 */

#include <stdio.h>

int main() 
{
    double exchange_rate, usd;

    printf("USD? ");
    scanf("%lf", &usd);

    printf("원/달러 환율? ");
    scanf("%lf", &exchange_rate);

    double krw = exchange_rate * usd;

    printf("환전 금액: %.2f\n", krw);

    return 0;
}