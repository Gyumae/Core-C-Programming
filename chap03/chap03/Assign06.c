/* ���ϸ�: Assign06.c

 * ����: ����Ʈ ���� ���

 * �ۼ���: �����
 * ��¥: 2025.04.06.

 * ����: v1.0

 */

#include <stdio.h>

int main()
{
    double m2;
    const double m2_to_pyeong = 3.3058;

    printf("����Ʈ�� ����(��������)? ");
    scanf("%lf", &m2);

    double pyeong = m2 / m2_to_pyeong;

    printf("%.2f��\n", pyeong);

    return 0;
}