#include <stdio.h>

int main3()
{
	int 가격[5] = {1000,2000,3000,4000,5000 };
	// for문으로 전부 출력
	for (int i = 0; i < 5; i++)
	{
		printf("%d원 \n", 가격[i]);
	}

	printf("%d \n", 가격[1]);			// 1번째 

	return 0; 
}