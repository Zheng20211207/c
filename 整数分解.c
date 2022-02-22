////#include<stdio.h>
//int main()
//{
//	int x;
//	scanf_s("%d", &x);
//	int mask = 1;
//	int t = x;
//	while (t > 9) {
//		t /= 10;
//		mask *= 10;
//	}//通过x来得到mask
//	printf("x=%d,mask=%d\n", x, mask);
//	do {
//		int d = x / mask;//通过d来取x的个位数
//		printf("%d", d);
//		if (mask > 9) {
//			printf(" ");
//		}//通过mask控制空格数量
//		x %= mask;
//		mask /= 10;
//	} while (mask > 0);//判断mask数量大小
//	printf("\n");
//	return 0;
//}