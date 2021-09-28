//전역 변수와 지역 변수의 이름이 같을 때 문제점
#include<stdio.h>
int result;

void Sum(int data1, int data2)
{
	int result; //지역 변수로 초기화 되어 있지 않음
	result = data1 + data2; //지역변수의 우선순위가 높기 때문에 연산 결과값은 전역변수 result가 아닌 지역변수 result에 저장된다
	return result;
}

void main()
{
	Sum(5, 3);
	printf("5+3=%d\n", result);
}