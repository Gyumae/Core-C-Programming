/* ���ϸ�: Assign08.c
 * ����: �پ��� ���� ���� �� �ϳ��� ó���ϴ� ���α׷�
 * �ۼ���: �����
 * ��¥: 2025.04.26.
 * ����: v1.0
 */

#include <stdio.h>

int main()
{
	int menu;
	char filename[32] = "test.avi";

	printf("1.���� ����\n");
	printf("2.���\n");
	printf("3.��� �ɼ�\n");
	printf("����: ");

	scanf("%d", &menu);
	switch (menu) {
	case 1:
		printf("����� ���� �̸�? ");
		scanf("%s", filename);
		break;

	case 2:
		printf("%s�� ����մϴ�.\n", filename);
		break;
	case 3:
		printf("��� �ɼ��� �����մϴ�.\n");
		break;

	default:
		printf("�߸� �����ϼ̽��ϴ�.\n");
		break;
	}

	return 0;
}