/* ���ϸ�: Assign01.c

 * ����: ���� �� �ѷ� ���   

 * �ۼ���: �����
 * ��¥: 2025.04.06.

 * ����: v1.0

 */

#include <stdio.h>

int main() 
{
    double side;

    printf("�� ���� ����? ");
    scanf("%lf", side);

    double area = side * side;
    double perimeter = 4 * side;

    printf("����: %.0f\n�ѷ�: %.0f\n", area, perimeter);

    return 0;
}