#include<stdio.h>
int main()
{
	int x;
	scanf_s("%d", &x);
	int i;
	int sign = 1;
	double sum = 0.0;
	for (i = 1;i <= x;i++) {
		sum += sign*1.0 / i;//������
		sign = -sign;//�任����

	}
	printf("f(%d)=%f",x, sum);
}