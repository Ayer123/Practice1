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
	printf("��������������");
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
				printf("����,��λ����ͬ");
			}
			else printf("����%dλ��", dif);
		}
		else dif = count1 - count2;
		if (dif == 0)
		{
			printf("С��,��λ����ͬ");
		}
		else printf("С��%dλ��", dif);
	}
	printf("CD��!");
	return 0;
}