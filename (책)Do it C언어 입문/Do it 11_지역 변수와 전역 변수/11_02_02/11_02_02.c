//���� ������ ���� ������ �̸��� ���� �� ������
#include<stdio.h>
int result;

void Sum(int data1, int data2)
{
	int result; //���� ������ �ʱ�ȭ �Ǿ� ���� ����
	result = data1 + data2; //���������� �켱������ ���� ������ ���� ������� �������� result�� �ƴ� �������� result�� ����ȴ�
	return result;
}

void main()
{
	Sum(5, 3);
	printf("5+3=%d\n", result);
}