//������ Ư�� ��Ʈ�� 1�� ����� ����
#include <stdio.h>
unsigned char SetBit(unsigned char dest_data, unsigned char bit_num)
{
	//1����Ʈ ������ ��Ʈ �̵��� 0~7���� ������
	if (bit_num < 8) dest_data = dest_data | (0x01 << bit_num);
	//����� ���� ��ȯ��
	return dest_data;
}

void main() {
	unsigned char lamp_state = 0x77; //0x77�� 2������ 0111 0111
	printf("%X->", lamp_state); //���� �� ���� �����
	//lamp_state ������ 3�� ��Ʈ�� 1�� ������
	lamp_state = SetBit(lamp_state, 3);
	//���� �� ���� �����
	printf("%X\n", lamp_state);
}