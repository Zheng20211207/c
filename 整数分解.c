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
//	}//ͨ��x���õ�mask
//	printf("x=%d,mask=%d\n", x, mask);
//	do {
//		int d = x / mask;//ͨ��d��ȡx�ĸ�λ��
//		printf("%d", d);
//		if (mask > 9) {
//			printf(" ");
//		}//ͨ��mask���ƿո�����
//		x %= mask;
//		mask /= 10;
//	} while (mask > 0);//�ж�mask������С
//	printf("\n");
//	return 0;
//}