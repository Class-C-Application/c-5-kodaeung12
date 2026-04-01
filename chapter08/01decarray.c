#include <stdio.h>
#define SIZE 5
// SIZE라는 이름으로 정수 5를 나타내는 매크로 상수를 정의하세요

int main(void)
{
	//배열선언
	int score[SIZE];
	// 매크로 상수 SIZE 크기의 int형 배열 score를 선언하세요

	//배열 원소에 값 저장
	score[0] = 78;
	score[1] = 97;
	score[2] = 85;
	// score[3]에는 값을 저장하지 마세요 (쓰레기 값이 저장됩니다)
	score[4] =91;

	//배열원소 출력
	for (int i = 0; i < SIZE; i++) 
		printf("%d ", score[i]);
	printf("\n");

	return 0;
}
