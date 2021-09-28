#include<stdio.h>
#define MAX_COUNT		5

typedef struct People
{
	char name[14];
	unsigned short int age;
	float height;
	float weight;
} Person;
int AddFriend(Person *p_friend, int count)
{
	if (count < MAX_COUNT) {
		p_friend = p_friend + count;
		printf("\n���ο� ģ�� ������ �Է��ϼ���\n");
		printf("1.�̸� : ");
		scanf_s("%s", p_friend->name);
		printf("2.���� : ");
		scanf_s("%hu", &p_friend->age);
		printf("3.Ű : ");
		scanf_s("%f", &p_friend->height);
		printf("4.������ : ");
		scanf_s("%f", &p_friend->weight);
		printf("�Է��� �Ϸ� �߽��ϴ�.\n\n");
	}
	else {
		printf("�ִ� �ο��� �ʰ��Ͽ� �Է��� �� �� �����ϴ�.\n");
		printf("�ִ� %d������� ���� �����մϴ�.\n\n", MAX_COUNT);
	}
	return 0;
}
void ShowFriendList(Person *p_friend, int count)
{
	int i;
	if (count > 0) {
		printf("\n��ϵ� ģ�� ���\n");
		printf("===============================================\n");
		for (i = 0; i < count; i++) {
			printf("%-14s, %3d, %6.2f, %6.2f\n", p_friend->name, p_friend->age, p_friend->height, p_friend->weight);
			p_friend++;
		}
		printf("===============================================\n");
	}
	else {
		printf("\n��ϵ� ģ���� �����ϴ�.\n\n");
	}
}

void main()
{
	Person friends[MAX_COUNT];
	int count = 0, num;

	while (1) {
		printf("		[�޴�]		\n");
		printf("====================\n");
		printf("1.ģ�� �߰�			\n");
		printf("2.ģ�� ��� ����		\n");
		printf("3.����				\n");
		printf("====================\n");
		printf("��ȣ ����: ");
		scanf_s("%d", &num);
		if (num == 1) {
			if (1 == AddFriend(friends, count)) count++;
		}
		else if (num == 2) {
			ShowFriendList(friends, count);
		}
		else if (num == 3) {
			break;
		}
		else {
			printf("1~3 ��ȣ�� ������ �� �ֽ��ϴ�!!\n\n");
		}
	}
}