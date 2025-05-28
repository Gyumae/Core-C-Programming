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
	char name[64]; //이름 저장할 변수
	int age; //나이 저장할 변수
	char hello[256]; //인사말 저장할 변수

	//입력받기
	printf("이름, 나이, 인사말 순으로 입력하세요.\n");
	scanf_s("%s %d %s", name, &age, hello);

	//출력하기
	printf("이름: %s 나이: %d \n 인사말: %s", name, age, hello);

	return;

}

