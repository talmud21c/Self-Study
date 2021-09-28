// 배열 초기화 빠르게 하기
#include<stdio.h>
void main() {
	short student[20] = { 0, }, i;
	for (i = 0; i < 20; i++) {
		printf("student[%d] = %d\n", i, student[i]);
	}
}