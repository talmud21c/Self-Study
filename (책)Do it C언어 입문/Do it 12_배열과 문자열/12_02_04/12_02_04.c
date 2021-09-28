#include<stdio.h>
#include<string.h>

void main()
{
	char data[10] = { 'a', 'b', 'c', 0, };
	char result[16];

	strcpy_s(result, data);
	strcat_s(result, "def");

	printf("%s + \"def\" = %s\n", data, result);
}