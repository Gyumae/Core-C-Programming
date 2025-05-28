/* 파일명: Assign03.c
 * 내용: 0으로 나누는 오류를 처리하는 프로그램
 * 작성자: 김상훈
 * 날짜: 2025.04.26.
 * 버전: v1.0
 */

#include<stdio.h>

int main() {
	int x, y;

	printf("정수 2개를 입력하세요: ");
	scanf("%d %d", &x, &y);

	if (y != 0)
		printf("%d / %d = %f\n", x, y, (double)x / y);
	else
		printf("0으로 나눌 수 없습니다.");

	return 0;
}