#include <stdio.h>

void Test(short *data)
{
	short soft = 0;
	soft = *data;
	*data = 3;
}

void main()
{
	short tips = 5;
	Test(&tips);
}