//#include<stdio.h>
//int main()
//{
//	int x;
//	scanf_s("%d", &x);
//	int digit;
//	int ret = 0;
//	while (x > 0) {
//		digit = x % 10;//x除10取余数 取个位数
//		ret = ret * 10 + digit;//个位数提到最前面
//		printf("x=%d digit=%d ret=%d\n", x, digit, ret);
//		x /= 10;//取十位数
//	}
//	
//	printf("%d ",  ret);
//	
//	return 0;
//}