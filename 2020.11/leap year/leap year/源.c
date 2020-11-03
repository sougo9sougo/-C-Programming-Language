#include <stdio.h>
int main()
{
	int y = 0;
	int count = 0;
	for (y = 1000; y <= 2000; y++)
	{
		if (y % 400 == 0)
		{
			count++;
			printf("%d  ", y);
		}
		else
		{
			if (y % 4 == 0 && y % 100 > 0)
			{
				count++;
				printf("%d  ", y);
			}
		}
	}
	printf("\n");
	printf("闰年的个数：%d", count);
	printf("\n");
	return 0;
}