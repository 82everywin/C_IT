#include <stdio.h>

void Swap(int num1, int num2)
{
	int backup = num1;			// num1안에 값을 백업해둔다.
	num1 = num2;				// num2의 값으로 num1에 저장한다.
	num2 = backup;				// 백업된 값(num1)을 num2에 넣는다.
}

void Swap2(int *num1, int *num2)
{	
	// num1 == &n1;		// 함수를 사용할 때, 현재 포인터 변수에는 &n1을 매개변수로 사용하였으니 n1의 주소 == 포인터변수 num1은 주소를 저장하게 되어있음 
	// num2 == &n2;
	int backup = *num1;			// &n1 (x) (== n1의 주소이므로) ==> 'n1 의 값'을 넘겨주고 싶음 (== *num1) 
	*num1 = *num2;				// *num1= *(&n2)  자료형 앞의 *이 아니므로 => 역참조 // 즉, 주소(num1)가 아닌 값(*num1)을 말하는 것임
	*num2 = backup;				// num2(주소) (x) --> *num2 (o) ==> 주소가 아닌 값을 넘겨줘야 하므로 
}
int main7()
{
	int n1 =3; 
	int n2 =2;
	printf("바꾸기 전 : %d, %d \n", n1, n2);

	//Swap이라는 함수를 통해서 n1과 n2의 값을 바꿔주고 싶음
	Swap2(&n1, &n2);

	printf("바꾼 후 : %d, %d \n", n1, n2);

	return 0;
}

// only SW : 포인터 필요x (웹, 앱 : JAVA, Python)
// HW+SW : 하드웨어 동작을 위해선 포인터 필요(펌웨어, IOT : C언어)