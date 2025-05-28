/* 파일명: Assign05.c
 * 내용: 여러 조건 처리를 위한 프로그램
 * 작성자: 김상훈
 * 날짜: 2025.04.26.
 * 버전: v1.0
 */

#include <stdio.h>

int main()
{
	int age, fee;

	printf("나이? ");
	scanf("%d", &age);

	if (age < 8) {
		fee = 0;
	}
	else if (age >= 65) {
		fee = 5000;
	}
	else {
		fee = 10000;
	}
	printf("입장료: %d원\n", fee);

	return 0;
}