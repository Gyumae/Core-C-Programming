/* 파일명: Assign08.c
 * 내용: 다양한 선택 사항 중 하나를 처리하는 프로그램
 * 작성자: 김상훈
 * 날짜: 2025.04.26.
 * 버전: v1.0
 */

#include <stdio.h>

int main()
{
	int menu;
	char filename[32] = "test.avi";

	printf("1.파일 열기\n");
	printf("2.재생\n");
	printf("3.재생 옵션\n");
	printf("선택: ");

	scanf("%d", &menu);
	switch (menu) {
	case 1:
		printf("재생할 파일 이름? ");
		scanf("%s", filename);
		break;

	case 2:
		printf("%s를 재생합니다.\n", filename);
		break;
	case 3:
		printf("재생 옵션을 선택합니다.\n");
		break;

	default:
		printf("잘못 선택하셨습니다.\n");
		break;
	}

	return 0;
}