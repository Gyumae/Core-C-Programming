/* 파일명: Assign01.c
 * 내용: 퀴즈 점수를 입력받아 70점 미만이면 재시라는 메시지를 출력하는 프로그램
 * 작성자: 김상훈
 * 날짜: 2025.04.26.
 * 버전: v1.0
 */

#include <stdio.h>

int main()
{
	int score;

	printf("퀴즈 점수를 입력하세요: ");
	scanf("%d", &score);

	if (score < 70)
		printf("재시!!!\n");

	printf("다음 수업은 일주일 후입니다.\n");

	return 0;
}