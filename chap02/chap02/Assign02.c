#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>

int main()
{
	int num;
	float hakjum;

	printf("번호? ");
	scanf_s("%d", &num);
	printf("학점? ");
	scanf_s("%f", &hakjum);

	printf("%d번 학생의 학점은 %f입니다.\n", num, hakjum);

	return 0;
}