#include <stdio.h>

// int g_num=0;				// 전역변수 : {}안에서 만들어진 변수가 아님, {}를 벗어날 일이 없음
// 전역변수는 어디서든 사용 가능하나 해제가 안되어 메모리 낭비가 심함 --> 사용자제

int function1(int* p_num) {
	int num = 3333;			// 지역변수 
	*p_num = num;			// 넘겨받은 위치에다가 num값을 대입

	return 0;
}

int function2(int num) {
	// 3333을 출력
	printf("%d \n", num);
}

int main4() {

	int num = 0;
	int* p_num = &num;			// num 위치를 저장하고
	function1(p_num);			// 위치를 넘겨서 
	function2(num);
	return 0;
}