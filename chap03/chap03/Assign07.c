/* ���ϸ�: Assign07.c

 * ����: �Ǽ��� ������ �������� ����ϴ� ���α׷�   

 * �ۼ���: �����
 * ��¥: 2025.04.06.

 * ����: v1.0

 */

#include <stdio.h>

int main() 
{
    double num;

    printf("�Ǽ�? ");
    scanf("%lf", &num);

    double square = num * num;    
    double cube = num * num * num;

    printf("����: %e\n", square);
    printf("������: %e\n", cube);

    return 0;
}