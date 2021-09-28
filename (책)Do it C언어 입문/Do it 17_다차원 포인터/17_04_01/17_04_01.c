#include<stdio.h>
void main()
{
	//연령별 인원수
	unsigned char limit_table[3] = { 4,2,3 };
	//연령별 윗몸 일으키기 횟수를 저장할 배열
	unsigned char count[3][4];
	int age, member, temp, sum;
	//연령별로 윗몸 일으키기 횟수를 입력 받음
	for (age = 0; age < 3; age++) {
		printf("\n%d0대 연령의 윗몸 일으키기 횟수\n", age + 2);
		for (member = 0; member < limit_table[age]; member++) {
			printf("%dth: ", member + 1);

			scanf_s("%d", &temp);
			count[age][member] = (unsigned char)temp;
		}
	}

	printf("\n\n 연령별 평균 윗몸 일으키기 횟수\n");
	for (age = 0; age < 3; age++) {
		sum = 0;
		printf("%d0대 : ", age + 2);
		for (member = 0; member < limit_table[age]; member++) {
			sum = sum + count[age][member];
		}
		printf("%5.2f\n", (double)sum / limit_table[age]);
	}
}