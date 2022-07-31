/*知识点1.while条件输入手动结束循环
2.b += a以累加
3.可以用if+赋值变量条件内或外的值来实现且条件:if另一条件else a=循环条件外 if内可再嵌来加条件;或条件:if另条件a=循环条件 放内或外
4.定义一个x=0,在循环里++x或x++来计数*/
#include<stdio.h>
int main()
{
	//定义变量,平均数会有小数,所以让运算用到的三个变量至少有一个是double类型来输出带有小数的结果
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	double aver = 0;
	printf("%d",c/d)
	//手动结束循环的装置
	while (a != -1)
	{
		printf("Enter the numbers to be calculated into average,then enter -1 to end the entry\n");
		scanf_s("%d", &a);
		//防止用于结束循环的-1参与平均数运算
		if (a != -1)
		{
			b += a;
			c++;
		}
		//在用户未进行运算就直接输入-1(会有0/0无意义)时进行重复警告,并赋值a=0(可以为-1以外任何数)来防止退出循环
		if (d != 3)
		{
			if (c == 0)
			{
				a = 0;
				d++;//口吐芬芳倒数
				printf("please enter at least one number to be calculated into average before you stop\n");
			}
		}
		else
		{
			while (d == 3)//警告三次无果直接爆发
			{
				printf("Fuck You ");
			}
		}
	}
			aver = b / c;
			printf("the average is %lf", aver);
		return 0;

}