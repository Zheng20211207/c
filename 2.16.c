#include<stdio.h>
//#define PAGES 9
//int main(void)
//{
//	printf("*%d*\n", PAGES);
//	printf("*%2d*\n", PAGES);//�����ո񳤶�
//	printf("*%10d*\n", PAGES);//10���ո񳤶�
//	printf("*%-10d*\n", PAGES);//-�������
//	return 0;
//}
// 

int main(void)
{
	const double RENT = 3852.99;
	printf("*%f*\n",RENT);//%fС������ӡ6λ����
	printf("*%e*\n",RENT);
	printf("*%4.2f*\n",RENT);
	printf("*3.1f*\n", RENT);
	printf("*%10.3f*\n", RENT);
	printf("*%10.3E*\n", RENT);
	printf("*%+4.2f*\n", RENT);
	printf("*%010.2f*\n", RENT);
	return 0;
}