#include<stdio.h>
void main()
{
	char input_string[10];
	if (NULL != gets(input_string)) {
		printf("input: %s\n", input_string);
	}
	else {
		printf("input -> Cancled\n");
	}
}