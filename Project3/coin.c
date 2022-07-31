#include<stdio.h>
int main()
{
	int qian = 2;
	int one = 0, two = 0, five = 0;
	scanf_s("%d", &qian);
	//int one可当重置（每次出去回来时）
	for (int one = 0; one < qian * 10;one++)
	{
		for (int two = 0; two < qian * 10 / 2; two++)
		{
            			for (int five = 0; five < qian * 10 / 5; five++)
			{
				if (one * 1 + two * 2 + five * 5== qian * 10)
				{
					printf("%dfive%dtwo%done\n", five, two, one);
				}
				
			}
			if (one * 1 + two * 2 + five * 5 == qian * 10)
			{
				printf("%dfive%dtwo%done\n", five, two, one);
			}
		}
		if (one * 1 + two * 2 + five * 5 == qian * 10)
		{
			printf("%dfive%dtwo%done\n", five, two, one);
		}
	}
	return 0;
}