#include<stdio.h>
void main()
{
	char data[3][4] = { {0,0,2,0}, {1,1,0,0}, {2,1,0,2} };
	int x, y;

	for (y = 0; y < 3; y++) {
		for (x = 0; x < 4; x++) {
			printf("%d�� %d����,", y + 1, x + 1);
			if (data[y][x] == 1)printf(" ���� ���� ���� �ֽ��ϴ�.\n");
			else if (data[y][x] == 2)printf(" �� ���� ���� �ֽ��ϴ�.\n");
			else printf("�� ���� ���� ���� �ʽ��ϴ�.\n");
		}
	}
}