/* 파일명: Assign04.c
 * 내용: if을 여러번 사용하여, 입장료를 계산하는 프로그램
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
	printf("입장료: %d원\n", fee);
	return 0;
}