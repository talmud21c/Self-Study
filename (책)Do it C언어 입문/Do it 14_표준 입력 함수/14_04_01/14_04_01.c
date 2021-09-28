#include <stdio.h>
void main()
{
	int int_data;
	float float_data;

	scanf_s("%d", &int_data);
	scanf_s("%f", &float_data);

	printf("input : %d, %f\n", int_data, float_data);
}