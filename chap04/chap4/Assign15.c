/* ���ϸ�: Assign15.c
  * ����: ���� ���� �� ȯ���� ���ϴ� ���α׷�.
  * �ۼ���: �����
  * ��¥: 2025.04.19.
  * ����: v1.0
  */

#include <stdio.h>

int main() 
{
    double base_rate, discount_rate, usd_amount;
    const double fee_rate = 0.0175;

    printf("��/�޷� �Ÿű�����? ");
    scanf("%lf", &base_rate);
    printf("ȯ�������(0~100%)? ");
    scanf("%lf", &discount_rate);

    double exchange_fee = base_rate * fee_rate * (1 - discount_rate / 100);
    double applied_rate = base_rate + exchange_fee;

    printf("�޷� �� �� ȯ���� %.6lf�Դϴ�.\n", applied_rate);

    printf("������ �޷�(USD)? ");
    scanf("%lf", &usd_amount);
    printf("USD %.2lf �� �� ==> KRW %.2lf\n", usd_amount, usd_amount * applied_rate);

    return 0;
}