//for���� ����� �迭�� ��� ��� �ʱ�ȭ
#include<stdio.h>
void main()
{
	short student[20], i;
	for (i = 0; i < 20; i++) {
		student[i] = 0;
		printf("student[%d] = %d\n", i, student[i]);
	}
	printf("\n");

	student[1] = 10;
	printf("%d %d\n", student[1], student[2]);
}