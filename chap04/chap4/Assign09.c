/* ���ϸ�: Assign09.c
  * ����: �� ���� ����ð��� ��/��/�ʷ� ��ȯ�ϴ� ���α׷�.
  * �ۼ���: �����
  * ��¥: 2025.04.19.
  * ����: v1.0
  */


#include <stdio.h>

int main() 
{
    int total_seconds, hours, minutes, seconds;

    printf("����ð�(��)? ");
    scanf("%d", &total_seconds);

    hours = total_seconds / 3600;          
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;

    printf("����ð��� %d�ð� %d�� %d���Դϴ�.\n", hours, minutes, seconds);

    return 0;
}