/* ���ϸ�: Assign02.c
  * ����: ȭ���µ��� �����µ��� ��ȯ�ϴ� ���α׷�
  * �ۼ���: �����
  * ��¥: 2025.04.19.
  * ����: v1.0
  */


#include <stdio.h>

int main() 
{
    double fahrenheit, celsius;

    printf("ȭ���µ�(��F)? ");
    scanf("%lf", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("%.2fF = %.2fC\n", fahrenheit, celsius); 

    return 0;
}