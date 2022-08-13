#include <stdio.h>

void Add(int num)			// 값을 전달받음
{
	num += 3;
}

void Add2(int* num)			// 주소(위치)를 전달받음 
{
	*num += 3;				// num의 주소를 역참조하여 값에 접근
	// &num : num의 주소
	// num의 값
	// *&num == num
}

int main6() 
{
	// 포인터는 위치를 이용하는 기술
	int num1 = 0;
	Add2(&num1);				// num1의 주소값을 전달

	printf("%d \n", num1);		

	// & : 주소
	// * : 역참조(단, 자료형 앞에 오는 *은 자료형을 의미) 
	// 포인터 변수 앞의 * : 역참조
	// 변수 선언할때의 * : 포인터 변수 생성
	int* num2;				// 포인터 변수 생성
	num2 = &num1;			// num2dp num1의 주소값을 담음
	*num2;					// num2에 담긴 변수의 주소를 통해 역참조( num1 사용)  

	num1 = 88;
	printf("%d \n", num2);		// num1사용  ==> 줄 30과 같이 num2는 역참조를 했기 때문에  num2 != *num2 임,

	// num2 => &num1 의 주소를 보여줌
	// *num2 => num1 의 값 (== &num) 을 보여줌



	return 0; 

}