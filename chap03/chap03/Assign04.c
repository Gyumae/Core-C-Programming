/* ���ϸ�: Assign04.c

 * ����: �̵���  �Ÿ� ���   

 * �ۼ���: �����
 * ��¥: 2025.04.06.

 * ����: v1.0

 */

#include <stdio.h>

int main() 
{
    double force, distance;

    printf("��(N)? ");
    scanf("%lf", &force);

    printf("�̵� �Ÿ�(m)? ");
    scanf("%lf", &distance);

    double work = force * distance;
    printf("���� ��: %.2f J\n", work);

    return 0;
}