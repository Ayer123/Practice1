#include<stdio.h>
int main() {
	int inp = 0, odd = 0, even = 0;
	while (1) {
		scanf_s("%d", &inp);
		if (inp == -1) {
			break;
		}
		if (inp % 2 == 0) {
			even++;
		}
		else odd++;
	}
	printf("%d even,%d odd", even, odd);
	return 0;
}
