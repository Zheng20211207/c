#include<stdio.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	int fact = 1;
	int i = 1;
	for (i = 2;i <= n;i++)//for循环初始动作 条件 每轮动作 在小括号 运算在大括号 等价于while循环
 
	{
		fact *= i;

	}
	printf("%d!=%d\n", n, fact);
	return 0;
}
