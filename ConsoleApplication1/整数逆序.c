#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	printf("ÕûÊýÄæÐò\nÇëÊäÈë\n");
	scanf_s("%d", &a);
	while (a > 9)
	{
		printf("%d", b = a % 10);
		a = a  / 10;
	}
	printf("%d\n", a);
	return 0;
}