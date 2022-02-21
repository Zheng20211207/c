#include<stdio.h>
int main()
{
	int x;
	scanf_s("%d", &x);
	int i = 0;
	int isprime = 1;
	for (i = 2;i < x;i++) {
		if (x % i == 0) {
			isprime = 0;
			
		}
	}
	if (isprime == 1) {
		printf("%d是素数", x);
	}
	else {
		printf("%d不是素数",x);
	}
	return 0;

}