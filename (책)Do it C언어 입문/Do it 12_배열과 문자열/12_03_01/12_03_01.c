#include<stdio.h>
void main()
{
	char data[12] = { 0,0,2,0,1,1,0,0,2,1,0,2 };
	int i, x, y;

	for (i = 0; i < 12; i++) {
		x = i % 4 + 1;
		y = i / 4 + 1;
		printf("%d�� %d����", y, x);
		if (data[i] == 1)printf(" ���� ���� ���� �ֽ��ϴ�. \n");
		else if (data[i] == 2)printf(" �� ���� ���� �ֽ��ϴ�. \n");
		else printf("�� ���� �������� �ʽ��ϴ�. \n");
	}
}