//초기화 되지 않은 배열의 특정 요소 값 출력
#include <stdio.h>
void main()
{
	short student[20];
	
	student[1] = 10;
	printf("%d %d\n", student[1], student[2]); //student[2]의 요소는 초기화 되지 않았기 때문에 이상한 숫자 출력
}