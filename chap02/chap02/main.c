#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void introMe(void);

int main() 
{
	introMe();	

	return 0;	

}

void introMe(void)
{
	char name[64]; //�̸� ������ ����
	int age; //���� ������ ����
	char hello[256]; //�λ縻 ������ ����

	//�Է¹ޱ�
	printf("�̸�, ����, �λ縻 ������ �Է��ϼ���.\n");
	scanf_s("%s %d %s", name, &age, hello);

	//����ϱ�
	printf("�̸�: %s ����: %d \n �λ縻: %s", name, age, hello);

	return;

}

