#include <stdio.h>

// 구조체 Human (이름, 나이)
typedef struct Human {
	char* name;
	int age;
}Human;

// 함수 info( Human*) : 이름과 나이 출력
int Info(Human* human)
{
	printf("이름 : %s, 나이 : %d \n", human->name, human->age);
}

// 함수2 Modify(Human*) : scanf를 통해서 나이를 수정
int Modify(Human* human)
{
	printf("나이 수정 : ");
	scanf("%d ", &(human->age));
}

int main()
{
	// 구조체 변수 초기화
	Human 기본정보 = { "한현승", 23 };

	// 정보출력
	Info(&기본정보);

	// 수정하는 함수
	Modify(&기본정보);
	Info(&기본정보);

	return 0;
}