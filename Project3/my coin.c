#include<stdio.h>
int main()
{

	int _5 = 0, _2 = 0, _1 = 0;
	for (;(_5-1)*5+(_2-1)*2+_1*1<100;_1++)
	{
		for (;(_5 - 1)*5+_2*2<100;_2++)
		{
			for (; _5 * 5 < 100; _5++)
			if (_5 * 5 == 100)
			{
				printf("%d����ǿ�", _5);
			}
		}
		if ((_5 - 1) *5 + _2 * 2 == 100)
		{
			printf("%d����Ǻ�%d�����ǿ�", _5 - 1,_2);
			break;
		}
	}
	if ((_5 - 1) *5 + (_2-1)*2 + _1 * 1 == 100)
	{
		printf("%d����Ǻ�%d�����Ǻ�%d��һ�ǿ�", _5, _2, _1);
	}
}