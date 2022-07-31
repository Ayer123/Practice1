#include<stdio.h>
int main()
{
	const int a = 2932;
	int b = 0;
	int c = a;
	int d;
	int count1 = 1;
	int count2 = 1;
	int dif = 0;
	while (c > 9)
	{
		c /= 10;
		count1++;
	}
	printf("请输入所猜数字");
	while (b != a)
	{
		scanf_s("%d", &b);
		d = b;
		while (d > 9)
		{
			d /= 10;
			count2++;
		}
		if (b > a)
		{
			dif = count2 - count1;
			if (dif == 0)
			{
				printf("大了,但位数相同");
			}
			else printf("大辽%d位数", dif);
		}
		else dif = count1 - count2;
		if (dif == 0)
		{
			printf("小了,但位数相同");
		}
		else printf("小了%d位数", dif);
	}
	printf("CD了!");
	return 0;
}