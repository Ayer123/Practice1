/*
֪ʶ��1.debug��ϵ�����Ϊ���ܴ�ĵط�֮ǰ,������(hover over)���������鿴ֵ
2.ѭ��Ƕ��Ҫע��Сѭ����ı����Ƿ���Ҫ����,�����¼ÿ��Сѭ��ѭ����������Ҫ����,��¼Сѭ����ѭ�������ľͲ���
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
	printf("��������������\n");
	do
	{
		scanf_s("%d", &b);
		d = b;
		int count2 = 1;
		while (d > 9)
		{
			//��ѭ������Ҫ��������Сѭ�����õ�count2����ֹ���ϴδ�ѭ��Ӱ��
			d /= 10;
			count2++;
		}
		if (b > a)
		{
			dif = count2 - count1;
			if (dif == 0)
			{
				printf("����,��λ����ͬ\n");
			}
			else printf("����%dλ��\n", dif);
		}
		else if (b < a)
		{
			dif = count1 - count2;
			if (dif == 0)
			{
				printf("С��,��λ����ͬ\n");
			}
			else printf("С��%dλ��\n", dif);
		}
	} while (b != a);
	printf("�¶���!\n");
	return 0;
}