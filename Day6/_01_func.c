#include <stdio.h>


// 함수
// 자료형 함수명()	{}
// () : 입력받을 값
// {} : 내용
// 함수명 : 함수영
// 자료형 : 리턴값의 형태

void func() {
	printf("함수 1 사용 \n");
	// void : 리턴값 사용
	// () : 비어있으면 받을 값 없음
}

void func2(int num) {
	printf("함수2 사용 \n");
	// void : 리턴값 없음
	// () : int변수가 하나 있으니 사용할 떄 정수값 하나를 넣어줘야 함
}

void func3(char c) {
	printf("함수 3 사용 \n");
	// void : 리턴값 없음
	// () : char 변수 한개가 있으니 사용할 떄 문자 하나를 넣어줘야 함
}

void func4(int n1, int n2) {
	printf("%d \n", n1 + n2);
	// () : 첫번째 숫자는 n1에, 두번째 숫자는 n2에 담긴다. 
	// void : 리턴값 없음 
}
int func5(int num1, int num2) {
	int result = num1 + num2;
	return result;			// 사용한 곳으로 return 옆의 값으로 전달

	// () : 받는 것
	// {} : 주는 것 
}

char func6(int num) {
	if (num >= 0) {
		return 'Y';
	}
	else {
		return 'N';
	}
}

int main1() {
	func();					// 아무값도 안넘겨줘도 됨
	func2(314);				// int 변수 하나를 받게끔 만들어졌으니 정수 한개를 써줘야 함
	func3('A');				// 문자 값을 한개 전달해줘얖 함
	func4(3, 5);			// 첫번째 값은 첫번째 변수(n1)에, 두번째 값은 두번째 변수(n2)에 담김

	// () : 함수로 값을 전달
	// return : 함수로부터 값을 전달받음 
	int number = 5 + 10;			// 출력x , return 으로 결과값을 알려줌
	int number1 = func5(5,10);	
	
	printf("%d \n", 5 + 10);				// 5+10
	printf("%d \n", func5(5, 10));			// func5(5,10)
	
	// func6 : 양수값이 들어오면 Y를 알려주고, 음수값이 들어오면 N을 알려주는 기능
	printf("%c\n", func6(10));
	printf("%c\n", func6(1));
	printf("%c\n", func6(-5));

	return 0;

}