/* ���ϸ�: Assign16.c
  * ����: RGB ������ �Է¹޾� 32��Ʈ Ʈ���÷� ������ ��ȯ�Ͽ� ����ϴ� ���α׷�
  * �ۼ���: �����
  * ��¥: 2025.04.19.
  * ����: v1.0
  */


#include <stdio.h>

int main() 
{
    int red, green, blue;

    printf("red? ");
    scanf("%d", &red);
    printf("green? ");
    scanf("%d", &green);
    printf("blue? ");
    scanf("%d", &blue);

    red = (red > 255) ? 255 : red;
    green = (green > 255) ? 255 : green;
    blue = (blue > 255) ? 255 : blue;

    unsigned int rgb_color = (blue << 16) | (green << 8) | red;

    printf("RGB Ʈ���÷�: %06X\n", rgb_color);

    return 0;
}