/*
知识点1.debug设断点在认为可能错的地方之前,光标放在(hover over)变量上来查看值
2.循环嵌套要注意小循环里的变量是否需要重置,比如记录每次小循环循环次数的需要重置,记录小循环总循环次数的就不用
3.
*/
#include<stdio.h>
int main()
{
	const int a = 2932;
	int b = 0;
	int c = a;
	int d;
	int dif = 0;
	int count1 = 1;

	while (c > 9)
	{
		c /= 10;
		count1++;
	}
	printf("请输入所猜数字\n");
	do
	{
		scanf_s("%d", &b);
		d = b;
		int count2 = 1;
		while (d > 9)
		{
			//大循环中需要不断重置小循环所用的count2来防止被上次大循环影响
			d /= 10;
			count2++;
		}
		if (b > a)
		{
			dif = count2 - count1;
			if (dif == 0)
			{
				printf("大了,但位数相同\n");
			}
			else printf("大了%d位数\n", dif);
		}
		else if (b < a)
		{
			dif = count1 - count2;
			if (dif == 0)
			{
				printf("小了,但位数相同\n");
			}
			else printf("小了%d位数\n", dif);
		}
	} while (b != a);
	printf("猜对了!\n");
	return 0;
}