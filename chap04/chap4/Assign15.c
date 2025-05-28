/* 파일명: Assign15.c
  * 내용: 현찰 매입 시 환율을 구하는 프로그램.
  * 작성자: 김상훈
  * 날짜: 2025.04.19.
  * 버전: v1.0
  */

#include <stdio.h>

int main() 
{
    double base_rate, discount_rate, usd_amount;
    const double fee_rate = 0.0175;

    printf("원/달러 매매기준율? ");
    scanf("%lf", &base_rate);
    printf("환율우대율(0~100%)? ");
    scanf("%lf", &discount_rate);

    double exchange_fee = base_rate * fee_rate * (1 - discount_rate / 100);
    double applied_rate = base_rate + exchange_fee;

    printf("달러 살 때 환율은 %.6lf입니다.\n", applied_rate);

    printf("구입할 달러(USD)? ");
    scanf("%lf", &usd_amount);
    printf("USD %.2lf 살 때 ==> KRW %.2lf\n", usd_amount, usd_amount * applied_rate);

    return 0;
}