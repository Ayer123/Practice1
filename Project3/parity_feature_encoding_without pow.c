#include<stdio.h>
int main() {
	int inp = 0, sw = 1, sz = 0,yz=0, sum = 0, binary = 1;
	scanf_s("%d", &inp);
	while (inp != 0) {
		sz = inp % 10;
		if (sz % 2 == sw % 2) {
			yz = 1;
		}
		else if (sz % 2 != 0 && sw % 2 != 0) {
			yz = 1;
		}
		else yz = 0;
		sum += yz * ( binary * yz);
		inp = (inp - sz) / 10;
		sw++;
		binary *= 2;
	}
	printf("%d",sum);
	return 0;
}