#include<stdio.h>
#define MAX_COUNT	5
void main()
{
	int num[MAX_COUNT], count = 0, sum = 0, i;
	while (count < MAX_COUNT) {
		printf("���ڸ� �Է��ϼ��� (9999)�� ������ ���� : ");
		scanf_s("%d", num + count);
		if (num[count] == 9999) break;
		count++;
	}
	for (i = 0; i < count; i++) {
		if (i > 0) printf(" + ");
		printf(" %d", num[i]);
		sum = sum + num[i];
	}
	printf(" =%d\n", sum);
}