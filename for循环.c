#include<stdio.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	int fact = 1;
	int i = 1;
	for (i = 2;i <= n;i++)//forѭ����ʼ���� ���� ÿ�ֶ��� ��С���� �����ڴ����� �ȼ���whileѭ��
 
	{
		fact *= i;

	}
	printf("%d!=%d\n", n, fact);
	return 0;
}
