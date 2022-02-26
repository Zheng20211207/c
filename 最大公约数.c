#include<stdio.h>
//int main()//枚举法
//{
//	int a=0;
//	int b=0;
//	int min;
//	scanf_s("%d %d", &a, &b);
//	if (a < b) {
//		min = a;
//	}
//	else {
//		min = b;
//	}
//	int i=0;
//	int ret=0;
//	for (i = 1;i < min;i++) {
//		if (a % i == 0) {
//			if (b % i == 0);
//			ret = i;
//		}
//	}
//	printf("a b的最大公约数是%d", ret);
//	
//
//}

//int main()//辗转相除法
//{
//	int a, b;
//	int t;
//	scanf_s("%d %d", &a, &b);
//	while (b != 0)
//	{
//		t = a % b;
//		a = b;
//		b = t;
//		
//	}printf("最大公约数是;%d",a);
//	return 0;
//}