#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int number = rand() % 100 + 1;//rand��ȡһ�������
	int count = 0;
	int a = 0;
	printf("�����һ������");
	do {
		printf("���һ����");
		scanf_s("%d", &a);
		count++;
		if (a > number) {
			printf("��µ�������");
		}
		else if (a < number) {
			printf("��µ���С��");
		}//if     else ifѭ��

	} while (a != number);//do whileѭ�� ��ִ�����ж�
	printf("������%d�ξͶ���\n", count);
	return 0;

}