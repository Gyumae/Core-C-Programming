#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>

int main()
{
	int num;
	float hakjum;

	printf("��ȣ? ");
	scanf_s("%d", &num);
	printf("����? ");
	scanf_s("%f", &hakjum);

	printf("%d�� �л��� ������ %f�Դϴ�.\n", num, hakjum);

	return 0;
}