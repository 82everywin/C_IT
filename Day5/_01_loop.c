#include <stdio.h>

void main1() {
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		printf("%d \n", i);
		// 줄인말
		sum += i;		//	sum = sum + 1
	}

	sum = 0;

	sum += 0;			// sum = sum + 0			// 0 + 0 하고 대입
	sum += 1;			// sum = sum + 1			// 0 + 1 하고 대입
	sum += 2;			// sum = sum + 2			// 1 + 2 하고 대입
	sum += 3;			// sum = sum + 3			// 3 + 3 하고 대입
	sum += 4;			// sum = sum + 4			// 6 + 4 하고 대입 

	printf("총합 : %d \n", sum);		// 10

	// sum = sum + 1; 
	// sum += 1;
	// sum++;

	// sum = sum + 2;
	// sum += 2;

	sum = 0; 
	sum + 2;
	printf("%d\n", sum);			// sum = 0;

	sum = sum + 2;		// sum += 2 ;
	sum + 2; 
}