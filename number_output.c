#include <stdio.h>
int digit_cal(int);
int order_reversing(int);
int reversed_output;
int main()
{
	double inp = 0;
	int cnt1 = 0, cnt2 = 0;
	int daozhi = 0;
	scanf("%lf", &inp);
	while ((int)inp != inp)
	{
		inp *= 10;
		cnt1++;
	}
	printf("%f\n", inp);
	//��������,k
	int inp1 = (int)inp;
	daozhi = order_reversing(inp1);
	printf("%d\n",daozhi);
	cnt2 = digit_cal(inp1);
		printf("%d\n",cnt2);
	int cnt3 = 0;
	while (daozhi != 0)
	{
		printf("%d ", daozhi % 10);
		daozhi /= 10;
		cnt3++;
		if(daozhi == 0){
			printf("\b");
		}
		if(cnt3 == cnt2 - cnt1){
			if(cnt3 == cnt2){
				break;
			}
			else printf(". ");
	}
}
}
	int digit_cal(int inp2)
	{
		int cnt2 = 0;
		while (inp2 != 0)
		{
			inp2 /= 10;
			cnt2++;
		}
		return cnt2;
	}
	int order_reversing(int inp1)
	{
		int chai,daozhi = 0;
		while (inp1 != 0)
		{
			chai = inp1 % 10;
			inp1 /= 10;
			daozhi = daozhi * 10 + chai;
		}
		return daozhi;
	}

	//int reversed_output(int daozhi){
