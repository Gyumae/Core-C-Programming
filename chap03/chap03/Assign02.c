/* ���ϸ�: Assign02.c

 * ����: ���� �� �ѷ� ���   

 * �ۼ���: �����
 * ��¥: 2025.04.06.

 * ����: v1.0

 */

#include <stdio.h>

int main() 
{
    int width, height;

    printf("������ ���� ? ");
    scanf("%d", &width);

    printf("������ ���� ? ");
    scanf("%d", &height);

    int nulld = width * height;
    int dulle = 2 * (width + height);

    printf("����: %d\n�ѷ�: %d\n", nulld, dulle);

    return 0;
}