/* ���ϸ�: Assign04.c
 * ����: if�� ������ ����Ͽ�, ����Ḧ ����ϴ� ���α׷�
 * �ۼ���: �����
 * ��¥: 2025.04.26.
 * ����: v1.0
 */

#include <stdio.h>

int main()
{
	int age, fee;

	printf("����? ");
	scanf("%d", &age);

	if (age >= 8) {
		if (age >= 65) {
			fee = 5000;
		}
		else {
			fee = 10000;
		}
	}
	else {
		fee = 0;
	}
	printf("�����: %d��\n", fee);
	return 0;
}