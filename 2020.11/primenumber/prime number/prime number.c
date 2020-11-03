#include <stdio.h>
int main()
{
	int count = 0;
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i%j == 0)
			          break;
		}
		if (j == i)
		{
			count++;
			printf("%d\n", i);
		}
	}
	printf("素数个数为：%d\n", count);
	return 0;
}