/* ���ϸ�: Assign03.c

 * ����: ��ġ  ������ ���  

 * �ۼ���: �����
 * ��¥: 2025.04.06.

 * ����: v1.0

 */

#include <stdio.h>
#define GRAVITY 9.8

int main() 
{
    double mass, height;

    printf("����(kg)? ");
    scanf("%lf", &mass);

    printf("����(m)? ");
    scanf("%lf", &height);

    double potential_energy = mass * height * GRAVITY;
    printf("��ġ ������: %.6f J\n", potential_energy);

    return 0;
}