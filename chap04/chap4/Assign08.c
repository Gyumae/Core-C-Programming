/* ���ϸ�: Assign08.c
* ����: �������� �Է¹޾� ���� ���� ����ϴ� ���α׷�.
* �ۼ���: �����
* ��¥: 2025.04.19.
* ����: v1.0
*/


#include <stdio.h>

int main() 
{
    double radius, volume;
    const double PI = 3.141592; 

    printf("�������� ����? ");
    scanf("%lf", &radius);

    volume = (4.0 / 3.0) * PI * radius * radius * radius;  

    printf("���� ����: %.6f\n", volume);

    return 0;
}