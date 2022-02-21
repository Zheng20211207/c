#include<stdio.h>
int main()
{
	int x;
	scanf_s("%d", &x);
	int i;
	int sign = 1;
	double sum = 0.0;
	for (i = 1;i <= x;i++) {
		sum += sign*1.0 / i;//相加求和
		sign = -sign;//变换正负

	}
	printf("f(%d)=%f",x, sum);
}