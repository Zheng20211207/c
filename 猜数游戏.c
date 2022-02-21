#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int number = rand() % 100 + 1;//rand是取一个随机数
	int count = 0;
	int a = 0;
	printf("我想好一个数了");
	do {
		printf("请猜一个数");
		scanf_s("%d", &a);
		count++;
		if (a > number) {
			printf("你猜的数大了");
		}
		else if (a < number) {
			printf("你猜的数小了");
		}//if     else if循环

	} while (a != number);//do while循环 先执行再判断
	printf("你用了%d次就对了\n", count);
	return 0;

}