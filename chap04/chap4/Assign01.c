/* ���ϸ�: Assign01.c
  * ����: ������ �ӷ��� �Է¹޾� � �������� ���ϴ� ���α׷�
  * �ۼ���: �����
  * ��¥: 2025.04.19.
  * ����: v1.0
  */


#include <stdio.h>
#include <math.h>

int main() 
{
    double mass, velocity, energy;

    printf("����(kg)? ");
    scanf("%lf", &mass);

    printf("�ӷ�(m/s)? ");
    scanf("%lf", &velocity);

    energy = 0.5 * mass * (velocity * velocity);

    printf("������� %.2f J\n", energy);

    return 0;
}