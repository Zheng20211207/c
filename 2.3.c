#include<stdio.h>
//2.12作业
//int main(void)
//{
//	int tost = 10;
//	int a = tost * tost;
//	int b = 2 * tost;
//	printf("tost的值为%d",tost);
//	printf("a的值为%d", a);
//	printf("b的值为%d", b);
//}

//void zz()
//{
//	printf("hhh");
//
//}
//int main()
//{
//	zz();zz();zz();
//	printf("\n");//程序中使用这个可以达到语句换行的效果
//	zz();
//}

int main(void)
{
	float weight;
	float value;
	printf("你知道你的体重相当于多少白金吗？\n");
	printf("请输入你的体重：");
	scanf_s("%f", &weight);
	value = 1700 * weight * 14.5833;
	printf("你的体重相当于%d\n",value);
}