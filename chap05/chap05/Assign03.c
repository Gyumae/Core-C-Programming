/* ���ϸ�: Assign03.c
 * ����: 0���� ������ ������ ó���ϴ� ���α׷�
 * �ۼ���: �����
 * ��¥: 2025.04.26.
 * ����: v1.0
 */

#include<stdio.h>

int main() {
	int x, y;

	printf("���� 2���� �Է��ϼ���: ");
	scanf("%d %d", &x, &y);

	if (y != 0)
		printf("%d / %d = %f\n", x, y, (double)x / y);
	else
		printf("0���� ���� �� �����ϴ�.");

	return 0;
}