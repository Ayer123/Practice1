/*֪ʶ��1.while���������ֶ�����ѭ��
2.b += a���ۼ�
3.������if+��ֵ���������ڻ����ֵ��ʵ��������:if��һ����else a=ѭ�������� if�ڿ���Ƕ��������;������:if������a=ѭ������ ���ڻ���
4.����һ��x=0,��ѭ����++x��x++������*/
#include<stdio.h>
int main()
{
	//�������,ƽ��������С��,�����������õ�����������������һ����double�������������С���Ľ��
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	double aver = 0;
	printf("%d",c/d)
	//�ֶ�����ѭ����װ��
	while (a != -1)
	{
		printf("Enter the numbers to be calculated into average,then enter -1 to end the entry\n");
		scanf_s("%d", &a);
		//��ֹ���ڽ���ѭ����-1����ƽ��������
		if (a != -1)
		{
			b += a;
			c++;
		}
		//���û�δ���������ֱ������-1(����0/0������)ʱ�����ظ�����,����ֵa=0(����Ϊ-1�����κ���)����ֹ�˳�ѭ��
		if (d != 3)
		{
			if (c == 0)
			{
				a = 0;
				d++;//���·ҷ�����
				printf("please enter at least one number to be calculated into average before you stop\n");
			}
		}
		else
		{
			while (d == 3)//���������޹�ֱ�ӱ���
			{
				printf("Fuck You ");
			}
		}
	}
			aver = b / c;
			printf("the average is %lf", aver);
		return 0;

}