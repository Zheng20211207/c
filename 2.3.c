#include<stdio.h>
//2.12��ҵ
//int main(void)
//{
//	int tost = 10;
//	int a = tost * tost;
//	int b = 2 * tost;
//	printf("tost��ֵΪ%d",tost);
//	printf("a��ֵΪ%d", a);
//	printf("b��ֵΪ%d", b);
//}

//void zz()
//{
//	printf("hhh");
//
//}
//int main()
//{
//	zz();zz();zz();
//	printf("\n");//������ʹ��������Դﵽ��任�е�Ч��
//	zz();
//}

int main(void)
{
	float weight;
	float value;
	printf("��֪����������൱�ڶ��ٰ׽���\n");
	printf("������������أ�");
	scanf_s("%f", &weight);
	value = 1700 * weight * 14.5833;
	printf("��������൱��%d\n",value);
}