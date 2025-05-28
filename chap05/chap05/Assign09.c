/* 파일명: Assign09.c
 * 내용: 간단한 사칙연산을 수행하는 프로그램
 * 작성자: 김상훈
 * 날짜: 2025.04.26.
 * 버전: v1.0
 */

#include <stdio.h>

int main()
{
	int a, b;
	char op;

	printf("수식? ");
	scanf("%d %c %d", &a, &op, &b);

	switch (op) {
	case '+':
		printf("%d + %d = %d\n", a, b, a + b);
		break;
	case '-':
		printf("%d - %d = %d\n", a, b, a - b);
		break;
	case '*':
		printf("%d * %d = %d\n", a, b, a * b);
		break;
	case '/':
		if (b != 0)
			printf("%d / %d = %.2f\n", a, b, (double)a / b);
		else
			printf("0으로 나눌 수 없습니다.\n");
		break;
	default:
		printf("잘못된 수식입니다.\n");
		break;
	}

	return 0;
}