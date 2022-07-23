#include <stdio.h>

void main2() {
	//자주 사용할 것 같은 데이터는 저장해놓자 : 변수 
	
	char name = 'A';			// 글자
	int number = 123;			// 숫자(정수)
	float number2 = 3.14f;		// 소수점 있는 숫자(실수)
	
								
	// 변수 : 저장공간
	// 저장공간형태 저장공간이름 = 저장할 값 ;

	printf("Hello %c \n", name);		//글자 출력
	printf("Hello %d \n", number);		//정수 출력
	printf("Hello %f \n", number2);		//실수 출력

	//%c : 한 글자
	//%d : 숫자
	//%f : 소수점 있는 숫자
	//%s : 여러 글자
}