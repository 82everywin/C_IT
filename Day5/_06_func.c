#include <stdio.h>

// Sum
void Sum(int i, int j) 
{
	int result = i + j;
	printf("%d\n", result);
}
// Sub
void Sub(int i, int j) 
{
	int result = i - j;
	printf("%d\n", result);
}
// Mul
void Mul(int n, int m)
{
	int result = n *m;
	printf("%d\n", result);
}
// Div
void Div(int n, int m) 
{
	int result = n /m;
	printf("%d\n", result);
}

// 숫자 2개를 받아서 각각 절댓값으로 만들어 더하기 (절댓값 : 마이너스면 플러스로 바꿈)
void AbsPlus(int num1, int num2)
{
	int result = abs(num1) + abs(num2);
	printf("%d\n", result);
}

// 숫자 2개를 받아서 각각 절댓값으로 만들어 빼기(절댓값 : 마이너스면 플러스로 바꿈)
void AbsMinus(int num1, int num2)
{
	int result = abs(num1) - abs(num2);
	printf("%d\n", result);
}
// C언어의 시작점은 main() 함수이다.
int main()
{
	Sum(2, 2);		// 4
	
	Sub(2, 2);		// 0		
	
	Mul(2, 2);		// 4

	Div(2, 2);		// 1

	printf("\n\n");

	AbsPlus(-3, 2);		// 8
	AbsMinus(-5, 1);	// 4
	return 0;
}