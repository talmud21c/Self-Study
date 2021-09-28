#include <stdio.h>

void main() {
	int step, i;
	for (step = 2; step <= 5; step++) {
		printf("%d´Ü\n", step);
		for (i = 1; i <= 9; i++) {
			printf("%d x %d = %d\n", step, i, step * i);
		}printf("\n");
	}
}