#include<stdio.h>
int main()
{
	int a=2;
	//scanf_s("%d", &a);
	int i, j, k;
	int cnt = 0;

	i = a;
	while (i < a + 3) {
		j = a;
		while (j < a + 3) {
			k = a;
			while (k < a + 3) {
				if (i != j) {
					if (j != k) {
						if (k != i) {
							printf("%d%d%d", i, j, k);
							if (cnt == 6) {
								cnt++;
								printf("\n");
							}
							else {
								printf(" ");
							}
						}
					}
				}
				k++;
			}
			j++;
		}
		i++;
	}
	return 0;
} 