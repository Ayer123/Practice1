#include<stdio.h>
int main() {
	double inp = 0;
	int cnt1 = 0,cnt2 = 0;
	int daozhi = 0;
	scanf_s("%lf", &inp);
	while ((int)inp != inp) {
		inp *= 10;
		cnt1++;
	}
	//printf("%f", inp);
	//µ¹ÖÃÕûÊı,
	int inp1 = (int)inp;
	while (inp1) {
		daozhi += inp1 % 10
		
	}
	
}