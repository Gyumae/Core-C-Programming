/* ���ϸ�: Assign10.c

 * ����: ȯ��

 * �ۼ���: �����
 * ��¥: 2025.04.06.

 * ����: v1.0

 */

#include <stdio.h>

int main() 
{
    double exchange_rate, usd;

    printf("USD? ");
    scanf("%lf", &usd);

    printf("��/�޷� ȯ��? ");
    scanf("%lf", &exchange_rate);

    double krw = exchange_rate * usd;

    printf("ȯ�� �ݾ�: %.2f\n", krw);

    return 0;
}