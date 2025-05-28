/* ���ϸ�: Assign16.c
  * ����: ��Ʈ�� 1�� ���� ���ؼ�16������10������ ����ϴ� ���α׷�
  * �ۼ���: �����
  * ��¥: 2025.04.19.
  * ����: v1.0
  */

#include <stdio.h>
#include <limits.h>

int main() 
{
    unsigned int bit7 = 1u << 7;
    unsigned int bit15 = 1u << 15;
    unsigned int bit23 = 1u << 23;
    unsigned int bit31 = 1u << 31;

    printf("7�� ��Ʈ�� 1�� ��: %08X %d\n", bit7, bit7);
    printf("15�� ��Ʈ�� 1�� ��: %08X %d\n", bit15, bit15);
    printf("23�� ��Ʈ�� 1�� ��: %08X %d\n", bit23, bit23);
    printf("31�� ��Ʈ�� 1�� ��: %08X %d\n", bit31, (int)bit31);

    return 0;
}